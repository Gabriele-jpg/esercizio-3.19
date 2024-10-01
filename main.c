#include <stdio.h>

int main(void) {
    int numero1, numero2, numero3;
    printf("inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &numero2);
    printf("inserisci il terzo numero: ");
    scanf("%d", &numero3);
    if(numero1>numero2 && numero1>numero3){
        printf("il primo numero è quello maggiore");
    }
    else if(numero2>numero1 && numero2>numero3) {
        printf("il secondo numero è quello maggiore");
    }
    else if(numero3>numero1 && numero3>numero2 ) {
        printf("il terzo numero è quello maggiore");
    }
    return 0;
}
