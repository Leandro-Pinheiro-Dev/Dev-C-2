#include<stdio.h>

int main()
{
	int conta =1; float preco, soma=0;
	while (conta<=10)
	{
		printf("\n DIGITE O PRECO = R$");
		scanf("%f",&preco);
		
		if (preco>200) 
		preco=preco*0.92;
		
		else 
		preco=preco*0.95;
		
		printf("\n PRECO DO PRODUTO %d COM DESCONTO = R$ %2.f",conta,preco);
		
		conta ++;
		soma=soma+preco;
	}
	printf("\n\n LOJA ARRECADOU R$ %2.f REAIS",soma);
}
