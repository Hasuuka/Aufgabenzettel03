#include "evilrock.h"
#include "rock.h"


EvilRock::EvilRock(int lifePoints,int sharpness, bool destroyable, int x, int y, double damage)
    : Rock(sharpness, destroyable, x, y), GameEntity(x,y), Enemy(lifePoints, x, y, damage+sharpness) {}



