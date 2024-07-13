#include <stdio.h>
#include <stdlib.h>

void pe4(void); /* Proj. Euler problem #4 */
int eh_palindromo(int n);

int main(void)
{
    pe4(); /* Proj. Euler problem #4 */
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* Proj. Euler problem #4 */
/* Problem description:
 * Esse programa encontra o maior palindromo a partir do produto de dois numeros de 3 digitos.
 */

void pe4(void)
{
    /* local variables */
    ulong r=0; /* answer */
    int n = 1;
    
    eh_palindromo(n);
    int maior_palindromo = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int produto = i * j;
            if (produto <= maior_palindromo) {
                break;
            }
            if (eh_palindromo(produto)) {
                maior_palindromo = produto;
                r = maior_palindromo;
            }
        }
    }
    printf("\nO maior palindromo feito a partir do produto de dois numeros de 3 digitos eh: ");
    printf("%s: %lu\n", __FUNCTION__, r); /* answer */
    return;
}

int eh_palindromo(int n) {
    int reverso = 0;
    int temp = n;

    while (temp != 0) {
        int digito = temp % 10;
        reverso = reverso * 10 + digito;
        temp = temp / 10;
    }

    return n == reverso;
}
