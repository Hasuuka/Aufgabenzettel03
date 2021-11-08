#ifndef STATICGAMEENTITY_H
#define STATICGAMEENTITY_H
#include "gameentity.h"
#include <iostream>

using namespace std;


class StaticGameEntity : virtual public GameEntity
{
public:
    StaticGameEntity(bool destroyable, int x, int y);

    bool destroyable() const;
    void setDestroyable(bool newDestroyable);

protected:
    bool m_destroyable;
};

#endif // STATICGAMEENTITY_H
