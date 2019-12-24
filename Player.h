#ifndef _Player_H_
#define _Player_H_
#include <windows.h>
class Pitch;
class Ball;

class Player{
private:
    int playerx;
    int playery;
public:
    enum eDirection{STOP = 0, UP = 1, DOWN = 2};
    eDirection direction = STOP;
    Player();
    virtual~Player() = default;
    virtual char draw_player() = 0;
    virtual int get_playerx(int posx) = 0;
    virtual int get_playery() = 0;
    virtual void set_playerx(int plyrx = 0) = 0;
    virtual void set_playery(int posy) = 0;
    virtual void player_movement(Ball &b) = 0;
};

#endif // _Player_H_
