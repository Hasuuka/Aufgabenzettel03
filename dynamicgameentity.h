#ifndef DYNAMICGAMEENTITY_H
#define DYNAMICGAMEENTITY_H
#include "gameentity.h"
#include <iostream>

using namespace std;


class DynamicGameEntity : virtual public GameEntity
{

public:
    DynamicGameEntity(int lifePoints, int x, int y);

protected:
    double m_lifePoints;
    void move(int x, int y);

    Vector2 getV()const{
            return GameEntity::getV();
        }

    void setV(Vector2 v){
            GameEntity::setV(v);
        }
};

#endif // DYNAMICGAMEENTITY_H
