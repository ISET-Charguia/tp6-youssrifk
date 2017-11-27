//-----------exercice1-----------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void conj(char ch[]);

void main()
{
    char verb[100];
    char mot[100];
   printf("donner une chaine:");
   gets(verb);
   conj(verb);
   printf("donner un mot ");
   gets(mot);
}
void conj(char VERB[])
{
int j;
char ch2[100];
 j=strlen(VERB);
 if ((VERB[j-2]!='e') || (VERB[j-1]!='r'))
      puts("\aCe n'est pas un verbe du premier groupe.!");
 else
     {

      VERB[j-2]='\0';

      ch2[0]='\0';
      strcat(ch2, "je ");
      strcat(ch2, VERB);
      strcat(ch2, "e");
      puts(ch2);
        ch2[0]='\0';
      strcat(ch2, "tu ");
      strcat(ch2, VERB);
      strcat(ch2, "es");
      puts(ch2);
       ch2[0]='\0';
      strcat(ch2, "il ");
      strcat(ch2, VERB);
      strcat(ch2, "e");
      puts(ch2);
       ch2[0]='\0';
      strcat(ch2, "nous ");
      strcat(ch2, VERB);
      strcat(ch2, "ons");
      puts(ch2);
       ch2[0]='\0';
      strcat(ch2, "vous ");
      strcat(ch2, VERB);
      strcat(ch2, "ez");
      puts(ch2);
      ch2[0]='\0';
      strcat(ch2, "ils ");
      strcat(ch2, VERB);
      strcat(ch2, "ent");
      puts(ch2);
     }
}


