#include <iostream>
#include <string>

using namespace std;

class Students {
    private:
        string ra;
        string name;

    public:
        Students(string ra, string name) {
            this->ra = ra;
            this->name = name;
        }
        string get_ra(){
            return this->ra;
        }
        string get_name(){
            return this->name;
        }
        void set_ra(string ra_parameter){
            this->ra = ra_parameter;
        }
        void set_name(string name_parameter){
            this->name = name_parameter;
        }
};