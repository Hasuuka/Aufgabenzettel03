#ifndef GAMEENTITY_H
#define GAMEENTITY_H


struct Vector2{
    int x;
    int y;

};


class GameEntity
{


public:

    Vector2 getV()const{
        return m_v;

    };

    void setV(Vector2 v){
        m_v = v;
    }

    GameEntity(int x, int y){
        m_v.x = x;
        m_v.y = y;
    };

    //int getX() const;
    //static void setX(int newX);
    //int getY() const;
    //static void setY(int newY);

protected:
    Vector2 m_v;
};

#endif // GAMEENTITY_H
