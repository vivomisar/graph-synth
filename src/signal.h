#ifndef SIGNAL_H
#define SIGNAL_H
class Signal
{
  public:
	Signal();
	float *getData();
	void genSineWave();
	~Signal();

  private:
	float data[1024];
};
#endif