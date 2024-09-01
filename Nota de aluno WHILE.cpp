#include <stdio.h>
main()
{
	float N1,N2,M; int QA=0,QR=0,QE=0,conta=1;
	const int total=10;
	while(conta<=total)
	{
		printf("\nNota 1 do aluno=",conta);
		scanf("%f",&N1);
		printf("\nNota 2 do aluno=",conta);
		scanf("%f",&N2);
		
		M=(N1+N2)/2;
		printf("\n\tMedia do aluno%d=%.2f",conta,M);
		
		if(M>=6)
		{
			printf("\n\t Aprovado");
			QA=QA+1;
		}
		else if(M<3)
		{
			printf("\n\tReprovado");
			QR=QR+1;
		}
		else
		{
			printf("\n\tExame");
			QE=QE+1;
		}
	conta=conta+1;
	}
	printf("\n Quantidade de Aprovado=%d",QA);
	printf("\n Quantidade de Reprovado=%d",QR);
	printf("\n Quantidade de Exame=%d",QE);
}
