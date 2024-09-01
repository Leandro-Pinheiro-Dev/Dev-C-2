#include<stdio.h>
main()
{
	int idade;
	float sal, salariofinal;
	printf("Digite idade\n");
	scanf("%d",&idade);
	printf("Digite Salario\n");
	scanf("%f",&sal);

	if(idade<18 && sal==0)
	{
		printf ("livre de impostos");
		return 0;
	}
	if(idade<18 && sal>0)
	{
		salariofinal=sal*0.95;
		printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		
		return 0;
	}
	
	if(idade>=18&&idade<=59)
	{
		if (sal<=5000)
		{
			salariofinal=sal*0.90;
			printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		}
		else if ( sal<=15000)
		{
			salariofinal=sal*0.85;
			printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		}
		else if(sal<=25000)
		{
			salariofinal=sal*0.75;
			printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		}
		else {
			salariofinal=sal*0.725;
			printf ("valor imposto R$ %.2f \n""salario com descont R$ %.2f",sal-salariofinal,salariofinal);
		}	

	}
	else 
	{
			if (sal<=5000)
		{
			salariofinal=sal*0.95;
			printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		}
		else if ( sal<=15000)
		{
			salariofinal=sal*0.925;
			printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		}
		else if(sal<=25000)
		{
			salariofinal=sal*0.875;
			printf ("valor imposto R$ %.2f \n""salario com desconto R$ %.2f",sal-salariofinal,salariofinal);
		}
		else 
		{
			salariofinal=sal*0.8625;
			printf ("valor imposto R$ %.2f \n""salario com descont R$ %.2f",sal-salariofinal,salariofinal);
		}	
	}
	
}

