#include <iostream>
#include <string>

using namespace std;

class Students {
    private:
    string ra;
    string nome;

    public:
    Students() {
            this->ra = "0";
            this->nome = "undefined";
        }

    Students(string _ra, string _nome) {
        // ra = _ra;
        // nome = _nome;
        this->ra = _ra;
        this->nome = _nome;
    }

        Students() { cout << "Destruindo" << endl; }

        string getRa() { return this->ra; }
        void setRa(string ra) { this->ra = ra; }

        void imprimir() {
            cout << "(" << this->ra << ", " << this->nome << ")" << endl;
        }
};