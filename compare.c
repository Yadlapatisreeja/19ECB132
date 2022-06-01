#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str1[20];   
   char str2[20]; 
   int value;  
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);    
   value=strcmp(str1,str2);  
   if(value==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
   return 0;  
}  

/*output:
Enter the first string : 10 
Enter the second string : 10
strings are same*/
