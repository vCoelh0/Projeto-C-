#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"");
float soma, sub, div, mult, n1, n2, op;
int cont;
do
{
system("CLS");
printf ("\nCalculadora 3�G\n");
printf ("\nDigite o primeiro n�mero\n");
scanf ("%f",&n1);
printf ("\nDigite o segundo n�mero\n");
scanf ("%f",&n2);
printf ("\nSelecione a opera��o\n");
printf ("\nDigite 1 para soma\t\t\tDigite 5 para convers�o de �C para �F\nDigite 2 para subtra��o\t\t\tDigite 6 para convers�o de �F para �C\nDigite 3 para multiplica��o\t\tDigite 7 para convers�o de �C para K\nDigite 4 para divis�o\t\t\tDigite 8 para convers�o de �F para K\n\nDigite 9 para convers�o de K para �F\tDigite 10 para convers�o de K para �C\n");
scanf ("%f",&op);

if (op==1)
{
printf ("\n%.2f", n1+n2);
}
if (op==2)
{
printf ("\n%.2f", n1-n2);
}
if (op==3)
{
printf ("\n%.2f", n1*n2);
}
if (op==4)
{
printf ("\n%.2f", n1/n2);
}
printf ("\nDigite 0 para continuar ou qualquer n�mero para parar\n");
scanf ("%d", &cont);
}

while (cont==0);
printf ("\nObrigado por usar nossa calculadora\n");

}




