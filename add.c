#include <stdio.h>
int main()
{
    int first, second, *p, *q, sum;
    
    printf("Enter two integers to add\n");
    scanf("%d%d", &first, &second);
    
    p = &first;
    q = &second;
    
    sum = *p + *q;
    
    printf("Sum of entered numbers = %d\n",sum);
    
    return 0;
}

/* output: Enter two integers to add
12
12
Sum of entered numbers = 24*/

