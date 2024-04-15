#include <iostream>
#include <string>
using namespace std;

class Group {
    private:
    string code_subject;
    string code_group;
    string semester;
    string students[];

    public:
    Group( ) {
        this->code_subject = "BCC3001";
        this->code_group = "IC3A";
        this->semester = "2024-1";
        for (int i = 0; i < 4; i++){
            void to_print(){
                string name;
                cin << this->name << endl;
            }
            this->students[i] = name;
        }
    }

    //~Group() { cout << "---" << endl; }

    //string getRa() { return this->ra; }
    //void setRa(string ra) { this->ra = ra; }

    //void imprimir() {
    //    cout << "(" << this->ra << ", " << this->nome << ")" << endl;
    //}
};