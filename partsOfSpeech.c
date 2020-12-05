//02. Write a C program to recognize the following words as different parts of speech: is, am, are,were,go,very,simply,quickly,gently,to,from,behind,between,if,then.
#include<stdio.h>
#include<stdbool.h>
int main()
{
   char num[20];
   int i;
   char *verb[]={"is","am","are","were","was","go"};
   char *adverb[]={"very","simply","quickly","gently","softly"};
   char *preposition[]={"to","from","behind","if","then"};
   char *conjunction[]={"between","and","but"};
   printf("\nEnter $ for exit or Enter any word to recognize parts of speech from list\n(is, am, are, were, was, go, very, to, simply, quickly, \ngently, from, behind, if, then, between, and, but):\n");
   gets(num);
   if(num[0]=='$')
   exit(0);
    for(i=0; i<6; i++)
    {
       if(strcmp(verb[i],num)==0)
       {  printf("\nVerb.\n");  break;
       }
       if(strcmp(preposition[i],num)==0)

            {  printf("\nPreposition.\n");      break;
            }
        if(strcmp(adverb[i],num)==0)
            {      printf("\nAdverb.\n");      break;
            }
            if(strcmp(conjunction[i],num)==0)
            {  printf("\nConjunction.\n");
            } }
    return main();
}
