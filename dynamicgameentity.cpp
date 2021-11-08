#include "dynamicgameentity.h"
#include "gameentity.h"
#include <iostream>

using namespace std;


DynamicGameEntity::DynamicGameEntity(int lifePoints, int x, int y)
    :GameEntity(x, y), m_lifePoints(lifePoints){

}

double DynamicGameEntity::lifePoints() const
{
    return m_lifePoints;
}

void DynamicGameEntity::setLifePoints(double newLifePoints)
{
    m_lifePoints = newLifePoints;
}

void DynamicGameEntity::moveTo(int x, int y)
{
     m_v.x = x;
     m_v.y = y;
}

