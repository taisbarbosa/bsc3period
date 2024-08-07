#include <iostream>
#include <string>
using namespace std;

//01. return the position of the first occurrence of the character in the string
int string_find_first(string s, char c){
    
    int str_size = s.size();
    int count = 0;

    for (int i = 0; i < str_size; i++)
    {
        if(s[i]==c){
            break;
        }
        count++;
    }
    if (count==str_size)
    {
        count= -1;
    }
    
    return count;
}

//02. Write a function that checks whether a character is a letter. It must return true for letter or false otherwise.
bool is_letter(char c){
    string vector = "Aa Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm Nn Oo Pp Qq Rr Ss Tt Uu Vv Ww Xx Yy Zz";
    //{'A','a','B','b', 'C','c','D', 'd', 'E', 'e', 
    //'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L',
    //'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 
    //'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z'};

    for (int i = 0; i < 78; i++)
    {
        if (c==vector[i])
        {
            return true;
        }
    }
    return false;
}

//03. Function that checks whether a name is valid. Formed only by letters and spaces.
bool check_name(string c){
    int size= c.size();
    string space = " ";
    for (int i = 0; i <= size; i++)
    {   
        char copy= c[i];
        if(is_letter(copy)==0){
            return false;
        }
        for (int j = i; j <= size; j++)
        {
            if(copy == ' '){
                copy = c[j+1];
                if(copy == ' '){
                    return false;
                }
            }
        }  
    }
    return true;
}

//04. Creates and returns a dynamically allocated array of integers (int*). Ascending or descending order.
int* create_array(int n, bool asc){
    int vect[n];
    int c = n;
    for (int i = 0; i < n; i++)
    {
        if (asc==1)
        {
            vect[i]=i+1;
        }else{
            vect[i]=c;
            c--;
        }  
    }
    int* v = vect;
    return v;
}

int main(){
    //01.
    int pos = string_find_first("I love program",'o');
    cout<<endl;
    cout<<pos<<endl;

    //02.
    bool check = is_letter('n');
    cout<<check<<endl;

    //03.
    bool check2 = check_name("Maria");
    cout<<check2<<endl;

    //04.
    int* v;
    int n = 8;
    bool b = 1;
    cout<<"blablabla"<<" ";
    v=create_array(n,b);
    cout<<"[";
    for (int i = 0; i < n; i++)
    {
        if (i==n-1){
            cout<<v[i];
        }else{
            cout<<v[i]<<",";  
        }            
    }
    cout<<"]"<<endl;
    
    cout<<v[2];
    cout<<v<<" ";
    return 0;
}