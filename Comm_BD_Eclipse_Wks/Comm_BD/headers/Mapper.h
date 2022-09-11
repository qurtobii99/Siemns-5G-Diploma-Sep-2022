/*
 * Mapper.h
 *
 *  Created on: Sep 8, 2022
 *      Author: qurtobii99
 */

#ifndef MAPPER_H_
#define MAPPER_H_

#include <bits/stdc++.h>
#include "../headers/preprocessors.h"
#include <iostream>
#include "definedTypes.h"

class Mapper {
private:
	uint8 mapperArray[8]={0};
public:
	Mapper();
	~Mapper();
	void Mapper_TurnOn(std::bitset<MAPPER_IN_BITS> inputBits);
	const uint8* Mapper_GetOutput();
	void Mapper_PrintOutput();
};

#endif /* MAPPER_H_ */
