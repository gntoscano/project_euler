#include <stdio.h>
#include <stdlib.h>

/* ---------------------------------------------------------------------- */
/* prototypes */
void pe6(void); /* Proj. Euler problem #6 */
int soma_de_quadrados(int x);
int quadrado_das_somas(int x);

int main(void)
{
    pe6(); /* Proj. Euler problem #6 */
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* Proj. Euler problem #6 */
/* Problem description:
 * O problema pede para encontrar a diferença entre a soma dos quadrados dos primeiros n números naturais e o quadrado da soma desses mesmos números.
 */

void pe6(void)
{
    /* local variables */
    ulong r=0; /* answer */
    int x = 100; // O valor de n fornecido pelo problema

    // Chama a função para calcular a soma dos quadrados
    int soma_quad = soma_de_quadrados(x);

    // Chama a função para calcular o quadrado da soma
    int quad_soma = quadrado_das_somas(x);

    // Calcula a diferença entre o quadrado da soma e a soma dos quadrados
    int subtracao = quad_soma - soma_quad;
    r = subtracao;

    printf("%s: %lu\n", __FUNCTION__, r); /* answer */
    return;
}

//Funcao para calcular a soma dos quadrados
int soma_de_quadrados(int x) {
    int soma = 0;
    for (int i = 1; i <= x; i++) {
        soma += i * i;
    }
    return soma;
}

// Função para calcular o quadrado da soma dos primeiros n números naturais
int quadrado_das_somas(int x) {
    int soma = 0;
    // Loop para calcular a soma de todos os números de 1 até n
    for (int i = 1; i <= x; i++) {
        soma += i;
    }
    // Retorna o quadrado da soma
    return soma * soma;
}
