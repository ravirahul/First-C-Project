/* first C program on Github */
/* Author: Ravi Rahul */
/* June 12 2018 18:32 */

/* FIBONACCI SERIES */

#include<stdio.h>
int main()
{
 int i, n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
