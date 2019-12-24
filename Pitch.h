#ifndef _Pitch_H_
#define _Pitch_H_
#include "Player.h"

class Pitch{
    friend class Player;
public:
    char map[31][82]{"#################################################################################",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#                                       |                                       #",
                       "#################################################################################"};
    Pitch();
    ~Pitch();
//    Pitch(const Player &source);
//    Pitch &operator=(const Player &rhs);
    char get_map();
    char set_map(Player *p);
};

#endif // _Pitch_H_
