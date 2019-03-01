#include "stdafx.h"
#include <stdlib.h>

void drawErrorIcons()
{
    Sleep(7000);
    while (true)
    {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);

        POINT pos;
        GetCursorPos(&pos);

        int cx = GetSystemMetrics(SM_CXICON);
        int cy = GetSystemMetrics(SM_CYICON);

        HICON hIcon;
        if (std::rand() % 2 == 0)
            hIcon = LoadIcon(NULL, IDI_ERROR);
        else
            hIcon = LoadIcon(NULL, IDI_WARNING);
        DrawIcon(hDC, pos.x - cx / 2, pos.y - cy / 2, hIcon);

        ReleaseDC(hWnd, hDC);
        Sleep(50);
    }
}