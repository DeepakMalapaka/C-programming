#include<stdio.h>
#include<string.h>
int main() {
	printf("Enter the length of string:");
	int n=0;
	scanf("%d",&n);
	
	char input[30],stuffed[80];
	char temp[3],double_start[3],double_end[3];
	printf("Enter the string:");
	scanf("%s",input);
	
	while (getchar() != '\n');
	printf("Enter the start limiter:");
	char start;
	scanf("%c",&start);
	
	while (getchar() != '\n');
	printf("Enter the end limiter:");
	char end;
	scanf("%c",&end);
	
	double_start[0]=double_start[1]=start;
	double_start[2]='\0';
	double_end[0]=double_end[1]=end;
	double_end[2]='\0';
	
	stuffed[0]='\0';
	int j=0;
		strcat(stuffed,double_start);
	for(int i=0;i<n;i++) {
		temp[0]=input[i];
		temp[1]='\0';
		if(input[i]==start)
			strcat(stuffed,double_start);
		else if(input[i]==end)
			strcat(stuffed,double_end);
		else
			strcat(stuffed,temp);
	}
	strcat(stuffed, double_end);
    	printf("\nData after character stuffing: %s\n", stuffed);
	return 0;
}
