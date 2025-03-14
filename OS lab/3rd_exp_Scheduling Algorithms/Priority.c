#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p[10],bt[10],pri[10],wt[10],tat[10];
	int i,j,temp,avgtat,avgwt;
	int n;
	printf("Enter the number of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter the %d process number,burst time,priority:",i);
		scanf("%d%d",&bt[i],&pri[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(pri[i]>pri[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=p[i];
				temp=pri[i];
				pri[i]=pri[j];
				pri[j]=temp;
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}
	}
	avgwt=wt[0]=0;
	avgtat=tat[0]=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		avgwt=avgwt+wt[i];
		avgtat=avgtat+tat[i];
	}
	printf("\nProcess\t\tpriority\tBurstTime\tWaitingTime\tTurnAroundTime");
	for(i=0;i<n;i++)
	{
		printf(&quot;\n%d \t\t %d \t\t %d \t\t %d \t\t %d &quot;,p[i],pri[i],bt[i],wt[i],tat[i]);
	}
	printf(&quot;\nAverage Waiting Time is --- %f&quot;,wtavg/n);
	printf(&quot;\nAverage Turnaround Time is --- %f&quot;,tatavg/n);
	return 0;
}
