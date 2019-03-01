#include "stdafx.h"

void invertScreen()
{
    Sleep(10000);
    int delay = 1500;
    while (true)
    {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rekt;
        GetWindowRect(hWnd, &rekt);
        BitBlt(hDC, 0, 0, rekt.right - rekt.left, rekt.bottom - rekt.top, hDC, 0, 0, NOTSRCCOPY);
        ReleaseDC(hWnd, hDC);
        Sleep(delay);
        if (delay > 500)
            delay -= 10;
    }
}