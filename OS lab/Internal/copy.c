#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fptr1,*fptr2;
	char filename[100];
	int c;
	
	printf("Enter the file name to read the data:");
	scanf("%s",filename);
	
	//open one file for reading
	fptr1=fopen(filename,"r");
	if(fptr1==NULL)
	{
		printf("Cannot open the file %s\n",filename);
		exit(1);
	}
	
	printf("Enter the filename to write the data:");
	scanf("%s",filename);
	
	//open the second file to write the data
	fptr2=fopen(filename,"w");
	if(fptr2==NULL)
	{
		printf("Cannot open the file %s\n",filename);
		exit(1);
	}
	
	//Copying the content from one file to another file
	while((c=getc(fptr1))!=EOF)
	{
		fputc(c,fptr2);
	}
	
	printf("Contents copied to %s\n",filename);
	
	fclose(fptr1);
	fclose(fptr2);
	
	return 0;
}
