#ifndef STATICGAMEENTITY_H
#define STATICGAMEENTITY_H


class StaticGameEntity : virtual public GameEntity
{
public:
    StaticGameEntity();

protected:
    bool destroyable;

};

#endif // STATICGAMEENTITY_H
