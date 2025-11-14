#include<stdio.h>
#include<stdlib.h>
struct accountdetails
{
	char name[50];
	int age;
	long int account_number;
	int initial_deposit_amount;
};
struct accountdetails p;
char createaccount(char userinput)
{
	printf("****\nBANK MANAGEMENT\n****\n");
	printf("a/A=account creation\nd/D=Deposit\nw/W=withdrawal\ns/S=account summary\ne/E=exit");

	scanf("%c",&userinput);
	if(userinput=='a'||userinput=='A')
	{


		printf(" create account  \n");



	}
	else if(userinput=='d'||userinput=='D')
	{
		printf("\n");

	}
	else if(userinput=='w'||userinput=='W')
	{
		printf("\n");

	}
	else if(userinput=='s'||userinput=='s')
	{
		printf("\n");

	}
	else if(userinput=='e'||userinput=='E')
	{
		exit(0);
	}




}
int deposit_money(int amount)
{
    printf("Enter account number");
    scanf("%d",&amount);
}

int main()
{
	char userinput;
	createaccount(userinput);
	int n;
	while(n!=0)
	{


		scanf("%d\n", &p.age);
		printf("%s\n",p.age);
		scanf(" %d\n", &p.initial_deposit_amount);
		printf("%d\n",p.initial_deposit_amount);
		fgets(p.name,sizeof(p.name),stdin);
		printf("%s\n",p.name);






	}


}


