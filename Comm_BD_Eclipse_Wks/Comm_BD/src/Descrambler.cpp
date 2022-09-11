/*
 * Descrambler.cpp
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#include "../headers/Descrambler.h"

Descrambler::Descrambler() {
	// TODO Auto-generated constructor stub

}

Descrambler::~Descrambler() {
	// TODO Auto-generated destructor stub
}


void Descrambler::Descrambler_TurnOn(uint8* demoudulatorOut)
{
	for(int i=0;i<8;i++)
	{
		for(int j=7;j>=0;j--)
		{
			/* Check if the bit in the demoudulatorOut = 1, then I will write it in the
			 * transposed place in the descramblerArray. */
			if(demoudulatorOut[i] & (1<<j))
			{
				descramblerArrayOut[7-j] |= (1<<(7-i));
			}
			else
			{
				/* leave it zero as it is */
			}

		}
	}
}
uint8* Descrambler::Descrambler_GetOutput()
{
	return descramblerArrayOut;
}

void Descrambler::Descrambler_PrintOutput()
{
	std::cout << "Descrambler output: " << std::endl;
	for(int i=0;i<8;i++)
	{
		for(int j=7;j>=0;j--)
			std::cout<< ((descramblerArrayOut[i] & (1U << j)) >> j);
		std::cout<<std::endl;
	}
	std::cout<<"----------------------------------------"<< std::endl;
}













