#include "stdafx.h"  //________________________________________ Funciones.cpp
#include "Funciones.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Funciones app;
	return app.BeginDialog(IDI_Funciones, hInstance);
}

void Funciones::Window_Open(Win::Event& e)
{
	this->tbx1.Text = L"lunes";
	AddSeparator();
	this->tbx1.Text += L"martes";
	AddSeparator();
	this->tbx1.Text += L"miercoles";
}
void Funciones::AddSeparator()
{
	this->tbx1.Text += L"\r\n*********************\r\n";
}

