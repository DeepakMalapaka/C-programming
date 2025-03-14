#include <stdio.h>
#include <stdlib.h>

int main() {
    int bt[10], wt[10], tat[10], ct[10];
    int n, t, max, temp = 0;
    int i;
    float avgtat = 0, avgwt = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst times of %d processes:\n", n);
    for(i = 0; i < n; i++) {
        printf("Enter the burst time of process %d: ", i + 1);
        scanf("%d", &bt[i]);
        ct[i] = bt[i];
    }

    printf("Enter the time quantum for the given problem: ");
    scanf("%d", &t);
    max = bt[0];
    for (i = 1; i < n; i++) {
        if (max < bt[i])
            max = bt[i];
    }

   
    int remaining = n; 
    int completed[10] = {0};

    while (remaining > 0) {
        for (i = 0; i < n; i++) {
            if (bt[i] > 0) {
                if (bt[i] <= t) {
                    temp += bt[i];
                    tat[i] = temp;
                    bt[i] = 0;
                    completed[i] = 1; 
                    remaining--;
                } else {
                    bt[i] -= t;
                    temp += t;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        wt[i] = tat[i] - ct[i];
        avgtat += tat[i];
        avgwt += wt[i];
    }
    printf("\nThe Average Turnaround Time is: %.2f", avgtat / n);
    printf("\nThe Average Waiting Time is: %.2f\n", avgwt / n);
    
    printf("\n\tPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for (i = 0; i < n; i++) {
        printf("\t%d\t%d\t\t%d\t\t%d\n", i + 1, ct[i], wt[i], tat[i]);
    }

    return 0;
}

