#ifndef IWORLDEVENT_H_INCLUDED
#define IWORLDEVENT_H_INCLUDED 1

class World;

struct IWorldEvent {
    virtual ~IWorldEvent() = default;
    virtual void handle(World &world) = 0;
};

#endif // IWORLDEVENT_H_INCLUDED
