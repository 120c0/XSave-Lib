#include "XSave.hpp"

XSave::XSave(const char* _filename) : filename(_filename) {
	this->__load_file(this->filename);
}
void XSave::__load_file(const char* filename) {
	this->data.clear();
	std::ifstream file(filename);
	
	char line[100];
	while(file.getline(line, 100)) {
		std::string first_key, second_key;
		for(int i = 0; i < std::strlen(line); i++) {
			if(line[i] != ':') {
				first_key += line[i];
			} else {
				for(int j = i+1; j < std::strlen(line); j++)
					second_key += line[j];
				this->data.insert(std::make_pair(first_key, second_key));
				break;
			}
		}	
		file.close();
	}
}

void XSave::add(std::string first, std::string second) {
	std::ofstream file(this->filename, std::ios::app);
	std::string setting_result = first + ":" + second + "\n";
	file.write((const char*)setting_result.c_str(), setting_result.size());
	file.close();
}

void XSave::reload() {
	this->__load_file(this->filename);
}

const std::string XSave::getData(std::string key) {
	this->reload();
	return this->data[key];
}
void XSave::__create_file(const char* filename) {
	std::ofstream file(filename);
	file.close();
}
void XSave::clear() const{
	std::ofstream file(this->filename);
	file.clear();
	file.close();
}

std::string XSave::operator[](std::string key) {
	return this->getData(key);
}