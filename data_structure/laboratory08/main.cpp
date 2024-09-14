#include <iostream>
#include <string>
using namespace std;

// RECURSION

// 01. The greatest common divisor (GCD) of two integers, x and y, is defined recursively by:

// gcd(x, y) = y if (y ≤ x) && (x%y == 0)
// gcd(x, y) = gcd(y, x) if x < y
// gcd(x, y) = gcd(y, x%y), otherwise

int gcd(int x, int y){
    int a=y;
    for (int i = 0; i < y; i++)
    {
        if (x>=y)
        {
            if (x%a!=0){ 
                a--; 
                }
            else if (y%a!=0)
            {
                a--; 
            }else{
                return a;
            }
        }  
    }
    return 0;
}

// 02. Search for an element in an array sequentially

bool sequentially_search(int element, int* v, int size){
    
    int start= 0;  
    int end= size-1;

    bool recursive(int start, int end, int element){
        if (start>=end){return false;}
        int half=start+size/2;

        if (v[half] == element){
            return true;
        }else if(v[half]<element){
            start=half;
        }else{
            end=half;
        }
        size=size/2;
    }
    recursive(start, end, element);
}

// 03. Binary search. Implement 2 versions: an iterative and a recursive.

bool binary_search(int element, int* v, int size){
    
    int start= 0;  
    int end= size-1;
    bool recursive(int start, int end, int element){
        if (start>=end){return false;}
        int half=start+size/2;

        if (v[half] == element){
            return true;
        }else if(v[half]<element){
            start=half;
        }else{
            end=half;
        }
        size=size/2;
        recursive(v, element, start, end);
    }
}
bool iterative_binary_search(int element, int* v, int size){
    int start= 0;  
    int end= size-1;

    while (start<end){
    //calular meio
        int half=start+size/2;

    //verificar se elem foi encontrado 
        if (v[half] == element){
            return true;
        }else if(v[half]<element){
            start=half;
        }else{
            end=half;
        }
        size = size/2;
    }
    return false;
}

// 04. Maze
bool explore(int l[10][10], int i, int j){
    // verificar se a posicao e valida
    if(i <0 || j < 0 || i>=10 || j>=10){
        return false;
    }

    // verificar se a posicao esta ocupada ou se já foi visitada
    if(l[i][j]==1){
        printf("\nPosicao ocupada\n");
        return false;
    }else if(l[i][j]==2){
        printf("\nPosicao ja visitada\n");
        return false;

    }else{
    // Para marcar que a posicao foi visitada, atribua o valor 2
        l[i][j] = 2;
        printf("[%d, %d]", i,j);
        // Imprima a posicao que foi visitada

        // Verificar se a posicao e a 9,9.
        if(i==9 && j==9){
             printf("Saida");
            return true;
        }

    }
    // Caso seja a saída, devolver TRUE
    // Explorar as quatro possibilidades a partir da posicao atual (i,j)
    // A possibilidades sao para esquerda, para direita, para cima e para baixo
    if (explore(l, i+1, j)==0){ 
        
        printf("Para direira a e posicao vazia(caminho certo)");
        
        return true;
    }
    if (explore(l, i, j+1)==0){ 
        
        printf("Para baixo a e posicao vazia(caminho certo)");
        
        return true;
    }
    if(j>0){

        if(explore(l, i, j-1)==0){ 

            printf("\nPara cima a e posicao vazia(caminho certo)");

            return true;
        }
    }
    if (i>0)
    {
        if (explore(l, i-1, j)==0){ 
        
            printf("\nPara esquerda a e posicao vazia(caminho certo)");

            return false;
        }
    }
        if (explore(l, i+1, j)==1){ 
        
        printf("Para direira a e posicao ocupada(caminho errado)");
        
        return false;
    }
    if (explore(l, i, j+1)==1){ 
        
        printf("\nPara baixar a e posicao ocupada(caminho errado)");
        
        return false;
    }
    if(j>0){

        if(explore(l, i, j-1)==1){ 

            printf("\nPara cima a e posicao ocupada(caminho errado)");

            return false;
        }
    }
    if (i>0)
    {
        if (explore(l, i-1, j)==1){ 
        
            printf("\nPara esquerda a e posicao ocupada(caminho errado)");

            return true;
        }
    }

    return false;
	// Caso nao haja caminho para nenhum dos lados, devolver false.

}

int maze[10][10] = {
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 1, 1},
    {1, 0, 1, 1, 0, 0, 0, 0, 0, 0},
    {1, 0, 1, 1, 1, 1, 1, 0, 1, 0},
    {0, 0, 1, 1, 1, 1, 0, 0, 1, 0},
    {1, 1, 1, 1, 1, 1, 0, 1, 1, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
};

int to_print_maze(int l[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", l[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int main(){

    
    //01
	printf("\nQuestao 1\n");

    cout<<gcd(50,30)<<endl<<endl;

    //02
	printf("\nQuestao 2\n");

    int v[10] = {1, 2, 7, 8, 10, 11, 12, 13, 14, 15};
    result = sequentially_search(1, v, 10);
    cout<<result<<endl<<endl;
    result = sequentially_search(2, v, 10);
    cout<<result<<endl<<endl;    
    result = sequentially_search(10, v, 10);
    cout<<result<<endl<<endl;    
    result = sequentially_search(15, v, 10);
    cout<<result<<endl<<endl;
    result = sequentially_search(14, v, 10);
    cout<<result<<endl<<endl;
    result = sequentially_search(9, v, 10);
    cout<<result<<endl<<endl;

    //03
	printf("\nQuestao 3\n");

    int v[10] = {1, 2, 7, 8, 10, 11, 12, 13, 14, 15};
    result = binary_search(1, v, 10);
    cout<<result<<endl<<endl;
    result = binary_search(2, v, 10);
    cout<<result<<endl<<endl;    
    result = binary_search(10, v, 10);
    cout<<result<<endl<<endl;    
    result = binary_search(15, v, 10);
    cout<<result<<endl<<endl;
    result = binary_search(14, v, 10);
    cout<<result<<endl<<endl;
    result = binary_search(9, v, 10);
    cout<<result<<endl<<endl;

    int v[10] = {1, 2, 7, 8, 10, 11, 12, 13, 14, 15};

    bool result = iterative_binary_search(10, v, 10);
    cout<<result<<endl<<endl;
    result = iterative_binary_search(15, v, 10);
    cout<<result<<endl<<endl;
    result = iterative_binary_search(5, v, 10);
    cout<<result<<endl<<endl;

    //04  
	printf("\nQuestao 4\n");

    to_print_maze(maze);
    bool encontreiSaida = explore(maze, 2, 5);
    if(encontreiSaida==true){
        printf("\nAchei o caminho para a saida ;) \n");
    } else {
			printf("\nNao achei o caminho para a saida :(\n");
		}
    printf("\n");    
    return 0;

}

