#include <stdio.h>

int addInt (int a, int b){
return a+b;
}

int subInt (int a, int b){
return a-b;
}

int multInt (int a, int b){
return a*b;
}


int main (void){
int func;
int a;
int b;
printf("Enter 1 for +, Enter 2 for -, Enter 3 for *: ");
scanf("%i",&func);

if (func > 3 || func <1 ) {
	printf("Error.  You did not follow the instructions.");
	return -1;
}
printf("\nEnter the first number to be operated on: ");
scanf("%i", &a);
printf("\nEnter the second number to be operated on: ");
scanf("%i", &b);
printf("\n\n");
int (*funcpt[3])(int,int);
funcpt[0]=&addInt;
funcpt[1]=&subInt;
funcpt[2]=&multInt;

char ops[3]={'+','-','*'};

printf("Operation Requested on: %i %c %i is = %i\n",a,ops[func-1],b,funcpt[func-1](a,b));
return 0;
}
