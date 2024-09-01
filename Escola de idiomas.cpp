#include<stdio.h>
main()
{
    float vi=600,ve=400,vf=600;
	int c,n; float pf;
	printf("\nCurso (1,2,3)=");
	scanf("%d",&c);
	printf("\nNivel (1,2,3)=");
	scanf("%d",&n);
	
	if (c<1 || c>3 || n<1 || n>3)
	printf("\n Erro!verifique...");
	
	else {
		if(c==1)
	    pf=vi;
	    
		else if(c==2)
		pf=ve;
		
		else pf=vf;
		
		if(n==1)
		pf=pf*1.1;
		
		else if (n==2)
		pf=pf*1.15;
		
		else pf=pf+1.25;
		
	printf("\n Preco Final=%.2f",pf);	
	}
}
