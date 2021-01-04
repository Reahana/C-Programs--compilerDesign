//09. Write a C program to recognize different types of operator.
#include<stdio.h>
 #include<stdbool.h>
 int main()
  {
   char a[20],b;
    int i;
     bool key = true;
     char *op[]={"+","-","/","*","++","-","=","==","!=","?:",">","<",">=",
     "<=","!","||","&&","&","%","+=","-=","*=","/=","%=","->", ".","sizeof()",
     "|","~",">>","<<","^","()","[]","(type)","&=","^=","|=",">>=","<<=",","};
      printf("Enter $ and space for exit or Enter any word to recognize operator: ");
       gets(a);
        b = strlen(a);
         if(a[0]=='$')
          exit(0);
           for(i=0;i<b;i++)
            {
            if(strcmp(op[i],a)==0)
            {
             printf("Operator\n");
              key = false;
              break;
       }
       }
        if(key == true)
         {
           printf("Not Operator\n");


    }
    return main();
}
