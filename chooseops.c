//Program meant to test techniques for acting on which operator the user chooses.

#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
int ops[3]={'a','b','c'};
char buffer;
int i,i2;

for (i=1;i!=argc;i++)
{
	i2=0;
	while (argv[i][i2++]!='\0') printf("A character you gave me is:%c\n ", argv[i][i2-1]);
}

printf("\n\n");	

if (argc != 2){
	printf("usage: [a] or [b] or [c]");
	return 2;
}

//printf("Your chosen opnumber was:  %i",i);

}
