#ifndef DYNAMICGAMEENTITY_H
#define DYNAMICGAMEENTITY_H
#include "gameentity.h"
#include <iostream>

using namespace std;


class DynamicGameEntity : virtual public GameEntity
{

public:
    DynamicGameEntity(int lifePoints, int x, int y);

    double lifePoints() const;
    void setLifePoints(double newLifePoints);
protected:
    double m_lifePoints;
    void moveTo(int x, int y);
};

#endif // DYNAMICGAMEENTITY_H
