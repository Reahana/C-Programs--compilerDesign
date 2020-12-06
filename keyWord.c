//03. Write a C program to recognize different keyword.
#include<stdio.h>
#include<stdbool.h>
int main()
{
   char num[20];
   int i;
   bool key=false;
  char *keyword[]={"asm","auto","break","case","cdecl","char","class","const","continue",
  "_cs","defau lt","delete","do","double","_ds","else","enum","_es","extern","_export","far",
  "_fastcall","float"," for","friend","goto","huge","if","inline","int","interrupt","_loadds",
  "long","near","new","operato","pascal","private","protected","public","register","return","_saveregs","_seg","short","signed", "sizeof","_ss","static","struct","switch","template","this","typedef","union","unsigned","virtual", "void","volatile","while"};
   printf("\nEnter $ for exit or Enter any word to recognize keyword: ");
   gets(num);
   if(num[0]=='$')
   exit(0);
    for(i=0;i<60;i++)        {
       if(strcmp(keyword[i],num)==0)
       {
            printf("\nKeyword.");
            key = true;
            break;
       }
    }
    if(key ==false){
        printf("\nNot Keyword");
    }
    return main();
}
