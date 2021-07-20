#ifndef XSAVE_H
#define XSAVE_H

#pragma once

#include <cstring>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdint>

#define XSAVE_BYTE		 0xff
#define XSAVE_KILOBYTE 0x400
#define XSAVE_MEGABYTE 0x100000

template<std::uint32_t = XSAVE_BYTE>
class XSave  
{
	private:
		std::string __filename;
		std::vector<std::string> __lines_of_data;
	public:
		XSave();
		explicit XSave(const std::string);

		// getter and setter
		virtual const std::vector<std::string>& getLines() const;
		virtual const std::string getData(const std::string);
		virtual const std::vector<std::string> getArrayData(const std::string);

		virtual void addData(const std::string, const std::string);
		virtual void addArrayData(const std::string, const std::vector<std::string>);
		// other
		virtual void loadFile(const std::string);
    virtual void clear() noexcept;

		virtual ~XSave();
};

#endif
