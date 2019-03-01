#include "stdafx.h"

void moveFgWin()
{
    short xd, yd;
    RECT workArea;
    SystemParametersInfoA(SPI_GETWORKAREA, 0, &workArea, 0);
    while (true)
    {
        HWND hWnd = GetForegroundWindow();
        RECT rekt;
        if (GetWindowRect(hWnd, &rekt))
        {
            if (rekt.left <= workArea.left)
                xd = 1;
            else if (rekt.right >= workArea.right)
                xd = -1;
            if (rekt.top <= workArea.top)
                yd = 1;
            else if (rekt.bottom >= workArea.bottom)
                yd = -1;
            MoveWindow(hWnd, rekt.left + xd, rekt.top + yd,
                       rekt.right - rekt.left, rekt.bottom - rekt.top, true);
        }
    }
}