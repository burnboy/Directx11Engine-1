#pragma once
#include"RenderWindow.h"
class WindowContainer
{
	public:
		LRESULT WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	/*	Windowproc
	Mouse
		Keyboard*/

	protected:
		RenderWindow render_window;

	private:
};