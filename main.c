#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c = 0;
    double x1, x2 = 0;

    printf("Enter a: "); scanf("%i", &a);
    printf("Enter b: "); scanf("%i", &b);
    printf("Enter c: "); scanf("%i", &c);

    if ((b * b - (4 * a * c)) < 0)
    {
        puts("\nUsing the set of real numbers: There is no solution.");
        return 0;
    }
    
    x1 = ((b * -1) + sqrt((b  * b) - (4 * a * c))) / (2 * a);
    x2 = ((b * -1) - sqrt((b  * b) - (4 * a * c))) / (2 * a);

    if (x1 == x2)
    {
        printf("\nThe only one solution: %.3f\n", x1);
    }
    else
    {
        printf("\nx1 equals to %.3f and x2 equals to %.3f.\n", x1, x2);
    }

    return 0;
}