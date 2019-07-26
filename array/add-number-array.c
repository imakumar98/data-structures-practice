#include <stdio.h>


// Driven Program
int main()
{
    int a[] = { 9, 3, 9 };
    int b[] = { 6, 1 };

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    printf("%d , %d",sizeof(a), sizeof(b));

    return 0;
}
