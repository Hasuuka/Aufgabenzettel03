#ifndef PLAYER_H
#define PLAYER_H
#include "dynamicgameentity.h"


class Player : public DynamicGameEntity
{
public:
    Player(int lifePoints, int x, int y, double healingPoints);
    double getHealingPoints() const;
    void setHealingPoints(double newHealingPoints);

protected:
    double m_healingPoints;

};

#endif // PLAYER_H
