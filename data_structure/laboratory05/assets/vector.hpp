
#include <string>
#include <iostream>
using namespace std;

class Vector{
    private:
        int* array;
        int capacity;
        int size;

    public:
        Vector(){}
        Vector(int size){this->size = size;}
        Vector(int* array, int size){
            this->array = array;
            this->capacity = 10;
            this->size = size;
        }
        ~Vector(){
            delete this->array;
        }

        // Insere o elemento e na última posição
        bool push_back(int e){
            manage_capacity();
            this->size++;
            this->array[size-1]=e;
            return false;
        }
        // Insere o elemento e na primeira posição
        bool push_front(int e){
            manage_capacity();
            this->size++;
            for (int i = 0; i < this->size; i++)
            {
                this->array[size-(i+1)]=array[size-(i+2)];
            }
            this->array[0]=e;
            return true;
        }
        // Insere o elemento e na posição pos
        bool insert(int pos, int e){
            manage_capacity();
            this->size++;
            int count = 0;
            for (int i = pos; i <= this->size; i++){
                count++;
            }
            for (int j = 0; j < count; j++)
            {
                this->array[size-j]=array[size-(j+1)];
            }
            this->array[pos]=e;
            return 0;
        }
        // Remove o último elemento
        int pop_back(){
            size--;
            manage_capacity();
            return 0;
        }
        // Remove o primeiro elemento
        int pop_front(){
            for (int i = 1; i < this->size; i++)
            {
                this->array[i-1]=array[i];
            }
            size--;
            manage_capacity();
            return 0;
        }
        // Remove o elemento da posição pos e retorna o elemento removido
        int erase(int pos){
            int element;
            element = array[pos];
            for (int i = pos; i < this->size; i++)
            {
                this->array[i]=array[i+1];
            }
            size--;
            manage_capacity();
            return element;
        }
        // Retorna o primeiro elemento
        int front(){
            return this->array[0];
        }
        // Retorna o último elemento
        int back(){
            return this->array[this->size-1];
        }
        // Retorna o elemento da posição pos
        int at(int pos){
            return this->array[pos];
        }

        // Torna a lista vazia
        void clear(){
            this->size = 0;
        }

        // Verifica se o Vector está vazio
        bool empty(){
            if(this->size>0){
                return false;
            }else{
                return true;
            }
        }
        // Devolve a quantidade de elementos
        int r_size(){
            return this->size;
        }
        // Substitui o elemento da posição pos pelo elemento e
        bool replace(int pos, int e){
            this->array[pos]=e;
            return false;
        }

        // Imprime todos os elementos no formato [1,2,3]
        void print(){
            cout<<"[";
            for (int i = 0; i < this->size; i++)
            {
                if (i==this->size-1)
                {
                    cout<<this->array[i];
                    break;
                }
                cout<<this->array[i]<<",";
            }
            cout<<"]"<<endl;
        }

    private:
	    // Dobrar a capacidade quando não houver mais espaço
	    // Reduzir a capacidade pela metade quando for inferior a 25% de ocupação
        void manage_capacity(){
            if (this->size==this->capacity)
            {
                this->capacity = 2*this->capacity;
            }
            if (this->size<=(this->capacity/4))
            {
                this->capacity = this->capacity/2;
            }
        }      
};