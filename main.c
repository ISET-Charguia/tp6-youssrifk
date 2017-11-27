//----------------exercice3------------
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void remplace(char *ch[],char old ,char nov);
void main()
{
    int k,j;
char ch[50];
char old;
char nov;
printf("donner un chaine :");gets(ch);
do
{

printf("donner un caractere exisitant dans la chaine:");
scanf("%c",&old);
j=0;k=0;
while((k==0)&&(j!=strlen(ch)))
      {

    if(ch[j]==old)
        k++;
        j++;
      }
}while(k==0);
do{
printf("donner un caractere non existant dans la chaine:");
scanf("%c",&nov);
j=0;k=0;
while((k==0)&&(j!=strlen(ch)))
      {
    if(ch[j]==nov)
        k++;
        j++;
      }
}while(k==1);
remplace(&ch,old,nov);
puts(ch);
}
void remplace(char *ch[],char old,char nov)
{


int i;
for(i=0;i<strlen(ch);i++)
{


    if(ch[i]==old)
       ch[i]=nov;
}
}
