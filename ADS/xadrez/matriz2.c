#include <stdio.h>

int main(){

    int index ;  // O index será utilizada para definir as coordenadas de exibição da matriz(linha/ coluna)  
    // na linha seguinte temos a declaração e inicialização de uma mtariz de ponteiros 3 x 3 . Cada posição desta matriz 
    // armazena o endereço  
    char *alunos[3][3] = {
        {"Aluno1","Português: 30","Matemática: 90"},// 1 linha na posição -> [0] / 3 colunas nas posições -> [0],[1],[2] 
        {"Aluno2","Português: 30","Matemática: 60"},// 1 linha na posição -> [1] / 3 colunas nas posições -> [0],[1],[2]
        {"Aluno3","Português: 90","Matemática: 30"} // 1 linha na posição -> [2] / 3 colunas nas posições -> [0],[1],[2]
     };

     printf("informe qual a Aluno você quer ver a nota:\n");
     printf("[1] -> Aluno 1\n");
     printf("[2] -> Aluno 2\n");
     printf("[3] -> Aluno 3\n");
     scanf("%d", &index);

     printf("As notas do %s são: %s, %s", alunos[index - 1][0], alunos[index - 1][1], alunos[index - 1 ][2]);

    return 0;
}