#include "solver.h"
#include <exception>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

Solver* readInBoard(string* file){
    
    return nullptr;
}

int main(int argc, const char* argv[]){
    const char* badParameterUsage = "incorrect parameter usage. provide only the file to use";
    const char* couldNotLoadFile = "could not load file. please check name and path";
    if(argc < 1 || argc > 1){
        cout << *badParameterUsage << endl;
    }
    string* fileName = new string(argv[0]);
    Solver* solver = nullptr;
    try{
        Solver* solver = readInBoard(fileName);
    }catch(exception e){
        cout << *couldNotLoadFile << endl;
    }
    string* solution = solver->solution();
    cout << solution << endl;
    //the solver object owns all the board stuff. let it do the deleting.
    delete solver;
}

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

void Solver::eliminateImpossible(){
    
}

int Solver::hasUnassociated(int col, int row, space_type type){
    int count = 0;
    int cm1 = col-1;
    int cp1 = col+1;
    int rm1 = row-1;
    int rp1 = row+1;
    if(cm1 >= 0 && !board[cm1,row]->isAssociated() && *board[cm1,row] == space_type::tree){
        ++count;
    }
    else if(cp1 < size && !board[cp1,row]->isAssociated() && *board[cp1,row] == space_type::tree){
        ++count;
    }
    else if(rm1 >=0 && !board[col,rm1]->isAssociated() && *board[col,rm1] == space_type::tree){
        ++count;
    }
    else if (rp1 < size && !board[col,rp1]->isAssociated() && *board[col,rp1] == space_type::tree){
        ++count;
    }
    return count;
}

void Solver::eliminateAdjacentRows(int row){}

int** Solver::generateAllPossibleSpacesRow(int row){
    return nullptr;
}
    
void Solver::eliminateAdjacentColumns(int col){}

int** Solver::generateAllPossibleSpacesCol(int col){
    return nullptr;
}

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