#ifndef GAMEENTITY_H
#define GAMEENTITY_H


struct Vector2{
    int x;
    int y;
};

class GameEntity
{


public:
    GameEntity::GameEntity(int x, int y);

protected:
    Vector2 m_v;
};

#endif // GAMEENTITY_H
