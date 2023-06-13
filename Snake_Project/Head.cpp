#include "Head.h"
#include <conio.h>
#include "ConsoleEngineCore.h"

Head::Head()
{
    SetChar('H');
    SetPos({ 0,0 });
}

Head::~Head()
{
}

void Head::Tick(float _Time)
{
    char Select = (char)_getch();

    int4 MovePos = { 0, 0 };

    switch (Select)
    {
    case 'a':
        if (prevSelect == 'd')
        {
            return;
        }
        MovePos = int4::Left;
        break;
    case 'd':
        if (prevSelect == 'a')
        {
            return;
        }
        MovePos = int4::Right;
        break;
    case 'w':
        if (prevSelect == 's')
        {
            return;
        }
        MovePos = int4::Up;
        break;
    case 's':
        if (prevSelect == 'w')
        {
            return;
        }
        MovePos = int4::Down;
        break;
    case 'q':
        ConsoleEngineCore::EngineOff();
        break;
    default:
        break;
    }
    prevSelect = Select;
    AddPos(MovePos);
}