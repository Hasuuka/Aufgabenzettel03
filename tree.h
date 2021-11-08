#ifndef TREE_H
#define TREE_H
#include "staticgameentity.h"
#include <iostream>

using namespace std;

class Tree : public StaticGameEntity
{
public:
    Tree(bool destroyable, int x, int y);
};

#endif // TREE_H
