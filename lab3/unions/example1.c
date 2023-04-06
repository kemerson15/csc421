#include <stdio.h>

union Coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    }; // anonymous struct acts the same way as an anonymous union, members are on the outer container
    int coins[4];
};

int main () {
    union Coins change;
    for(int i = 0; i < sizeof(change) / sizeof(int); ++i)
{  
    printf("There are %i quarters, %i dimes, %i nickels, and %i pennies\n",
        change.quarter, change.dime, change.nickel, change.penny);
};
}