#include <iostream>
#include <string>
#include "../tad_student/student.hpp"

using namespace std;

class Group {
    private:
    string code_subject;
    string code_group;
    string semester;
    Students** students;
    int size_group;
    int size_actual;

    public:
    Group(string sem, int size_g) {
        this->code_subject = "";
        this->code_group = "";
        this->semester = sem;
        this->students = new Students*[size_g];
        this->size_group = size_g;
        this->size_actual = 0;
    }
    ~Group(){};
    bool enrolled(Students* s){
        if(size_actual==size_group){
            return 0;
        }
        students[size_actual]=s;
        size_actual+=1;
        return 1;
    }
    int to_cancel(string ra){
        int position;
        for (int i = 0; i < size_actual; i++)
        {
            if(students[i]->get_ra()==ra){
                delete students[i];
                students[i]=students[size_actual-1];
                position =i;
                size_actual -=1;
            }
        }
        return position;
    }
    void to_print(){
        for (int i = 0; i < size_actual; i++)
        {
            cout<<students[i]->get_ra()<<" - "<< students[i]->get_name()<<endl;
        }
    }

    string get_code_subject(){
        return this->code_subject;
    }
    string get_code_group(){
        return this->code_group;
    }
    string get_semester(){
        return this->semester;
    }
    Students** get_students(){
        return this->students;
    }
    int get_size_group(){
        return this->size_group;
    }
    int get_size_actual(){
        return this->size_actual;
    }
    void set_code_subject(string code_s_parameter){
        this->code_subject = code_s_parameter;
    }
    void set_code_group(string code_g_parameter){
        this->code_group = code_g_parameter;
    }
    void set_semester(string semester_parameter){
        this->semester = semester_parameter;
    }
    void set_students(Students** students_parameter){
        this->students = students_parameter;
    }
    void set_size_group(int size_parameter){
        this->size_group = size_parameter;
    }
    void set_size_actual(int size_a_parameter){
        this->size_actual = size_a_parameter;
    }
};