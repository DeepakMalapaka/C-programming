#include <stdio.h>

#define MAX 50

int main() {
    int frames, pages, page[MAX], frame[MAX], freq[MAX];
    int i, j, k, pos, min, faults = 0, found;

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    printf("Enter the page reference string: ");
    for(i = 0; i < pages; i++)
        scanf("%d", &page[i]);

    // Initialize frames and frequencies
    for(i = 0; i < frames; i++) {
        frame[i] = -1;
        freq[i] = 0;
    }

    printf("\nPage Replacement Process using LFU:\n");

    for(i = 0; i < pages; i++) {
        found = 0;

        // Check if page is already in frame
        for(j = 0; j < frames; j++) {
            if(frame[j] == page[i]) {
                freq[j]++;
                found = 1;
                break;
            }
        }

        // If page is not found (Page Fault)
        if(!found) {
            pos = 0;
            min = freq[0];

            // Find least frequently used frame
            for(k = 1; k < frames; k++) {
                if(freq[k] < min) {
                    min = freq[k];
                    pos = k;
                }
            }

            frame[pos] = page[i];
            freq[pos] = 1;
            faults++;

            printf("Frames: ");
            for(k = 0; k < frames; k++) {
                if(frame[k] != -1)
                    printf("%d ", frame[k]);
                else
                    printf("- ");
            }
            printf("\n");
        }
    }

    printf("\nTotal Page Faults = %d\n", faults);

    return 0;
}
