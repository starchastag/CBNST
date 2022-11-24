#include <stdio.h>
#include <math.h>
#define f(x) (pow(2*x,3)-pow(x,2)-1) //The equation we have to solve

void main()
{
    float a, b, m, var, R, f;
    int count = 0;

    printf("\n\tFor Root of the equation 2x^3-x^2-1 is ");
    
    do
    {
        printf("\nEnter first number: ");
        scanf("%f", &var);
        R = f(var);
        if (R < 0)
            a = var;
    } while (R > 0);
    
    do
    {
        printf("\nEnter second number: ");
        scanf("%f", &var);
        R = f(var);
        if (R > 0)
            b = var;
    } while (R < 0);

    do
    {
        printf("\nYour root of the equation between value %.2f and %.2f is ", a, b);
        m = (a + b) / (2.0);
        // (f(m) > 0) ? (b = m) : ((f(m) < 0)? (a = m) : printf("Root at equation is %f", f(m)));
        if (f(m) > 0)
            b = m;
        else if (f(m) < 0)
            a = m;
        else
            printf("\nRoot at equation is %.2f", f(m));
        count++;
    } while (count <= 5);

    printf("The root is %f", m);
}
