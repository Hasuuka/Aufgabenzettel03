#ifndef ENEMY_H
#define ENEMY_H
#include "dynamicgameentity.h"


class Enemy : public DynamicGameEntity
{
public:
    Enemy(int lifePoints, int x, int y, double damage);

    double damage() const;
    void setDamage(double newDamage);

protected:
    double m_damage;
};

#endif // ENEMY_H
