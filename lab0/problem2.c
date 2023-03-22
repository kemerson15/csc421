#include <stdio.h>
int width;
int height;

int area;
int perimeter;

int main() {
    height = 5;
    width = 3;

    perimeter = 2*(height + width);
    printf ("Perimeter of the rectangle = %d inches\n", perimeter);

    area = height * width;
    printf ("Area of the rectangle = %d square inches\n", area);
    
}