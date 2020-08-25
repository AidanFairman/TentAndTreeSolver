#pragma once
#include "space.h"
#include <string>

using namespace std;

class Solver{
public:
    Solver(Space** board, int* colLabels, int* rowLabels, int size);
    ~Solver();
    string* solution();
private:
    //methods
    bool solve();
    void eliminateCornerOnly();
    void eliminateAdjacentRows(int row);
    void eliminateAdjacentColumns(int col);
    void associateSearch();
    void place(int col, int row, space_type type);
    void associate(int col, int row, int assocCol, int assocRow);
    void finishRow(int row);
    void finishCol(int col);
    int countOpenInRow(int row);
    int coundOpenInColumn(int col);
    Space** generateRowPossibilities(int row);
    Space** generateColPossibilities(int col);
    //members
    Space** board;
    int* colLabels;
    int* rowLabels;
    int size;
};