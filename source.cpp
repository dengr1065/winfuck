#include "stdafx.h"

int main(int argc, char *argv[])
{
    DWORD threadIdFix;
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)randCursor, NULL, 0, &threadIdFix);
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)invertScreen, NULL, 0, &threadIdFix);
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)swapMouseBtns, NULL, 0, &threadIdFix);
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)drawErrorIcons, NULL, 0, &threadIdFix);

    moveFgWin();
}