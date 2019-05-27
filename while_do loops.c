#include <stdio.h>

int main()
{
    float i, num1, num2;
    printf("Enter 2 values v1,v2 where v1 is less that v2: ");
    scanf("%f,%f", &num1, &num2);

    i = num1;
    while(i <= num2)
    {
        printf("%.1f\n", i);
        i = i+.1;
    }
    return 0;
}
