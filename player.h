#ifndef PLAYER_H
#define PLAYER_H
#include "dynamicgameentity.h"


class Player : public DynamicGameEntity
{
public:
    Player(int lifePoints, int x, int y);
protected:
    void heal();
};

#endif // PLAYER_H
