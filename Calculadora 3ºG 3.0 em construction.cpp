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
printf ("\nCalculadora 3ºG\n");
printf ("\nDigite o primeiro número\n");
scanf ("%f",&n1);
printf ("\nDigite o segundo número\n");
scanf ("%f",&n2);
printf ("\nSelecione a operação\n");
printf ("\nDigite 1 para soma\t\t\tDigite 5 para conversão de ºC para ºF\nDigite 2 para subtração\t\t\tDigite 6 para conversão de ºF para ºC\nDigite 3 para multiplicação\t\tDigite 7 para conversão de ºC para K\nDigite 4 para divisão\t\t\tDigite 8 para conversão de ºF para K\n\nDigite 9 para conversão de K para ºF\tDigite 10 para conversão de K para ºC\n");
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
printf ("\nDigite 0 para continuar ou qualquer número para parar\n");
scanf ("%d", &cont);
}

while (cont==0);
printf ("\nObrigado por usar nossa calculadora\n");

}




