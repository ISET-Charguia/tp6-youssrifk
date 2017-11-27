//---------------exercice4---------------
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void inv(char ch[],char *ch2[]);
void main()
{
char ch[100],ch2[100];
printf("donner une chaine :");
scanf("%s",ch);
inv(ch,&ch2);
printf("%s",ch2);
}
void inv(char ch[],char *ch2[])
{
 int i;
 char c;
c='a';
 strcpy(ch2, "");
 for(i=0;i<strlen(ch);i++)
 {
     if((ch[i]>='a')&&(ch[i]<='z'))
     {
c=ch[i]-'a'+'A';
strcat(ch2,c);

     }
     else if((ch[i]>='A')&&(ch[i]<='Z'))
     {
c=ch[i]-'A'+'a';

    strcat(ch2,c);
     }
else
c=ch[i];
strcat(ch2,c);
 }

}
