#include<stdio.h>
main()
{
	float P,pd;int ID; char est;//Preco IDade ESTudante
	printf("\nPreco Basico=");
	scanf("%f",&P);
	printf("\n idade =");
	scanf("%d",&ID);
	printf("\n Estudante =");
	fflush(stdin);
	scanf("%c",&est);
	
	if(ID<18||ID>60)
	P=P*1.1;
	
	else if (ID<=40||est=='s')
	P=P*1.15;
	
	else pd=P*1.25;
	
	printf("\n Mensalidade=%2.f",pd);
}
