#ifndef XSAVE_H
#define XSAVE_H
#pragma once

#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class XSave  
{
	private:
		std::string __filename;
		std::vector<std::string> __line_of_data;
	public:
		XSave();
		explicit XSave(const std::string);


		// getting
		virtual const std::vector<std::string>& getLines() const;
		virtual const std::string getDataInfo(const std::string);
		// setting

		// other
		virtual void loadFile(const std::string);
		virtual void addDataInfo(const std::string&, const std::string&);
		
		virtual ~XSave();

};
#endif