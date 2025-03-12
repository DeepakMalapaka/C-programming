#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int bt[10],wt[10],tat[10],ct[10];
	int t,max,avgtat,avgwt;
	int temp=0;
	clrscr();
	printf("Enter the number of process:");
	int n;
	scanf("%d",&n);
	printf("Enter the burst times of %d number of process:",n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter the burst time of process %d: ",i);
		scanf("%d",&bt[i]);
		ct[i]=bt[i];
	}
	printf("Enter the time quantum for the given problem:");
	scanf("%d",&t);
	max=bt[0];
	for(int i=1;i<n;i++)
	{
		if(max<bt[i])
			max=bt[i];
	}
	for(int j=0;j<(max/t);j++)
	{
		for(int i=0;i<n;i++)
		{
			if(bt[i]!=0)
			{
				if(bt[i]<=t)
				{
					tat[i]=temp+bt[i];
					temp=temp+bt[i];
					bt[i]=0;
				}
				else 
				{
					bt[i]=bt[i]-t;
					temp=temp+t;	
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		wt[i]=tat[i]-ct[i];
		avgtat+=tat[i];
		avgwt+=wt[i]
	}
	printf(&quot;\nThe Average Turnaround time is -- %f&quot;,att/n);
	printf(&quot;\nThe Average Waiting time is -- %f &quot;,awt/n);
	printf(&quot;\n\tPROCESS\t BURST TIME \t WAITING TIME\tTURNAROUND	TIME\n&quot;);
	for(i=0;i&lt;n;i++)
		printf(&quot;\t%d \t %d \t\t %d \t\t %d \n&quot;,i+1,ct[i],wa[i],tat[i]);
	getch();	
	return 0;
}
