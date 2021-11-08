#include "dynamicgameentity.h"
#include "gameentity.h"
#include <iostream>

using namespace std;


DynamicGameEntity::DynamicGameEntity(int lifePoints, int x, int y)
    :GameEntity(x, y), m_lifePoints(lifePoints){}

void move(int x, int y)
{
    Vector2 z;
    z.x = x;
    z.y = y;
    DynamicGameEntity::setV(v)

    //GameEntity::setX(x);
    //GameEntity::setY(y);//test

}
