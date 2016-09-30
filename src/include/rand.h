#ifndef __TRAND_H__
#define __TRAND_H__

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