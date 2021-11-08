#include "player.h"

Player::Player(int lifePoints, int x, int y, double healingPoints) : DynamicGameEntity(lifePoints, x, y)
    ,GameEntity(x, y), m_healingPoints(healingPoints){}


double Player::getHealingPoints() const
{
    return m_healingPoints;
}

void Player::setHealingPoints(double newHealingPoints)
{
    m_healingPoints = newHealingPoints;
}
