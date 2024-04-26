#include <iostream>
using namespace std;

class Point{
    public:
    int data;
    Point* prox;

    Point() {}
    Point(int data) { this->data = data; }
    Point(int data, Point* prox) {
        this->data = data;
        this->prox = prox;
    }
};