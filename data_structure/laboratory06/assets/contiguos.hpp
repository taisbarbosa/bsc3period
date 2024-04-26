#include <iostream>
using namespace std;

void print_contiguous(int* v, int size){
    cout<<"[";
    for (int i = 0; i < size; i++)
    {
        cout<<v[i];
        if (i<size-1)
        {
            cout<<",";
        }   
    }
    cout<<"]"<<endl;
}