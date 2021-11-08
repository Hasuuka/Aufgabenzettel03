#ifndef EVILROCK_H
#define EVILROCK_H
#include "rock.h"
#include "enemy.h"


class EvilRock : public Rock, Enemy
{
public:
    EvilRock(int lifePoints, int sharpness, bool destroyable, int x, int y, double damage);
};

#endif // EVILROCK_H
