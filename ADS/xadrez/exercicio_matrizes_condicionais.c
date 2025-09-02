#include <stdio.h>

int main(){


    /*OBJETIVOS
    criar uma matriz e fazer uma busca de um valor especifico 
    na matriz.  O resultado deve exibir o indices onde o valor foi encontrado.
    caso não seja encontrado deve retornar uma mensagem informando isso
    */
   // Elementos : Matriz, valor buscado, booleano
int matriz [3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
int busca = 6;
int encontrado = 0; // O valor zero define a variável com valor inicial false

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
       printf("% 2d ",matriz[i][j]);
    }
    printf("\n");
}


for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if (matriz[i][j] == busca){
            printf("Valor %d encontrado na linha [%d] coluna[%d] \n", busca, i, j );  
            encontrado = 1;
            break;
         }    
    } 
    if (encontrado) break;
}    
if (!encontrado)
{
    printf("Valor %d  não encontrado!", busca);
}
    return 0;
}    
