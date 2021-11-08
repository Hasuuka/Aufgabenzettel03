#include "gameentity.h"
#include <iostream>
GameEntity::GameEntity(int x, int y) :m_v(Vector2 { x, y }){}

const Vector2 &GameEntity::getV() const
{
    return m_v;
}

