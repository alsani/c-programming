#include <stdio.h>

int main()
{
    int marks[5] = {20,19,8,18,10};

    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);

    int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    printf("Average is: %f", (float)sum / 5);
    return 0;
}