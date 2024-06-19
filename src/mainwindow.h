#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "soundprocessor.h"

class MainWindow
{
  private:
	SoundProcessor sound;

  public:
	MainWindow();
	void mainLoop();
	~MainWindow();
};

#endif