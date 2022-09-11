/*
 * Encoder.cpp
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#include "../headers/Encoder.h"
#include "../headers/definedTypes.h"


Encoder::Encoder() : encoderOutputBits(0) {
	// TODO Auto-generated constructor stub
}

Encoder::~Encoder() {
	// TODO Auto-generated destructor stub
}

void Encoder::Encoder_TurnOn(std::bitset<ENCODER_IN_BITS> encoderInputBits)
{
    /* Encoder Operation (store each i/p bit 3 times) */
    for(uint8 i=0;i<ENCODER_IN_BITS;i++)
    {
    	for(uint8 j=0;j<3;j++)
    	{
    		encoderOutputBits[i*3+j] = encoderInputBits[i];
    	}
    }
}

/*void Encoder::getEncoderInput()
{
	std::cout<<encoderInputBits<<std::endl;
}*/

std::bitset<ENCODER_OUT_BITS> Encoder::Encoder_GetOutput()
{
	return encoderOutputBits;
}

void Encoder::Encoder_PrintOutput()
{
    std::cout << "Encoder output: " << encoderOutputBits <<std::endl;
    std::cout<<"----------------------------------------"<< std::endl;
}
