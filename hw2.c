#include <stdio.h>

int main(void)
{
    /*double su;
    double mete;
    printf("Please enter kilometers.:");
    scanf_s("%lf", &su);
    mete = 1000 / 1609 * su;
    printf("%2lf km is equal to %2lf miles\n", su, mete);
    return 0;*/
    double kilo;
    double mete;
    printf("Please enter kilometers.:");
    scanf_s("%lf", &kilo);
    mete = (double)kilo * 1000 / 1609;
    printf("%.1fkm is equal to %.1f miles\n", kilo, mete);
    return 0;
}
