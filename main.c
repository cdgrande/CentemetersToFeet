#include <stdio.h>
#include <stdlib.h>

double cm,ft,in;
double a = 0.393701;
double b = 12;

int main()
{
    printf("enter measurement in cm:");
    scanf("%ld", &cm);
    ft = cm*a/b;
    in = cm*a;
    printf("%8.4ld inch\n",in);
    printf("%8.4ld feet",ft);
    return 0;
}
