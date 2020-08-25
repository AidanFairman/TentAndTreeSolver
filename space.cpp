#include "space.h"

Space::Space(space_type type){
    this->type = type;
    this->association = nullptr;
}

Space::~Space(){
    delete this->association;
}

bool Space::operator==(Space* other){
    return this->type == other->type && *(this->association) == *(other->association);
}

bool Space::operator==(space_type type){
    return this->type == type;
}

void Space::operator=(space_type type){
    this->type = type;
}

space_type Space::getType(){
    return type;
}

void Space::associate(int col, int row){
    this->associate(new Association(col, row));
}

void Space::associate(Association* association){
    this->disassociate();
    this->association = association;
}

void Space::disassociate(){
    if(isAssociated()){
        delete this->association;
    }
    this->association = nullptr;
}

bool Space::isAssociated(){
    return this->association != nullptr;
}