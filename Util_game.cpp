#include "Util_game.h"
#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>

void drawmap(Pitch &g, Ball &b, std::vector<std::unique_ptr<Player>> &p){
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    LockWindowUpdate(GetConsoleWindow());
    system("cls");
    for (size_t k = 0; k < 31; ++k){
        for (size_t j = 0; j < 82; ++j){
            if (g.map[k] == g.map[p.at(1)->get_playerx(k)] && g.map[j] == g.map[p.at(1)->get_playery()]){
                        std::cout << p.at(1)->draw_player();
            }else if (g.map[k] == g.map[p.at(0)->get_playerx(k)] && g.map[j] == g.map[p.at(0)->get_playery()]){
                        std::cout << p.at(0)->draw_player();
            }else if (g.map[k] == g.map[b.getballx()] && g.map[j] == g.map[b.getbally()]){
                        std::cout << b.drawball();
            }else{
                std::cout << g.map[k][j]; 
            }
        }std::cout << std::endl;
    }
    LockWindowUpdate(NULL);
}

void game_inputs(Ball &b, std::vector<std::unique_ptr<Player>> &p){
    for (auto &pl:p){
        pl->player_movement(b);
    }
   if (b.startdirection == Ball::RIGHT || b.startdirection == Ball::OPup || b.startdirection == Ball::OPdown){
       b.ballstarter(p.at(0));
   }else{
       b.ballstarter(p.at(1));
   }
}

void game_logic(Ball &b, std::vector<std::unique_ptr<Player>> &p){
    for (auto &pl:p){
        pl->set_playerx(0);
    }
    if (b.startdirection == Ball::RIGHT || b.startdirection == Ball::OPup || b.startdirection == Ball::OPdown){
       b.ball_kick(p.at(0));
   }else{
       b.ball_kick(p.at(1));
   }
}