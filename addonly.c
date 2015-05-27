//Program meant to test techniques for acting on which operator the user chooses.

#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
char test[99]={"abcdefghijklmnopqrstuvwxyz"};

printf("Hardcoded test: %i\n",(test-&test[15])/sizeof(char));
return 0;

int ops[3]={'a','b','c'};
char buffer;
int i,i2;

char *plussign;
char *lastplus;
int index;
index=-1;

//I have a better idea...

for (i=1;i!=argc;i++)
{


	i2=0;
	while (argv[i][i2++]!='+') plussign=&argv[i][i2];
	index++;
	if (index){	
		index=-1;
		printf("Space between the plus signs: %i charactersi\n",(plussign - lastplus)/sizeof(char) );
	}else {lastplus=plussign;}

	
}

printf("\n\n");	

if (argc != 2){
	printf("usage: [a] or [b] or [c]");
	return 2;
}

//printf("Your chosen opnumber was:  %i",i);

}
