#pragma once

#include "space_type.cpp"
#include "association.h"

class Space{
    public:
        Space(space_type type);
        ~Space();
        bool operator==(Space* other);
        bool operator==(space_type type);
        void operator=(space_type type);
        space_type getType();
        void associate(int x, int y);
        void associate(Association* association);
        void disassociate();
        bool isAssociated();
        
    private:
        space_type type;
        Association* association;
};