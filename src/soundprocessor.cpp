#include "soundprocessor.h"
#include <raylib.h>

SoundProcessor::SoundProcessor(unsigned int sampleRate, unsigned int streamBufferSize, unsigned char sampleSize,
                               unsigned char channels)
    : sampleRate(sampleRate), streamBufferSize(streamBufferSize), sampleSize(sampleSize), channels(channels)
{
	InitAudioDevice();
	SetMasterVolume(volume);
	SetAudioStreamBufferSizeDefault(streamBufferSize);
	audioStream = LoadAudioStream(sampleRate, sampleSize, channels);
	PlayAudioStream(audioStream);
}

void SoundProcessor::load(Signal *sig)
{
	this->sig = sig;
}

void SoundProcessor::play()
{
	while (1)
	{
		if (IsAudioStreamProcessed(audioStream))
		{
			UpdateAudioStream(audioStream, sig->getData(), streamBufferSize);
		}
	}
}

SoundProcessor::~SoundProcessor()
{
	UnloadAudioStream(audioStream);
	CloseAudioDevice();
}