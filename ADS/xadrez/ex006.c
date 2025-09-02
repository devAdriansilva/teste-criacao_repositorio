#include <stdio.h>
# include <string.h>

/*Neste exercício construimos uma função recursiva onde a função regressiva, que realiza a contagem 
regressiva é inicializada na função principal recebendo uma valor inicial como parametro.
O que torna essa funçào recirsiva é o fato de ela invocar ele mesma até que determinada condição seja
falsa. Algo muito importante neste tipo de função é o incremento ( ou decremeneto) a cada nova
chamada, garantindo com isso que eventualmente possa haver uma finalizaçào da chamada recursiva
evitando com isso loops infinitos.  */

void progressiva(int  n_inicial, int n_final, int passo){
  
   if (n_inicial <= n_final)
   {
        printf("%d...", n_inicial);
        progressiva( n_inicial + passo, n_final, passo);
   }
    if(n_inicial == n_final){
       printf("\nFIM DA CONTAGEM");
    }
    
}
void regressiva(int n_inicial, int n_final, int passo){

   if (n_inicial >= n_final)
    {
        printf("%d...", n_inicial);
        regressiva(n_inicial - passo, n_final, passo); 
    }   
    if(n_inicial == n_final){
       printf("\nFIM DA CONTAGEM");
    }
   
}
int main(){
    char tipo, contagemP [20], contagemR [20];
    int v_inicial, v_final, passo;

    printf("***********************************\n");
    printf("  #### CONTADOR INTELIGENTE ####\n");
    printf("***********************************\n");
    printf("Informe O tipo de Contagem\n");
    printf("[P] -> Contagem Progressiva: \n");
    printf("[R] -> Contagem Regressiva: \n");
    printf("***********************************\n");
    scanf(" %c", &tipo);
    switch (tipo)
    {
    case 'p':
    case 'P':
        strcpy(contagemP, "Progressiva");
        printf("Informe um valor inicial para a contagem : ");
        scanf("%d", &v_inicial);
        printf("Informe o valor final da contagem: ");
        scanf("%d",&v_final);
        printf("Informe qual será o passo da contagem: ");
        scanf("%d",&passo);
        printf("Iniciando contagem Progressiva... \n");
        progressiva(v_inicial, v_final, passo);
        break;
    case 'R':
    case 'r':
        strcpy(contagemR, "Regressiva");
        printf("Informe um valor inicial para a contagem: ");
        scanf("%d", &v_inicial);
        printf("Informe o valor final da contagem:");
        scanf("%d",&v_final);
        printf("Informe qual será o passo da contagem: ");
        scanf("%d",&passo);
         printf("Iniciando contagem Regressiva... \n");
        regressiva(v_inicial, v_final, passo);
        break;
    default:
        printf("opção invalida!");
        return 0;
        break;
    }
return 0;
}