#include "player.h"

Player::Player(int lifePoints, int x, int y) : DynamicGameEntity(lifePoints, x, y)
    ,GameEntity(x, y){}


void Player::heal(){
    m_lifePoints+=10;
}
