#ifndef _Away_player_H_
#define _Away_player_H_
#include "Player.h"
class Ball;

class Away_player: public Player{
private:
    int awayx;
    int awayy;
public:
    enum eDirection {STOP = 0, UP = 1, DOWN = 2};
    eDirection awyplyr = STOP;
    Away_player();
    virtual~Away_player() = default;
    virtual char draw_player() override;
    virtual int get_playerx(int posx) override;
    virtual int get_playery() override;
    virtual void set_playerx(int awyx = 0) override;
    virtual void set_playery(int posy) override;
    virtual void player_movement(Ball &b) override;
};

#endif // _Away_player_H_
