#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int bt[10],tat[10],wt[10];
	float tatavg=0,wtavg=0;
	printf("Enter the number of processes:");
	int n;
	scanf("%d",&n);
	printf("Enter the burst time for %d number of processes:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	wt[0]=0;
	tat[0]=bt[0];	
	for(int i=0;i<n;i++)
	{
			wt[i]=wt[i-1]+bt[i-1];
			tat[i]=tat[i-1]+bt[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("Process:%d with \nBurst time:%d Wating time:%d Turn around time:%d \n",i,bt[i],wt[i],tat[i]);
		tatavg=tat[i];
		wtavg=wt[i];
	}
	printf("The total turn around time avg is:%lf\n",tatavg/n);
	printf("The total waiting time avg is:%lf\n",wtavg/n);
}
