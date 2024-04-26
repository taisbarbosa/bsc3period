#include <iostream>
#include "assets/sequence.hpp"
#include "assets/point.hpp"
using namespace std;

int main(){
    int* contiguous_organization = new int[3];
    contiguous_organization [0] = 1;
    contiguous_organization [1] = 2;
    contiguous_organization [2] = 3;

    print_contiguous(contiguous_organization, 3);

    Point* n1 = new Point();
    Point* n2 = new Point();
    Point* n3 = new Point();
}