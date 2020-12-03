/*01. Write a C program to recognize the following verb: is, am, are ,were, was, be,
being,been,do,does,did,will,would,should,can,could,has,have,had,go */

#include<stdio.h>
#include<stdbool.h>
int main()
{
 char num[20];
 int i, l;
 bool key = false;
 char *verb[]={"is","am","are","were","was","be","being","been","do","does","did","will",
"would","should","can","shall","could","have","had","has","go"};
 printf("\nEnter $ for exit or enter any word to recognize:");
 gets(num);
 if(num[0]=='$')
 exit(0);
 for(i=0;i<21;i++)
 {
 if(strcmp(verb[i],num)==0)
{
printf("\nVerb.");
key = true;
 }
 }
 if(key ==false)
{
printf("\nNot Verb");
}
return main();
}
