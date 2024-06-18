#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sound.h"
#include <memory>
class MainWindow
{
  private:
	std::unique_ptr<Sound> s;

  public:
	MainWindow();
	~MainWindow();
};

#endif