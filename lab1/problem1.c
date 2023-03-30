#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
		char buffer [256];

		printf ("Input an integer: ");
		fgets (buffer, 256, stdin);

		i = atoi (buffer);
		printf ("Output: %d",i + 5);

		return 0;
}