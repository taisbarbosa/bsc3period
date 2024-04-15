#include <iostream>
#include <string>
#include "tad_group/group.cpp"
#include "tad_student/student.cpp"

using namespace std;
int main() {
 Group* g1 = new Group("BCC3001", "IC3A", "2024-1", "");
 Group* g2 = new Group("HIE3000", "AE1K", "2024-1", "");
 Group g3("BCC3001", "IC3A", "2024-1", "");
    
    g1->setRa("a000");
    cout << a1->getRa() << endl;

    g1->to_print();
    g2->to_print();
    g3.to_print();

    delete a1;
    delete a2;
}
