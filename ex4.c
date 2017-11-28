#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void inv(char ch[]);
void main()
{
char ch[100],ch2[100];
printf("donner une chaine :");
scanf("%s",&ch);
inv(ch);

}
void inv(char ch[])
{
 int i;



 for(i=0;i<strlen(ch);i++)
 {
     if((ch[i]>='a')&&(ch[i]<='z'))
     {
ch[i]=ch[i]-'a'+'A';
     }
     else if ((ch[i]>='A')&&(ch[i]<='Z'))
     {
ch[i]=ch[i]-'A'+'a';


     }


 }
 puts(ch);

}
