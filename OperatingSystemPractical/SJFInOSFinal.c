#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of process:");
	scanf("%d",&n);
	int p[n],bt[n],wt[n],tat[n],i,j,temp;
	float wtavg,tatavg;
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter the bust time of process:");
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(bt[i]>bt[j])
			{
				temp=bt[j];
				bt[j]=bt[i];
				bt[i]=temp;
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
	wt[0] = wtavg = 0;
    tat[0] = tatavg = bt[0];
    for (i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
        tat[i] = tat[i - 1] + bt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }
    printf("\tPROCESS\tBURST_TIME\tWAITING_TIME\tTURNAROUND_TIME\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d\t\t%d\t\t%d\t\t%d\n", p[i], bt[i], wt[i], tat[i]);
    }
    printf("Average waiting time is :%f\n", wtavg / n);
    printf("Average turnaround time is :%f\n", tatavg / n);
	return 0;
}
