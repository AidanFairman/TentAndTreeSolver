#include "solver.h"

Solver::Solver(Space** board, int* colLabels, int* rowLabels, int size){
    this->board = board;
    this->colLabels = colLabels;
    this->rowLabels = rowLabels;
    this->size = size;
}

Solver::~Solver(){
    for (int i = 0; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            delete board[i,k];
        }
        delete[] board[i];
    }
    delete[] board;
    delete[] colLabels;
    delete[] rowLabels;
}

string* Solver::solution(){
    if(!solve()){
        return new string("could not solve.");
    }
    return new string("not yet implemented");
    //write output to return;
}

bool Solver::solve(){
    return false;
}

void Solver::eliminateCornerOnly(){

}
void Solver::eliminateAdjacentRows(int row){}
void Solver::eliminateAdjacentColumns(int col){}
void Solver::associateSearch(){}
void Solver::place(int col, int row, space_type type){}
void Solver::associate(int col, int row, int assocCol, int assocRow){}
void Solver::finishRow(int row){}
void Solver::finishCol(int col){}
int Solver::countOpenInRow(int row){
    return 0;
}
int Solver::coundOpenInColumn(int col){
    return 0;
}
Space** Solver::generateRowPossibilities(int row){
    return nullptr;
}
Space** Solver::generateColPossibilities(int col){
    return nullptr;
}