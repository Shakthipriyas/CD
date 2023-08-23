#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char str[100];
	int a=0;
	printf("enter a string to check wheather it is commented or not: ");
	scanf("%s",&str);
	if(str[0]=='/')
	{
			if(str[1]=='/')
			{
				printf("It is commented");
			}
			else if(str[1]=='*')
			{	
				for(i=2;i<=100;i++)
				{
					if(str[i]=='*' && str[i+1]=='/')
					{
						printf("It is commented");
						a=1;
						break;
					}
					else
						continue;
				}
			if(a==0)
				printf("It is not commented1");
			}
	}
	else
		printf("It is not commented");
	
}
