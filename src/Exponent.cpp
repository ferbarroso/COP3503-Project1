/*
 * Exponent.cpp
 *
 *  Created on: Mar 20, 2014
 *      Author: Brett
 */

#include "Exponent.h"

Exponent::Exponent(Number& base, Number& exponent) {
	this->base = &base;
	this->exponent = &exponent;
}

Exponent::~Exponent() {
	// TODO Auto-generated destructor stub
}

