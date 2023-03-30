#include <stdio.h>

int main () {
    int i;
    double sum = 0;
    double values[5] = {5, 8, 10, 13, 19};

    printf("The array is [");
    for (i=0; i<5; i++) {
        printf(" %.2f, ", values[i]);
        if(i==4)
            printf("%.2f", values[i]);
    
        sum = sum + values[i];
    }
    printf(" ].");
    printf("\nThe sum of this array is %.2lf.", sum);    

    return 0;
    }        
