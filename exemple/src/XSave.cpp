#include "XSave.hpp"  
	
XSave::XSave()
{
	
}
XSave::XSave(const std::string filename)
  : __filename(filename)
{
  this->loadFile(filename);
}
// getting
const std::vector<std::string>& XSave::getLines() const
{
  return this->__line_of_data;
}
const std::string XSave::getDataInfo(const std::string id_name)
{
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
void XSave::loadFile(const std::string filename)
{
  if(filename.substr(filename.find("."), filename.size()) == ".dl")
  {
    std::ifstream file(filename);
    if(!file.is_open())
      std::cerr << "File '" << filename << "'  not found" << std::endl;
    
    char current_line[256];
    while(file.getline(current_line, 256))
      this->__line_of_data.push_back(current_line);

    file.close();
  }
  else
  {
    throw std::invalid_argument("Error: File extension not supported.");
  }
}
void XSave::addDataInfo(const std::string& id_name, const std::string& value)
{
  std::ofstream file(this->__filename, std::ios::app);
  
  if(file.is_open())
  {
    if(std::count(id_name.begin(), id_name.end(), ' ') > 0)
      throw std::invalid_argument("Error: Replace ' ' to '_'.");

    
    if(id_name.find(":") > 256 && value.find(":") > 256)
    {
      std::string converted_string = id_name + ":" + value;
      if(this->getDataInfo(id_name).size() == 0)
      {
        converted_string += "\n";
        file.write(converted_string.c_str(), converted_string.size());
      }
      else
      {
        std::cerr << "The '" << id_name << "' already exists in the database." << std::endl;
      }
    }
    else
    {
      throw std::invalid_argument("Error: in string of the parameter from 'allDataInfo(const string&)' contain ':'.");
    }
  }
  else
  {
    throw std::runtime_error("Error: XSave don't is open.");
  }
  file.close();
}	

XSave::~XSave()
{
	
}