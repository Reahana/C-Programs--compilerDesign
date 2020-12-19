 //06. Write a C program to recognize a digit.
#include<stdio.h>
int main()
{
 char a;
  printf("\nEnter character to recognize digit: ");
   scanf("%c",&a);
   if(a == '1'|| a == '2' || a == '3'|| a =='4'|| a == '5' || a == '6'||a =='7'|| a == '8' ||   a == '9'|| a == '0')
    {
    printf("\nIt's a digit.");
     }
      else  {
       printf("\nIt's not a digit.");
         }
         return 0;
         }
