#include <stdio.h>

int main()
{
    int marks[] = {20,19,8,18,10};
    int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    printf("Average is: %f", (float)sum / 5);
    return 0;
}