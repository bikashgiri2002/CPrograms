#include <stdio.h>
int main()
{
    int bt[20], wt[20], tat[20], i, n;
    float wtavg, tatavg;
    printf("Entre the number of process:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the burst time of process %d--", i);
        scanf("%d", &bt[i]);
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
        printf("\t%d\t\t%d\t\t%d\t\t%d\n", i, bt[i], wt[i], tat[i]);
    }
    printf("Average waiting time is :%f\n", wtavg / n);
    printf("Average turnaround time is :%f\n", tatavg / n);
    return 0;
}