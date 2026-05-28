#include <stdio.h>

int main() {
    int diaI, hhI, mmI, ssI;
    int diaF, hhF, mmF, ssF;
    long inicioTotal, fimTotal, duracao;
    int dias, horas, minutos, segundos;
    scanf("Dia %d", &diaI);
    scanf("%d : %d : %d", &hhI, &mmI, &ssI);
    scanf(" Dia %d", &diaF);
    scanf("%d : %d : %d", &hhF, &mmF, &ssF);
    inicioTotal = (diaI * 86400) + (hhI * 3600) + (mmI * 60) + ssI;
    fimTotal    = (diaF * 86400) + (hhF * 3600) + (mmF * 60) + ssF;
    duracao = fimTotal - inicioTotal;
    dias = duracao / 86400;      
    duracao = duracao % 86400;   

    horas = duracao / 3600;      
    duracao = duracao % 3600;    

    minutos = duracao / 60;      
    segundos = duracao % 60;     
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
    return 0;
}