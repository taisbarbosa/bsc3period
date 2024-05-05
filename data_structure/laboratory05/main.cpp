#include <string>
#include "assets/vector.hpp"
using namespace std;

int main(){
	Vector v1(5);      // []
	Vector* v2 = new Vector();
	
	v2->push_back(10); 		// [10]
	v2->push_back(20); 		// [10,20]
	v2->push_back(30);		// [10,20,30]
	v2->push_back(40);  	// [10,20,30,40]
	v2->push_back(50);  	// [10,20,30,40,50]
	v2->print();
	v2->erase(2);      		// [10,20,40,50]
	v2->print();
	v2->insert(2, 25);		// [10,20,25,40,50]
	v2->print();
	v2->replace(3, 30);   	// [10,20,25,30,50]
	v2->print();
	v2->push_front(2);   	// [2,10,20,25,30,50]
	v2->print();
	v2->pop_front();
	v2->print();
	v2->clear();           	// []	
	v2->print();
}