#include <iostream>
#include <string>
#include "tad_group/group.hpp"

using namespace std;
int main() {

    Group* g1 = new Group("2024-1", 10);
    Group* g2 = new Group("2024-1", 6);
    Students* s1 = new Students("a2444444","John");
    Students* s2 = new Students("a2444499","Anah");
    
    g1->enrolled(s1);
    g1->enrolled(s2);
    g1->enrolled(new Students("3", "Jose"));
    g1->to_print();

    cout<<"\n-----canceled-----"<<endl;
    g1->to_cancel("a2444444");
    g1->to_print();
}
