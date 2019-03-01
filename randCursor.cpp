#include "stdafx.h"
#include <stdlib.h>

int randdir()
{
    return std::rand() % 3 - 1;
}

int callcounter = 0;
short xd, yd;

void randCursor()
{
    Sleep(2000);
    while (true)
    {
        POINT pos;
        GetCursorPos(&pos);
        if (callcounter == 0)
        {
            xd = randdir();
            yd = randdir();
        }
        SetCursorPos(pos.x + xd, pos.y + yd);

        callcounter++;
        if (callcounter == 3)
            callcounter = 0;
        Sleep(100);
    }
}