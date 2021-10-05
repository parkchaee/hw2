#include <stdio.h>

int main(void)
{
    
    double kilo;
    double mete;
    printf("Please enter kilometers.:");
    scanf_s("%lf", &kilo);
    mete = (double)kilo * 1000 / 1609;
    printf("%.1fkm is equal to %.1f miles\n", kilo, mete);
    return 0;
}
