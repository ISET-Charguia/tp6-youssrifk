//-----------exercice5-------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nbo(char ch[],char ch2[]);
int main()
{
    char ch[10],ch2[10];
    printf("donner une chaine :");
    scanf("%s",ch);
    printf("donner un chaine ch2:");
    scanf("%s",ch2);
    printf("nb occ de %s dans %s est %d",ch2,ch,nbo(ch,ch2));
    return 0;
}

int nbo(char ch[],char ch2[])
{
int i,j,k,x,nb,z;
 nb=0;
z=strlen(ch2);

for(i=0;i<strlen(ch);i++)
{
if(ch[i]==ch2[0])
{
k=1;
x=1;
j=i+1;
    while((k!=z)&&(x==1))
    {
      if(ch2[k]==ch[j])
            x=1;
      else
        x=0;
        k++;
        j++;
    }

}
if(x==1)
    nb++;
}

return nb;
}
