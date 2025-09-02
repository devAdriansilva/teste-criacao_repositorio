#include <stdio.h>

int main(){
    int horas_semana[6];
    int horas_extras = 0;
    int soma_horas= 0;
    
    horas_semana[0] = 7;
    horas_semana[1] = 7;
    horas_semana[2] = 8;
    horas_semana[3] = 8;
    horas_semana[4] = 8;
    horas_semana[5] = 7;
    horas_semana[6] = 7;

    for (int i = 0; i < 6; i++)
    {
      if (horas_semana[i] > 7
    )
      {
        int diferenca = 7- horas_semana[i]; 
        horas_extras += diferenca;
      }
     soma_horas += horas_semana[i]; 
    }

    printf("Total de horas trabalhadas -> %d \n",soma_horas);
    printf("Total de horas extras  -> %d", horas_extras);


    
    
    return 0;
}