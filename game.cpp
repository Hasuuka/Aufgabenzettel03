#include "game.h"
#include <iostream>

using namespace std;

Game::Game()
{

}


void Game::dealDamage(Enemy &enemy, Player &player){
    if(enemy.getV().x == player.getV().x){
        player.setLifePoints(player.lifePoints()-enemy.damage());
    }
    else(
            cout << "Player and enemy aren't at the same position"<< endl
        );
}

void Game::heal(Player &player)
{
    player.setLifePoints(player.lifePoints()+player.getHealingPoints());
}
