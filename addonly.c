//Program meant to test techniques for acting on which operator the user chooses.

#include <string.h>
#include <stdio.h>
#include <math.h>






int main(int argc, char *argv[]){

//printf("Length %i",strelen(argv[0][0]);
//return 0;


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

//while (argindex++!=argc){
//	subresult=0;
	while (argv[argindex][i++] != '\0'){
		convertchar= argv[argindex][i-1]-48;
		printf("convertchar for this cycle is: %i the original value was: %c\n", convertchar,argv[argindex][i-1]);
		if ((convertchar < 0 || convertchar > 9)){
			if (argv[argindex][i-1]=='+'){
				powindex=0;
				result+=subresult;
				subresult=0;
				continue;
			}else{
				printf("Error!  Invalid Operation Specified i: %i c:%c convertchar: %i\n",i,argv[argindex][i-1],convertchar);
				return 2;
			}
		}
					
		subresult*=pow(base,powindex++);
		subresult+=convertchar;
}

//printf("Your chosen opnumber was:  %i",i);

//}
printf("The result of your additions was: %i\n",result+subresult);

}
