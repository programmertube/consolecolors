// ConsoleColors.cpp : Using Windows Colors inside console apps
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
    for (int i = 0; i < 256; ++i)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
        printf("Text Color in use = %d\n", i);
    }

    return 0;
}

