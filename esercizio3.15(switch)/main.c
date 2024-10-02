#include <stdio.h>

int main() {
    char categoria;
    float prezzo, sconto;
    printf("scegli la tua categoria ( P, S, D):  ");
    scanf("%c", &categoria);
    printf("prezzo biglietto: ");
    scanf("%f", &prezzo);

    switch(categoria) {
        case 'P':
            sconto = prezzo * 0.1;
            prezzo = prezzo - sconto;
            break;
        case 'S':
            sconto = prezzo * 0.15;
            prezzo = prezzo - sconto;
            break;
        case 'D':
            sconto = prezzo * 0.25;
            prezzo = prezzo - sconto;
            break;
        default:
            printf("categoria non valida");
            return 0;


    }
    printf("il prezzo del biglietto e %.2f", prezzo);

    return 0;
}
