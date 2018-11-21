/*
 * BitmapInfoHeader.hpp
 *
 *  Created on: Nov 21, 2018
 *      Author: ruggero
 */

#ifndef INCLUDE_BITMAPINFOHEADER_HPP_
#define INCLUDE_BITMAPINFOHEADER_HPP_


#include <cstdint>

//Aligns the data into 2 bytes chunks
#pragma pack(2)

namespace fractal{

struct BitmapInfoHeader{
	int32_t headerSize{40};					//Size of a whole struct instance(40 Bytes)
	int32_t width;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};				//RGB
	int32_t compression{0};         		//Do not used
	int32_t dataSize{0};
	int32_t horizontalResoluztion{2400};
	int32_t verticalResoluztion{2400};
	int32_t colors{0};
	int32_t importantColors{0};
};

}
#endif /* INCLUDE_BITMAPINFOHEADER_HPP_ */
