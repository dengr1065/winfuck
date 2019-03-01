#include "stdafx.h"

void swapMouseBtns()
{
    Sleep(14000);
    BOOL swap = TRUE;
    int delay = 2000;
    while (true)
    {
        SwapMouseButton(swap);
        swap = !swap;
        Sleep(delay);
        if (delay > 1000)
            delay -= 20;
    }
}