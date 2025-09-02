#include <stdio.h>

void moverBispo( int mov, int l, int c){
    printf("### Movimentos do Bispo ### \n");
if(mov > 0){
   for (l= 0; l < 5; l++)
   {
    printf("Cima\n");
    for (c= 0; c <= l; c++)
    {   
    }
    printf("Direita\n");
   }
   
}

}

int main(){

    int l = 0, c = 0, mov = 5;

 moverBispo(mov, l, c);



return 0;
}
