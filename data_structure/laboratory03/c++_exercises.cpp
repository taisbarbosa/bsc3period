#include <iostream>
#include <string>
using namespace std;

//01. return the position of the first occurrence of the character in the string
int stringFindFirst(string s, char c){
    int str_size = s.size();
    int count = 0;
    cout<<s.size()<<endl;

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
bool isLetter(char c){

}

int main(){
    //01.
    int pos = stringFindFirst("I love program",'o');
    cout<<endl;
    cout<<pos<<endl;
    return 0;

    //02.
    bool check = isLetter('a');

}