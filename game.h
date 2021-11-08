#ifndef GAME_H
#define GAME_H
#include "gameentity.h"
#include "enemy.h"
#include "player.h"


class Game
{
    friend class GameEntity;
public:
    Game();

   // void changePosition+(GameEntity& gameEntity, int x, int y);
    //void changePosition-(GameEntity& gameEntity, int x, int y);

    void dealDamage(Enemy& enemy, Player& player);
    void heal(Player& player);
};

#endif // GAME_H
