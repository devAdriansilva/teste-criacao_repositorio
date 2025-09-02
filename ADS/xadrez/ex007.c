#include <stdio.h>

void regressivo(int v){
    if (v >= 0)
    {
        printf(" EMPILHANDO %d\n", v);
        regressivo(v-1);
        printf(" DESEMPILHANDO %d\n", v);
    }
    
}

int main(){
    
    int valor =10;
    regressivo(valor);

    return 0;
}

