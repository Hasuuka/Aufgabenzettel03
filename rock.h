#ifndef ROCK_H
#define ROCK_H
#include "staticgameentity.h"
#include <iostream>

using namespace std;

class Rock : public StaticGameEntity {
public:
    Rock(bool destroyable, int x, int y, int sharpness);

    int getSharpness() const {
        return m_sharpness;
    }

    void setSharpness(int s){
        m_sharpness = s;
    }

    Vector2 getV()const{
            return GameEntity::getV();
        }

    void setV(Vector2 v){
            GameEntity::setV(v);
        }

protected:
    int m_sharpness
};

#endif // ROCK_H
