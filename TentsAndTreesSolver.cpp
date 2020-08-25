#include "solver.h"
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char* argv[]){
    int size = 5;
    Space** spaces = new Space*[size];
    for (int i = 0; i < size; i++)
    {
        vector<Space> v = vector<Space>();
        spaces[i] = v.data();
    }
    
    int* colLabels = new int[size];
    int* rowLabels = new int[size];

    Solver* s = new Solver(spaces, colLabels, rowLabels, size);
    cout << s->solution() << endl;
    //the solver object now owns all the board stuff. let it do the deleting.
    delete s;
}