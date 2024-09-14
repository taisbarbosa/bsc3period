#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
#include <stack>
#include <queue>
using namespace std;

/*  _______________________________________________________________________________________________   
    01. Function that receives an array of integers and returns a vector<int>,containing 
    the elements of the array in the same order.
*/

vector<int> vet_to_vector(int n, int* v){
    vector<int> new_vector;
    for (int i = 0; i < n; i++)
    {
        new_vector.push_back(v[i]);
    }
    return new_vector;
}

/*  _______________________________________________________________________________________________
    02. Returns a forward_list<int>, containing the array elements in the same order.
*/
forward_list<int> vet_to_flist(int n, int v[]){
    forward_list<int> new_forward_list;
    new_forward_list.push_front(v[0]);
    for (int i = n-1; i > 0; i--)
    {
        new_forward_list.insert_after(new_forward_list.begin(), {v[i]});
    }
    return new_forward_list;
}

/*  _______________________________________________________________________________________________
    03. returns a stack<int>. The last element of the array must be at the bottom of the stack 
    and the first element must be at the top of the stack.
*/
stack<int> vet_to_stack(int n, int v[]){
    stack<int> new_stack;
    for (int i = n-1; i >= 0; i--)
    {
        new_stack.push(v[i]);
    }
    return new_stack;
}

/*  _______________________________________________________________________________________________
    04. 
*/
vector<int> list_concat(forward_list<int> list1, forward_list<int> list2){
    vector<int> list_c;
    for (int i = 0; i < list1.end(); i++)
    {
        list_c.push_back(list1);
        list1.pop_front();
    }
    for (int i = 0; i < list2.end(); i++)
    {
        list_c.push_back(list2);
        list1.pop_front();

    }
    
    
    return list_c;

}

int main(){

    //_01_EXAMPLE__________________________________________
    
    int v[4]={1,2,4,3};
    int n=4;
    vector<int> vec = vet_to_vector(n, v);
    cout<<endl<<'[';
    for (int i = 0; i < n; i++)
    {
        cout<<vec.at(i);
        if(i<n-1){
            cout<<", ";
        }
    }
    cout<<']'<<endl;

    //_02_EXAMPLE__________________________________________
    forward_list<int> forw_l = vet_to_flist(n, v);
    for(int&m : forw_l){
        cout<<m<<"  ";
    }
    cout<<endl;

    //_03_EXAMPLE__________________________________________
    stack<int> vec_stack = vet_to_stack(n, v);
    cout<<" ___ "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"| ";
        int x = vec_stack.top();
        cout<<x<<" |"<<endl;
        vec_stack.pop();
    }
    cout<<endl;

    //_04_EXAMPLE__________________________________________
    forward_list<int> f1 = {1,2,3,4};
    forward_list<int> f2 = {5,6};
    vector<int> vec2 = list_concat(f1, f2); // vec = {1,2,3,4,5,6};
        cout<<endl<<'[';
    for (int i = 0; i < 6; i++)
    {
        cout<<vec2.at(i);
        if(i<n-1){
            cout<<", ";
        }
    }
    cout<<']'<<endl;
}