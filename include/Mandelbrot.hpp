/*
 * Mandelbrot.hpp
 *
 *  Created on: Nov 21, 2018
 *      Author: ruggero
 */

#ifndef INCLUDE_MANDELBROT_HPP_
#define INCLUDE_MANDELBROT_HPP_


namespace fractal{


class Mandelbrot{

public:
	static const int MAX_ITERATIONS = 1000;

public:
	Mandelbrot();
	virtual ~Mandelbrot();

	static int getIterations(double x, double y);
};

}



#endif /* INCLUDE_MANDELBROT_HPP_ */
