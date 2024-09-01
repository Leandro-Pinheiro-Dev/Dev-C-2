#include<stdio.h>
main()
{
	int idade;float sal, salariofinal;
	printf("Digite Salario\n");
	scanf("%f",sal);
	printf("Digite idade\n");
	scanf("%d",idade);
	
	if(idade<18 && sal==0)
	{
		printf ("livre de impostos");
		return 0;
	}
	if(idade<18 && sal>0)
	{
		salariofinal=sal*0.95;
		printf ("valor imposto 5%",+sal);
	}
	
	if(idade>=18&&idade<=59)
	{
		if (sal<=5000){
			salariofinal=sal*0.90;
			printf ("valor imposto 10%",+sal);
		}
		if ( sal<=15000)
		{
			salariofinal=sal*0.85;
			printf ("valor imposto 15%",+sal);
		}
		else if(sal<=25000)
		{
			salariofinal=sal*0.75;
			printf ("valor imposto 25%",+sal);
		}
		else {
			salariofinal=sal*0.725;
			printf ("valor imposto 27.5%",+sal);
		}	

	}
	else{
		salariofinal=sal*0.5;
		printf("Aliquotas 50%",sal);
	}
	
}

