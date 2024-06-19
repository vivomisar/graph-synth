#include "signal.h"
#include <cmath>
#include <raylib.h>

Signal::Signal()
{
}

void Signal::genSineWave()
{
	for (size_t i = 0; i < 1024; i++)
	{
		data[i] = sinf(1.0f * PI * 440 * 1 / 1024 * (float)i);
	}
}

float *Signal::getData()
{
	return data;
}

Signal::~Signal()
{
}