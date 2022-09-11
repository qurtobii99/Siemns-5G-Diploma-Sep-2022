/*
 * Decoder.cpp
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#include "../headers/Decoder.h"

Decoder::Decoder() : decoderOutputBits(0){
	// TODO Auto-generated constructor stub

}

Decoder::~Decoder() {
	// TODO Auto-generated destructor stub

}

void Decoder::turnOnDecoder(std::bitset<DECODER_IN_BITS> inputBits)
{
	inputBits.set(0);
	for(uint8 i=0;i<DECODER_OUT_BITS;i++)
	{
		for(uint8 j=0;j<3;j++)
		{
			if(inputBits[i*3+j] == 1)
				checkBitSetCounter++;
			else
				checkBitSetCounter--;
		}
		if(checkBitSetCounter > 3)
		{
			decoderOutputBits.set(i,1); //Set the bit of index i
		}
		else
		{
			decoderOutputBits.set(i,0); //Clear the bit of index i
		}
		checkBitSetCounter=3;
	}
}
std::bitset<DECODER_OUT_BITS> Decoder::getDecoderOutput(){
	return decoderOutputBits;
}

