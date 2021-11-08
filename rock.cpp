#include "rock.h"
#include "gameentity.h"
#include "staticgameentity.h"
#include <iostream>

using namespace std;


Rock::Rock(int sharpness, bool destroyable, int x, int y)
     :StaticGameEntity(destroyable, x, y), GameEntity(x,y), m_sharpness(sharpness){}
