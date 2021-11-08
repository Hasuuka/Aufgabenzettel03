#include "dynamicgameentity.h"
#include "gameentity.h"


DynamicGameEntity::DynamicGameEntity(int lifePoints, int x, int y):GameEntity(x, y), m_lifePoints(lifePoints)
{

}

void move(int x, int y)
{
    Vector2 v;
    v.x = x;
    v.y = y;

    GameEntity::setV(v);

    GameEntity::setX(x);
    GameEntity::setY(y);//test

}
