#include <stdio.h>
int main () {
    int a = 125, b = 12345; 
    long ax = 1234567890; 
    short s = 4043; 
    float x = (int)2.13459; 
    double dx = (int)1.1415927; 
    char c = 'W'; 
    unsigned long ux = 2541567890;

    printf("a + c = %d\n", a+c);
    printf("x + c = %d\n", ((int)x+c));
    printf("dx + x = %f\n", dx + x);
    printf("((int) dx) + ax = %ld\n", ((int) dx)+ax);
    printf("a + x = %f\n", a+x);
    printf("s + b = %d\n", s+b); 
    printf("ax + b = %d\n", ax+b);
    printf("s + c = %d\n", s+c);
    printf("ax + c = %ld\n", ax+c);
    printf("ax + ux = %lu\n", ax+ux);

}