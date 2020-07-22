#pragma once
#include"RenderWindow.h"
#include"Keyboard/KeyboardClass.h"
#include"Mouse/MouseClass.h"

class WindowContainer
{
	public:
		LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	/*	Windowproc
	Mouse
		Keyboard*/

	protected:
		RenderWindow render_window;
		KeyboardClass keyboard;
		MouseClass mouse;
	private:
};