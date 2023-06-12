#include<stdio.h>

main()

{
	FILE *p;
	char data[1000];
	p=fopen("p-10 file HENIL.txt","w");
	
	if(p==NULL)
	{
		printf("could not open file");
	}
	else
	{
		printf("enter any value=");
		gets(data);
		fputs(data,p);
		printf("data enter successfully.");
		
	fclose(p);	
	}
}
