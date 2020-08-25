#pragma once
class Association{
    public:
        Association(int col, int row);
        int getRow();
        int getCol();
        bool operator==(Association& other);
    private:
        int row;
        int col;
};