#ifndef STATICGAMEENTITY_H
#define STATICGAMEENTITY_H
#include "gameentity.h"
#include <iostream>

using namespace std;


class StaticGameEntity : virtual public GameEntity
{
public:
    StaticGameEntity(bool destroyable, int x, int y);

    Vector2 getV()const{
            return GameEntity::getV();
        }

    void setV(Vector2 v){
            GameEntity::setV(v);
        }

protected:
    bool m_destroyable;



};

#endif // STATICGAMEENTITY_H
