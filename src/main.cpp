// #include "mainwindow.h"
#include "soundprocessor.h"

int main()
{
	SoundProcessor s(44100, 1024, sizeof(float) * 8, 1);
	Signal *sig = new Signal();
	sig->genSineWave();
	s.load(sig);
	s.play();
	return 0;
}