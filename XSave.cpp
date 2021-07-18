#include "XSave.hpp"

template<std::uint32_t buffer_length>
XSave<buffer_length>::XSave()
{
}

template<std::uint32_t buffer_length>
XSave<buffer_length>::XSave(const std::string filename)
  : __filename(filename)
{
  this->loadFile(filename);
}
// getting
template<std::uint32_t buffer_length>
const std::vector<std::string>& XSave<buffer_length>::getLines() const
{
  return this->__lines_of_data;
}
template<std::uint32_t buffer_length>
const std::string XSave<buffer_length>::getData(const std::string id_name)
{
  this->loadFile(this->__filename);

  std::string result;
  for(const std::string& line : this->getLines())
    if(line.compare(0, line.find(":"), id_name) == 0)
    {
      result = line.substr(line.find(":") + 1, line.size());
      break;
    }

  return result;
}
// setting

// other
template<std::uint32_t buffer_length>
void XSave<buffer_length>::loadFile(const std::string filename)
{
  if(filename.substr(filename.find("."), filename.size()) == ".dl")
  {
    std::ifstream file(filename);
    if(!file.is_open())
      std::cerr << "File '" << filename << "'  not found" << std::endl;
    char current_line[buffer_length];
    while(file.getline(current_line, buffer_length))
      this->__lines_of_data.push_back(current_line);

    file.close();
  }
  else
  {
    throw std::invalid_argument("Error: File extension not supported.");
  }
}
template<std::uint32_t buffer_length>
void XSave<buffer_length>::addData(const std::string id_name, const std::string value)
{
  std::ofstream file(this->__filename, std::ios::app);
  if(this->__lines_of_data.size() == 0)
    this->__lines_of_data.clear();

  if(file.is_open())
  {
    if(std::count(id_name.begin(), id_name.end(), ' ') > 0)
    {
      file.close();
      throw std::invalid_argument("Error: Replace ' ' to '_'.");
    }
    if(id_name.find(":") > buffer_length && value.find(":") > buffer_length)
    {
      std::string converted_string = id_name + ":" + value;
      if(this->getData(id_name).size() == 0)
        file.write((converted_string += "\n").c_str(), converted_string.size());
      else
        std::cerr << "The '" << id_name << "' already exists in the database." << std::endl;
    }
    else
    {
      file.close();
      throw std::invalid_argument("Error: in string of the parameter from 'addData(const string, const std::string)' contain ':'.");
    }
  }
  else
  {
    throw std::runtime_error("Error: XSave don't is open.");
  }
  file.close();
}

template<std::uint32_t buffer_length>
void XSave<buffer_length>::clear() noexcept
{
  std::ofstream file(this->__filename);
  
  file.clear();
  this->__lines_of_data.clear();

  file.close();
}

template<std::uint32_t buffer_length>
XSave<buffer_length>::~XSave()
{
}

template class XSave<XSAVE_BYTE>;
template class XSave<XSAVE_KILOBYTE>;
template class XSave<XSAVE_MEGABYTE>;