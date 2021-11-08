#include <iostream>
#include "game.h"
#include "gameentity.h"
#include "tree.h"
#include "staticgameentity.h"
#include "tree.h"
#include "player.h"
#include "evilrock.h"
#include "enemy.h"
#include "dynamicgameentity.h"
#include "rock.h"

using namespace std;

int main()
{
    Game start;
    Rock Geodude(3, false, 2, 3 );
    EvilRock EvilGeodude(100, 6, false, 3, 4, 50);
    Tree tree(true, 2, 2);
    Player Ash(10, 2, 4, 40);
    Enemy Garry(10,2,4,42);

    cout <<"Ash has: "<<Ash.lifePoints()<< endl;
    start.dealDamage(Garry,Ash);
    cout <<"Ash has: "<<Ash.lifePoints()<< endl;

    start.heal(Ash);
    cout <<"Ash has: "<<Ash.lifePoints()<< endl;







    return 0;
}
