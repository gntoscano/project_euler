#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------------------------------------- */
/* prototypes */
void pe5(void); /* Proj. Euler problem #5 */

/* ---------------------------------------------------------------------- */
/* main function */
/* Do not change the main function. Use the void pe5(void) and
 * others you create here or in the myeulerlib.c and myeulerlib.h files
 */
int main(void)
{
    pe5(); /* Proj. Euler problem #5 */
    return EXIT_SUCCESS;
}

void pe5(void)
{
    /* local variables */
    ulong r=0; /* answer */

    int cont = 0, num = 1;
    int res = 0;
    printf("\n O numero que eh divisivel por todos os numeros entre 1 e 20 eh: ");
        while (num != res){
            num++;
            cont++;
            if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0 && num % 7 == 0 && num % 11 == 0 && num % 13 == 0 && num % 16 == 0 && num % 17 == 0 && num % 18 == 0 && num % 19 == 0){
                res = num;
                r = res;
            }
        }
    printf("%s: %lu\n", __FUNCTION__, r); /* answer */
    return;
}
