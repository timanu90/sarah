#ifndef __TRAND_H__
#define __TRAND_H__

/**
 *	@brief  TRand class generate random numbers.
 *	
 *	This class generate random numbers for all bot actions that need it.
 */

class TRand
{
	int lfsr;
	int bit;
	int period;
public:
	TRand();
	~TRand();

	int getRand(int max);
};

extern TRand rand;

#endif