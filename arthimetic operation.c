#include<stdio.h>
#include<conio.h>
int main()
{
	char choice[5];
	printf("enter your choice: ");
	scanf("%s",&choice);
	switch(choice[0])
	{
		case '>':
			if(choice[1]=='=')	
				printf("Greater than or Equal to");
			else
				printf("Greater than");
		break;
		case '<':
			if(choice[1]=='=')
			   printf("Less than or Equal to");
			else
				printf("Less than");
		break;
		case '=':
			if(choice[1]=='=')
			   printf("Equality ");
			else
				printf("Assignment");
      	break;
		case '!':
			if(choice[1]=='=')
			   printf("Not Equal to");
			else
				printf("Bit not");
		break;
		case '&':
			if(choice[1]=='&')
			   printf("logical AND");
			else
				printf("Bitwise AND");
		break;
		case '|':
			if(choice[1]=='|')
			   printf("Logical OR");
			else
				printf("Bitwise OR");
		break;
		case '+':
				printf("Addition operator");
		break;
		case '-':
				printf("subtraction");
		break;
		case '*':
				printf("Multiplication");
		break;
		case '/':
				printf("Division");
		break;
		case '%':
				printf("Modulus");
		break;
		default:
			    printf("invalid operator");
		break;
	}
}
