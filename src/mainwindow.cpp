#include "mainwindow.h"
#include <raylib.h>

MainWindow::MainWindow() : sound(44100, 1024, sizeof(float) * 8, 1)
{
	InitWindow(500, 500, "GraphSynth");
}

void MainWindow::mainLoop()
{
	while (!WindowShouldClose())
	{
	}
}

MainWindow::~MainWindow()
{
	CloseWindow();
}