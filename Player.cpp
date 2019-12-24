#include "Player.h"
#include "Ball.h"

Player::Player(): playerx{13}, playery{0}{
}

char Player::draw_player(){return char(219);}

int Player::get_playerx(int posx){
    int px[5]{playerx, playerx+1, playerx+2, playerx+3, playerx+4};
    for (int i = 0; i < 5; ++i){
        if (posx == px[i]){
            return px[i];
        }
    }
    return -1;
}

int Player::get_playery(){return playery;}

void Player::set_playery(int posy){
    playery = posy;
}

void Player::set_playerx(int plyrx){
     playerx = plyrx;
}

void Player::player_movement(Ball &b){
    
}

