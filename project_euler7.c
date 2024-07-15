#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------------------------------------- */
/* prototypes */
void pe7(void); /* Proj. Euler problem #7 */

int main(void)
{
    pe7(); /* Proj. Euler problem #7 */
    return EXIT_SUCCESS;
}

void pe7(void)
{
    /* local variables */
    ulong r=0; /* answer */
    int cont = 0;
    long num = 2; // Começamo com o primeiro numero primo (2)
    int eh_primo = 1;

    while (cont < 10001) {
        for (long i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }
        if (eh_primo) {
            cont++;
            if (cont == 10001) {
                printf("O 10001º numero primo eh: %ld\n", num);
                break;
            }
        }
        num++;
    }

    r = num;

    printf("%s: %lu\n", __FUNCTION__, r); /* Resposta */
    return;
}
