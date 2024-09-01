#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"US");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 11) {
        printf("Criança\n");
    } else if (idade >= 12 && idade <= 18) {
        printf("Adolescente\n");
    } else if (idade >= 19 && idade <= 24) {
        printf("Jovem\n");
    } else if (idade >= 25 && idade <= 40) {
        printf("Adulto\n");
    } else if (idade >= 41 && idade <= 60) {
        printf("Meia Idade\n");
    } else if (idade > 60) {
        printf("Idoso\n");
    } else {
        printf("Idade inválida\n");
    }

    return 0;
}

