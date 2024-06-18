#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "soundprocessor.h"
#include <memory>
class MainWindow
{
  private:
	std::unique_ptr<SoundProcessor> s;

  public:
	MainWindow();
	~MainWindow();
};

#endif