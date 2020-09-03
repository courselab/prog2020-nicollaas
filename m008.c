/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s)
{
  int i,posUltEsp, tamVec, a1=0, a2=0;
  char vecAux[256];
  strcpy(vecAux,s);
  tamVec=strlen(vecAux)-1;
  
  for(i=tamVec;vecAux[i]!=32;i--)
  {
  } 
  posUltEsp=i+1;
  i=0;
 
  for(i=posUltEsp;i!=tamVec;i++)
  {
    s[a1]=vecAux[i];
    a1++;
  } 
  for(i=0;i<=a1-1;i++)
  {
  	if(s[i]>='a' && s[i]<='z')
  	{
  		s[i]=s[i]-32;
  		
	  }
  }
  s[a1]=',';
  a1++;
  s[a1]=32;
  a1++;
  i=0;
  for(i=a1;i!=tamVec+1;i++)
  {
  	s[i]=vecAux[a2];
  	a2++;
  }
  i=0;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
