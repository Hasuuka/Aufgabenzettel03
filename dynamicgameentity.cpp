#include "dynamicgameentity.h"
#include "gameentity.h"
#include <iostream>

using namespace std;


DynamicGameEntity::DynamicGameEntity(int lifePoints, int x, int y)
    :GameEntity(x, y), m_lifePoints(lifePoints){

}

void DynamicGameEntity::move(int x, int y)
{
     m_v.x = x;
     m_v.y = y;

}
