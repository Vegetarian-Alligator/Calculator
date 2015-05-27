//Program meant to test techniques for acting on which operator the user chooses.

#include <string.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
int i,i2;

char *plussign;
char *lastplus;
int index;
index=-1;

int base=10;

//I have a better idea...

long result=0;

for (i=1;i!=argc;i++)
{
	i2=0;
	while (i2!=strlen(argv[i])){
		while (argv[i][i2++]!='+') plussign=&argv[i][i2];
		printf("INdex: %i\n",index);
		index++;
		if (index){	
			index=-1;
		}else {lastplus=plussign;}
	}
	
	if (lastplus==plussign && index !=-1){ //Still assumes an equal sign is present.
		lastplus=argv[i];
		int subgoal=(plussign-lastplus)/sizeof(char)-1; //The actual position is included in this count, not just the space between!
		int subcount;
		int (subcount=0;subcount<subgoal;subcount++){
			result += int(argv[subcount] - '0')*pow(subcount,base);	
		}
	}	
}

printf("\n\n");	

if (argc != 2){
	printf("usage: [a] or [b] or [c]");
	return 2;
}

//printf("Your chosen opnumber was:  %i",i);

}
