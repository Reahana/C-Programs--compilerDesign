//04. Write a C program to recognize an integer number.
 #include<stdio.h>
 #include<stdbool.h>
int main() {
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
          printf("\nIt is not Integer number.\n");
           key = false;
            break;
            }
         else
         {
         key = true;
         }
     }
    if(key == true)
    {
    printf("\nIt is a integer number.");
     }
  return main();
 }
