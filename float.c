//05. Write a C program to recognize a float number.
#include<stdio.h>
#include<stdbool.h>
int main()
{
char a[100];
 int i, b;
 bool key;
  printf("\nPlease enter a number or $ for exit: ");
  gets(a);
   b=strlen(a);
    if(a[0]=='$')
    exit(0);
      for(i = 0; i<b; i++)
      {
         if(a[i]== '.')
         {
          printf("\nIt is floating point number.\n");
           key = false;
             break;
              }  else
                {
                  key = true;
                   }
                   }
                    if(key == true)
                     {
                     printf("\nIt is not a floating point number.");
     }
      return main();
        }
