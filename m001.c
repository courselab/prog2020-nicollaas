/ * m001.c - o melhor de dois.
   Este programa usa três números inteiros lidos como comando 
   argumentos de linha e gera o maior dentre eles.
   Por exemplo
      linha de comando: m001 5 20 7
      produção esperada: 20
   Instruções:
      Por favor, edite a função greatest ();
      não mude a função main ().
 * /

# include  < stdio.h >
# include  < stdlib.h >

# Definir  USO  " m001 <num1> <num2> <NUM3> \ n "

/ * Retorna o maior entre a, bec. * /

int  maior ( int a, int b, int c)
{
  if (a> b && a> c) {
    retornar a;
  }
  if (b> a && b> c) {
    retorno b;
  }
  if (c> b && c> a) {
    retornar c;
  }
}

/ * Não edite esta função. * /

int  main ( int argc, char ** argv)
{
  int a, b, c;
  int g;

  if (argc < 4 )
    {
      printf (USAGE);
      saída ( 1 );
    }
  
  a = atoi (argv [ 1 ]);
  b = atoi (argv [ 2 ]);
  c = atoi (argv [ 3 ]);

  g = maior (a, b, c);
  
  printf ( " % d \ n " , g);
  
  retornar  0 ;
}
