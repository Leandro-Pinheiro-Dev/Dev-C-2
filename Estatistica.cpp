#include <stdio.h>
#include <math.h>
#include <locale.h>

double calcular_probabilidade(double a, double b, double c, double d) {
    return ((d - c) / (b - a)) * 100.0;
}

double calcular_media(double a, double b) {
    return (a + b) / 2.0;
}

double calcular_desvio_padrao(double a, double b) {
    return sqrt((pow(b - a, 2)) / 12.0);
}

double calcular_variancia(double a, double b) {
    return pow(b - a, 2) / 12.0;
}

double calcular_coeficiente_variacao(double desvio_padrao, double media) {
    return (desvio_padrao / media) * 100.0;
}

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    double a, b, c, d;
    int opcao;

    printf("Selecione a op��o que deseja calcular:\n");
    printf("1. Probabilidade\n");
    printf("2. M�dia\n");
    printf("3. Desvio Padr�o\n");
    printf("4. Vari�ncia\n");
    printf("5. Coeficiente de Varia��o\n");
    printf("Op��o: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            printf("Digite o limite do intervalo [a]: ");
            scanf("%lf", &a);
            printf("Digite o limite do intervalo [b]: ");
            scanf("%lf", &b);
            printf("Digite o limite do intervalo [c]: ");
            scanf("%lf", &c);
            printf("Digite o limite do intervalo [d]: ");
            scanf("%lf", &d);
            double probabilidade = calcular_probabilidade(a, b, c, d);
            printf("Probabilidade: %.2f%%\n", probabilidade);
            break;
        }
        case 2: {
            printf("Digite o limite do intervalo [a]: ");
            scanf("%lf", &a);
            printf("Digite o limite do intervalo [b]: ");
            scanf("%lf", &b);
            double media = calcular_media(a, b);
            printf("M�dia: %.2f\n", media);
            break;
        }
        case 3: {
            printf("Digite o limite do intervalo [a]: ");
            scanf("%lf", &a);
            printf("Digite o limite do intervalo [b]: ");
            scanf("%lf", &b);
            double desvio_padrao = calcular_desvio_padrao(a, b);
            printf("Desvio Padr�o: %.2f\n", desvio_padrao);
            break;
        }
        case 4: {
            printf("Digite o limite do intervalo [a]: ");
            scanf("%lf", &a);
            printf("Digite o limite do intervalo [b]: ");
            scanf("%lf", &b);
            double variancia = calcular_variancia(a, b);
            printf("Vari�ncia: %.2f\n", variancia);
            break;
        }
        case 5: {
            printf("Digite o limite do intervalo [a]: ");
            scanf("%lf", &a);
            printf("Digite o limite do intervalo [b]: ");
            scanf("%lf", &b);
            double desvio_padrao = calcular_desvio_padrao(a, b);
            double media = calcular_media(a, b);
            double coeficiente_variacao = calcular_coeficiente_variacao(desvio_padrao, media);
            printf("Coeficiente de Varia��o: %.2f%%\n", coeficiente_variacao);
            break;
        }
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
    
    return 0;
} 

