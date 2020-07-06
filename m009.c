/* m009.c - Sort vector.

   This program reads N<=100 numbers passed as command line
   arguments and ouputs them in ascending order. Choose the
   sorting algorithm of your preference (see bellow).

   E.g.

      command line    : m009 3 2 5 4 2
      expected output : 2 2 3 4 5

   Directions:

      Please, edit function sort();
      do no not edit function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int vecLen(int *vec)
{
  int c = -1;
  while(*(vec++))
    c++;
  return c;
}

/* Sort the first 'n' integers values in 'vector'. */

void sort (int* vector, int n)
{
  if (n < 1){
    return;
  }
  int cont = 0;
  int i=0; 
  int ii = 0;
  int v = MAX;
  int tam = vecLen(vector); 
  int newVec[tam+1];

  if (tam != 1)
  {
    while(i != tam-2)
    {
      if (v != MAX)
      {
        v=MAX;
      }
      for(ii=0; ii<tam-1; ii++)
      {
        if(v >=vector[ii] )
        {
          v = vector[ii]; 
        }
      }
      for(ii=0; ii<tam-1; ii++)
      { 
        if(v ==vector[ii] && cont !=1)
        {
          vector[ii]=101;
          cont=1;
        }
      } 
      cont = 0; 
      newVec[i]=v; 
      i++;
    }
    for(i=0; i<tam-1; i++)
    {
      vector [i]=0;
      vector [i] = newVec[i];
    }
  }
}


#define USAGE "m009 <num1> <nun2> ... \n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int values[MAX];
  int i;

  /* Read command line arguments into vector. */
  
  for (i=1; i<argc; i++)
    values[i-1] = atoi(argv[i]);


  /* Sort vector. */
  
  sort (values, argc-1);


  /* Output sorted vector. */
  
  for (i=0; i<argc-1; i++)
    printf ("%d ", values[i]);

  printf ("\n");
  
  return 0;
}

/* Tip: check these sorting methods

   Selection sort: https://en.wikipedia.org/wiki/Selection_sort
   Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
   Insertion sort: https://en.wikipedia.org/wiki/Insertion_sort
  
 */
