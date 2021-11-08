#ifndef GAMEENTITY_H
#define GAMEENTITY_H


struct Vector2{
    int x;
    int y;
};

class GameEntity
{


public:
    GameEntity(int x, int y){
        m_v.x = x;
        m_v.y = y;
    };


    Vector2 getV()const;
    void setV(Vector2 v);

    int getX() const;
    void setX(int newX);
    int getY() const;
    void setY(int newY);

protected:
    Vector2 m_v;
};

#endif // GAMEENTITY_H
