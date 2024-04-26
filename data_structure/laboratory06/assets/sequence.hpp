//ENCADEAMENTO
#include <iostream>
using namespace std;

void print_s(Point* p){
   Point* tmp = p;

   cout << "[";
   while (tmp != nullptr) {
      cout << tmp->data;
      tmp = tmp->prox;
      if (tmp != nullptr) cout << ",";
   }
   cout << "]" << endl;
}