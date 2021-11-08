#ifndef TREE_H
#define TREE_H
#include "staticgameentity.h"
#include <iostream>

using namespace std;

class Tree : StaticGameEntity
{
public:
    Tree(bool destroyable, int x, int y);

    Vector2 getV()const{
            return GameEntity::getV();
        }

    void setV(Vector2 v){
            GameEntity::setV(v);
        }
};

#endif // TREE_H
