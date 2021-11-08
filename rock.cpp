#include "rock.h"
#include "gameentity.h"
#include "staticgameentity.h"
#include <iostream>

using namespace std;

Rock::Rock(bool destroyable, int x, int y, int sharpness)
    :StaticGameEntity(destroyable, x, y), m_sharpness(sharpness){}
