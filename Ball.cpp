#include "Ball.h"
#include <cstdlib>

int Ball::randomer(){
    return rand()%3+1;
}

void Ball::ballstarter(std::unique_ptr<Player> &p){
    if (GetAsyncKeyState(VK_SPACE)){
        startdirection = RIGHT;
    }
    if ((ballx) == p->get_playerx(ballx) && (bally+1) == p->get_playery() && randomer() == 1){
        startdirection = UP;
    }
    if ((ballx) == p->get_playerx(ballx) && (bally-1) == p->get_playery() && randomer() == 1){
        startdirection = OPup;
    }
    if ((ballx+1) == 30 && startdirection == UP){
        startdirection = DOWN;
    }
    if ((ballx+1) == 30 && startdirection == LEFT){
        startdirection = OPup;
    }
    if ((ballx+1) == 30 && startdirection == RIGHT){
        startdirection = DOWN;
    }
    if ((ballx+1) == 30 && startdirection == OPdown){
        startdirection = OPup;
    }
    if ((ballx-1) == 0 && startdirection == DOWN){
        startdirection = UP;
    }
    if ((ballx-1) == 0 && startdirection == LEFT){
        startdirection = OPdown;
    }
    if ((ballx-1) == 0 && startdirection == RIGHT){
        startdirection = UP;
    }
    if ((ballx-1) == 0 && startdirection == OPup){
        startdirection = OPdown;
    }
    if ((ballx) == p->get_playerx(ballx) && (bally+1) == p->get_playery() && randomer() == 3){
        startdirection = DOWN;
    }
    if ((ballx) == p->get_playerx(ballx) && (bally-1) == p->get_playery() && randomer() == 3){
        startdirection = OPdown;
    }
    if ((ballx) == p->get_playerx(ballx) && (bally+1) == p->get_playery() && randomer() == 2){
        startdirection = LEFT;
    }
    if ((ballx) == p->get_playerx(ballx) && (bally-1) == p->get_playery() && randomer() == 2){
        startdirection = RIGHT;
    }
}

Ball::Ball():ballx{15}, bally{40}{
}

Ball::~Ball(){
}

void Ball::ball_kick(std::unique_ptr<Player> &p){
    switch (startdirection){
        case RIGHT:
            
               ++bally;
           
            break;
        case UP:
           
                ++ballx;
                --bally;
          
            break;
        case OPup:
           
                --ballx;
                ++bally;
           
            break;
        case DOWN:
           
                --ballx;
                --bally;
         
            break;
        case OPdown:
            
                ++ballx;
                ++bally;
           
            break;
        case LEFT:
           
                --bally;
           
            break;
        default:
            break;
    }
}