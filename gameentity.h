#ifndef GAMEENTITY_H
#define GAMEENTITY_H


struct Vector2{
    int x;
    int y;
};

class GameEntity
{

public:
    GameEntity(int x, int y);

    const Vector2 &v() const;

protected:
    Vector2 m_v;
};

#endif // GAMEENTITY_H
