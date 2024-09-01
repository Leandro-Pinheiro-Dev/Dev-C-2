#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"US");
 
    char* itens[] = {
        "Geladeira",
        "Fogão",
        "Micro-ondas",
        "Televisão 80 Polegadas",
        "Sofá",
        "Rack",
        "Mesa Jantar",
        "Liquidificador"
    };
    float precos[] = {
        1500.00,
        990.00,
        630.00,
        6300.00,
        1200.00,
        425.00,
        980.00,
        95.00
    };
    int num_itens = 8;

    for (int i = 0; i < num_itens; i++) {
        printf("%s = R$%.2f\n", itens[i], precos[i]);
    }

    return 0;
}

