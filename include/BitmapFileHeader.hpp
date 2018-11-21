/*
 * BitmapFileHeader.hpp
 *
 *  Created on: Nov 21, 2018
 *      Author: ruggero
 */

#ifndef INCLUDE_BITMAPFILEHEADER_HPP_
#define INCLUDE_BITMAPFILEHEADER_HPP_


#include <cstdint>

//Aligns the data into 2 bytes chunks
#pragma pack(2)

namespace fractal{

struct BitmapFileHeader{
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};

}


#endif /* INCLUDE_BITMAPFILEHEADER_HPP_ */
