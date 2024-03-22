#include <iostream>

// an analysis of the quantity and execution time of instructions

bool to_seek(int* vector, int n, int element){
    for (int i = 0; i < n; i++){
        if (vector[i]==element){
            return true;
        }
    }
    return true;
}

int to_start_load(load){
    for (int i = 0; i < load; i++);
}

void to_order(int n, int load){
    for (int i = 0; i < n; i++)
    {
        to_start_load(load);
    }
    
}

int main(){
    int vector[]= {1,2,3,4,5};
    bool result = to_seek(vector, 5, 99);
}

// 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