//Program meant to test techniques for acting on which operator the user chooses.

#include <string.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){


if (argc != 2){
	printf("number + number");
	return 2;
}

int base=10; //later to be specified by the user

int result=0; //should be long
int subresult=0; //should be long
int argindex=1;
int i=0;
int powindex=0;
int convertchar;

printf("test");
/*
while (argindex++!=argc){
	subresult=0;
	while (i!=strlen(argv[argindex])){
		convertchar= argv[argindex][i]-'0';
		exit(0);
		printf("Yes or no.");
		if (convertchar < 0 || convertchar > 9){
			if (argv[argindex][i]=='+'){
				powindex=0;
				result+=subresult;
				subresult=0;
				continue;
			}else{
				printf("Error!  Invalid Operation Specified\n");
				return 2;
			}
		}
		subresult+=convertchar*pow(base,powindex++);
	printf("added something\n");	
}

//printf("Your chosen opnumber was:  %i",i);

}
//printf("The result of your additions was: %i",result);
*/
}
