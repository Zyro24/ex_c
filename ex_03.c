#include <stdio.h>

int main() {
    int v1, v3;
    char v2, v4;

    while (1) {
        puts("Ingrese: numcharnumchar");
        if (scanf("%1d%c%1d%c", &v1, &v2, &v3, &v4) == 4)
            printf("respuesta = %d%c%d%c\n", v1, v2, v3, v4);
        else {
            puts("Formato incorrecto. Inténtelo de nuevo.\n");
            while (getchar() != '\n');
        }
    }
    return 0;
}
