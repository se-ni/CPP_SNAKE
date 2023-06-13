// Snake.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include "ConsoleEngineCore.h"
#include "Head.h"
#include "Body.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Head* Head1 = ConsoleEngineCore::CreateObject<Head>();
    Body* Body1 = ConsoleEngineCore::CreateObject<Body>();

    // �� �Լ����� ������ �����ؾ� �մϴ�.
    ConsoleEngineCore::EngineStart(int4{ 10, 10 });
}
