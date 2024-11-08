#include <stdio.h>

int main() {
    printf("Hola mundo\n");

    int numero;
    char caracter1, caracter2;
    char texto[] = "Hola mundo 2";

    scanf("%d",&numero);
    getchar();
    scanf("%c",&caracter1);
    getchar();
    scanf("%c",&caracter2);
    getchar();

    printf("%d %c %c\n",numero, caracter1, caracter2);
    return 0;
}
