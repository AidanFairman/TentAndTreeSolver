
#include "association.h"

Association::Association(int col, int row){
    this->col = col;
    this->row = row;
}

int Association::getCol(){
    return col;
}

int Association::getRow(){
    return row;
}

bool Association::operator==(Association& other){
    return this->col == other.col && this->row == other.row;
}