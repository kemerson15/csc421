#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, n, sum = 0;
    double average;
    double values [3];

    for (i=0; i<3; i++) {
        printf ("Enter a number: ");
        scanf("%f", &values[i]);

    }

    printf("The array is %.2f", values[i]);
    sum = sum + values[i];

    average = sum / 3;
    printf("\nThe average of the array values is %.2f", average);

    return 0;
}