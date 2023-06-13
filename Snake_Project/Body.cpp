#include "Body.h"
#include "ConsoleMath.h"

Body::Body()
{

    SetPos(RandomPosition());

    SetChar('B');
}

Body::~Body()
{
}

int4 Body::RandomPosition()
{
    std::list<ConsoleObject*> objects = ConsoleEngineCore::GetObjects();

    int randomX, randomY;
    bool isCollision;

    do {
        isCollision = false;
        srand(time(0));

        randomX = rand() % 10 ;
        randomY = rand() % 10 ;


        for (ConsoleObject* object : objects) {
            if (dynamic_cast<Head*>(object) != nullptr)
            {
                Head* head = dynamic_cast<Head*>(object);
                if (head->GetPos().X == randomX && head->GetPos().Y == randomY)
                {
                    isCollision = true;
                    break;
                }
            }
        }
    } while (isCollision);

    return int4{ randomX, randomY, 0, 1 };
}