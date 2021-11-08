#include "enemy.h"

Enemy::Enemy(int lifePoints, int x, int y, double damage) : DynamicGameEntity(lifePoints, x, y)
    ,GameEntity(x, y), m_damage(damage){

}

double Enemy::damage() const
{
    return m_damage;
}

void Enemy::setDamage(double newDamage)
{
    m_damage = newDamage;
}
