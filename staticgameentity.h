#ifndef STATICGAMEENTITY_H
#define STATICGAMEENTITY_H


class StaticGameEntity : virtual public GameEntity
{
public:
    StaticGameEntity(bool destroyable, int x, int y);

protected:
    bool m_destroyable;

};

#endif // STATICGAMEENTITY_H
