/*Realice un progranma que determine por cada piso de un centro comercial de 3 pisos, el total de dinero recolectado por ventas de cada uno de los locales por piso
tambien mostrar el total de  dinero recolectado en todo el centro comercial, con funciones*/
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

//Variables Globales que se usaran durante el codigo
int ventas_piso_1, ventas_piso_2, ventas_piso_3;
int minimo_ventas = 100000;
int minimo_de_locales = 1;


//Validaciones con funciones booleanas, esta para calcular el minimo de ventas o la cuota minima de $100-000 pesos por local
bool
ValidarVentas (int venta)
{
  if (venta >= minimo_ventas)
    {
      return true;
    }
  else
    {
      return false;
    }
}


//Funcion de validar locales, para que el minimo de locales por piso sea 1 o mas
//Al escribir un numero por debajo de 1 o negativo, el false se ejecuta y realiza un return nuevamente a la funcion para tener la misma funcionalidad que un DO While
int validarLocales (int piso)
{
  int input;
  cout << "Ingrese el numero total de locales en el piso " << piso << ":\n";
  cin >> input;
  //Validando que input cumpla con los criterios de busqueda
  if (input >= minimo_de_locales && input<50)
    {
      return input;
    }
  else
    {
      cout << "El numero ingresado para el piso " << piso <<
	" no es coherente\n";
      return validarLocales (piso);
    }
}

//Se realiza el ciclo, donde al tener false en la variable, regrese el dato para ser nuevamente ejecutado, en este caso con la funcion bool ya antes mencionada
//La variable se repite nuvamente simulando un ciclo DO While
int
SumarVentas (int total_ventas, int venta)
{
  if (ValidarVentas (venta && venta<20000000))
    {
      cout << "Sumando ventas\n";
      return total_ventas + venta;
    }
  else
    {
      cout <<
	"Las ventas registradas por el local, no cumplen con el minimo de ventas o son exageradas\n";
      return total_ventas;
    }
}

//Se realiza el respectivo contador de cada local por piso, donde si o si, debe contener 1 local y la cantidad maxima sera la que sea proporcionada por el usuario
//El contador registra el total de ventas por local
int
SumarVentasPorPiso (int piso, int cantidad_locales)
{
  int venta;
  int total_ventas_por_piso = 0;
  for (int local = 1; local <= cantidad_locales; local++)
    {
      int ventas_totales_previas = total_ventas_por_piso;
      cout << "Ingrese las ventas registradas por el local n#0" << local <<
	" del piso " << piso << ":\n";
      cin >> venta;
      total_ventas_por_piso = SumarVentas (total_ventas_por_piso, venta);
      if (ventas_totales_previas == total_ventas_por_piso) 	local--; 
    }
	return total_ventas_por_piso;
}
//Se realiza la respectiva operacion, para calcular el total de ventas obtenidas por el centro comercial
int
SumarTotalVentas ()
{
  return ventas_piso_1 + ventas_piso_2 + ventas_piso_3;
}
//Se imprime el mostrar final del codigo, donde X sera la variable a reemplazar por la annterior operacion
void mostrarSuma(int x)
{
	cout<<"El total vendido en el centro comercial es: "<<x;
}



//Se hace un llamado a todas las funciones y asi generar el codigo y la solucion del problema.
int
main ()
{

  int locales_piso_1 = validarLocales (1);
  int locales_piso_2 = validarLocales (2);
  int locales_piso_3 = validarLocales (3);
  ventas_piso_1 = SumarVentasPorPiso (1, locales_piso_1);
  ventas_piso_2 = SumarVentasPorPiso (2, locales_piso_2);
  ventas_piso_3 = SumarVentasPorPiso (3, locales_piso_3);
  int total_ventas = SumarTotalVentas ();

  mostrarSuma(total_ventas);
  
  getch();
  return 0;
}
