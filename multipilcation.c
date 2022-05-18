include <stdio.h>

int main()
{
    int first, second, *p, *q, multiplication;
    
    printf("Enter two integers to multiplication\n");
    scanf("%d%d", &first, &second);
    
    p = &first;
    q = &second;
    
    multiplication = *p * *q;
    
    printf("product of entered numbers = %d\n",multiplication);
    
    return 0;
}
