#include "includes.h"

TRand rand;

TRand::TRand()
{
	period = 0;
	lfsr = 0xcafe;
}

TRand::~TRand()
{

}

int TRand::getRand(int max)
{
	if(max == 0){return 0;}
	/* taps: 16 14 13 11; feedback polynomial: x^16 + x^14 + x^13 + x^11 + 1 */
    bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
    lfsr =  (lfsr >> 1) | (bit << 15);
    period++;
    return (lfsr % max);
}
