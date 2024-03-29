#include "staticgameentity.h"
#include <iostream>

using namespace std;

StaticGameEntity::StaticGameEntity(bool destroyable, int x, int y)
    :GameEntity(x,y), m_destroyable(destroyable){}

bool StaticGameEntity::destroyable() const
{
    return m_destroyable;
}

void StaticGameEntity::setDestroyable(bool newDestroyable)
{
    m_destroyable = newDestroyable;
}
