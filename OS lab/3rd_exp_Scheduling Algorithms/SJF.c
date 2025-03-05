#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int p[10],bt[10],wt[10],tat[10];
	float tatavg=0,wtavg=0;
	int n;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	printf("Enter the burst time of %d processes",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&wt[i]);
		p[i]=i;
	}
	printf("The entered processes are sorted on the basis of burst time in increasing order....\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(bt[j]<bt[i])
			{
				int temp=bt[j];
				bt[j]=bt[i];
				bt[i]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
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
	return 0;
}
