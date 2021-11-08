#ifndef ROCK_H
#define ROCK_H
#include "staticgameentity.h"
#include <iostream>

using namespace std;

class Rock : public StaticGameEntity
{

public:
    Rock(int sharpness, bool destroyable, int x, int y);

    int getSharpness() const {
        return m_sharpness;
    }

    void setSharpness(int s){
        m_sharpness = s;
    }

protected:
    int m_sharpness;
};

#endif // ROCK_H
