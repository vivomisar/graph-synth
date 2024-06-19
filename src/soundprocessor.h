#ifndef SOUND_H
#define SOUND_H
#include "signal.h"
#include <raylib.h>

class SoundProcessor
{
  public:
	SoundProcessor(unsigned int sampleRate, unsigned int streamBufferSize, unsigned char sampleSize,
	               unsigned char channels);
	void load(Signal *sig);
	void play();
	~SoundProcessor();

  private:
	AudioStream audioStream;
	unsigned int sampleRate;
	unsigned int streamBufferSize;
	Signal *sig;
	float volume;
	unsigned char sampleSize;
	unsigned char channels;
};
#endif