#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr;
	char filename[100];
	char c;
	int spaces=0;
	
	printf("Enter the file name to perform grep:");
	scanf("%s",filename);
	
	//open file for reading and performing global search for regular expression
	fptr=fopen(filename,"r");
	
	//Check whether file is existed or not
	if(fptr==NULL)
	{
		printf("Cannot open the file %s\n",filename);
		exit(1);
	}
	
	//Performing grep
	while((c=fgetc(fptr))!=EOF)
	{
		if(c==' ')
			spaces++;
	}
	
	printf("The number of spaces in the entered file are %d\n",spaces);
	return 0;
}
