#include "Pitch.h"

Pitch::Pitch(){
}

Pitch::~Pitch(){
}


char Pitch::get_map(){
    return map[31][82];
}

char Pitch::set_map(Player *p){
    return p->draw_player();
}