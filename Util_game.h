#ifndef _Draw_game_H_
#define _Draw_game_H_
#include "Ball.h"
#include "Player.h"
#include "Pitch.h"
#include "Ball.h"
#include <vector>
#include <memory>
    
    void drawmap(Pitch &g, Ball &b, std::vector<std::unique_ptr<Player>> &p );
    void game_inputs(Ball &b, std::vector<std::unique_ptr<Player>> &p);
    void game_logic(Ball &b, std::vector<std::unique_ptr<Player>> &p);
    
#endif // _Draw_game_H_
