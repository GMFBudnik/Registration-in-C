#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Paciente
{
  char nome [100];
  char vacina[20];
  int  lote      ;
  int  dia       ;
  int  mes   [50];
  int  ano       ;
  int  reg       ;
  int  codigo    ;
}      Paciente  ;

Paciente paciente_especial [ 10 ], 
         paciente_codigo   ,
         paciente_nome     ,
         paciente_vacina   ,
         paciente_reg      ,
         paciente_data     ,
         paciente_lote     ;

int menu     ( int );
int consultar( int );
int imprimir ( int );
int cadastrar( int );

int main()
{
  setlocale(LC_ALL,"portuguese");
  int cont = 0;
  menu( cont );
  printf("\n\n\n");
  return 0;
}

int menu( int w )
{
  int opcao;
  do
  {
    system("cls||clear");
    printf("\n-----------------MENU-------------------\n\
            \r 1 - Cadastrar         \n\
            \r 2 - Listar Aplicacoes \n\
            \r 3 - Pesquisar por CPF \n\
            \r 4 - Sair              \n\
            \r     escolha "          );
    scanf("%d%*C", &opcao);
    switch(opcao)
    {
    case 1:
      w = cadastrar( w );
      printf("\tTecle");
      getchar();
      break;
    case 2:
      imprimir( w );
      printf("\tTecle");
      getchar();
      break;
    case 3:
      consultar( w );
      printf("\tTecle");
      getchar();
      break;
    case 4:
      system("exit");
      break;
    default:
      printf("Opcao Invalida . . . !\n");
      getchar();
      getchar();
      break;
    }
  } while( opcao != 4 );
  return 4096;
}
int cadastrar( int w )
{
  printf(" Digite o código do Paciente -: ");
  scanf("%d", &paciente_especial[w].codigo);
  getchar();

  printf(" Digite o Nome Completo ------: ");
  scanf("%s", &paciente_especial[w].nome); 
  getchar();                               

  printf(" Digite o Nome da vacina -----: ");
  scanf("%s", &paciente_especial[w].vacina);
  getchar();

  printf(" Digite o CPF ----------------: ");
  scanf("%d", &paciente_especial[w].reg);  
  getchar();

  printf(" Digite a Data da Aplicação --: ");
  scanf("%d%d%d", &paciente_especial[w].dia  , 
                  &paciente_especial[w].mes  ,
                  &paciente_especial[w].ano );
  getchar();  

  printf(" Digite o Lote da Vacina -----: ");
  scanf("%d", &paciente_especial[w].lote);
  getchar();  

  w += 2 - 1;

  return w;
}
int imprimir( int w )
{
  int i;
  for( i=0; i<w; i++ )
  {
    printf
    ("\
      \n Nome -----: %s            \n\
      \r CPF ------: %d            \n\
      \r Vacina ---: %s            \n\
      \r Data -----: %d de %d de %d\n\
      \r Lote -----: %d            \n\
      \r Codigo ---: %d            \n",
      paciente_especial[i].nome      ,
      paciente_especial[i].reg       ,
      paciente_especial[i].vacina    ,
      paciente_especial[i].dia       ,
      paciente_especial[i].mes       ,
      paciente_especial[i].ano       ,
      paciente_especial[i].codigo
    );
  }
  printf("\tTecle\n");
  getchar();
}
int consultar( int w )
{
  printf("esta na Funcao consultar . . . !\n");
  return 0;
}