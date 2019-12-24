#ifndef _Ball_H_
#define _Ball_H_
#include "Pitch.h"
#include "Away_player.h"
#include "Player.h"
#include "Pitch.h"
#include <windows.h>
#include <memory>

class Ball{
    friend class Away_player;
private:
    int ballx;
    int bally;
public:
    enum eDirection {STOP = 0, RIGHT, LEFT, UP, DOWN, OPup, OPdown};
    eDirection startdirection;
    Ball();
    ~Ball();
    char drawball(){return char(254);}
    int getballx(){return ballx;}
    int getbally(){return bally;}
    void ballstarter(std::unique_ptr<Player> &p);
    void ball_kick(std::unique_ptr<Player> &p);
    int randomer();
};

#endif // _Ball_H_
