// *Una entidad financiera está realizando un estudio de crédito para una persona. Para que el 
// crédito sea aprobado, la persona debe cumplir con los siguientes requisitos: 
// La cuota mensual del valor del préstamo no puede superar el 30 MOD  del dinero que recibe de 
// salario neto, teniendo en cuenta que el dinero que gana no es el mismo que recibe ya que tendrá 
// descuentos obligatorios por ley, del 5 MOD  del salario para pensión y del 8 MOD  para salud ,y el 1 MOD  de 
// solidaridad en caso de ganar más de 4 salarios mínimos legales vigentes. 
// El número de cuotas máximas para pagar el préstamo es de 72 meses y el mínimo de 24 meses, 
// recuerde que, para obtener la cuota se debe tener en cuenta el interés sobre el valor del 
// préstamo, el cual no puede exceder el 2 MOD  mensual (este costo lo da la entidad).
// Los créditos y gastos personales de la persona, no pueden ser superiores al 50 MOD  de su salario 
// neto. Determine si se le puede realizar el préstamo o no a la persona, en caso de que si se le 
// haga el préstamo de cuanto sería el valor de la cuota mensual a pagar teniendo en cuenta 
// intereses, por cuantos meses tendría la deuda y cuanto termina pagando por concepto de 
// intereses, y en total por el préstamo.
// Nota: no olvide que debe realizar el análisis y el algoritmo que resuelve correctamente el 
// problema
Algoritmo Credito
	Definir salario,meses,gastos,intereses,prestamo,cuota Como Real
	Escribir 'Ingrese el salario'
	Leer salario
	cuota <- trunc(cuota)
	prestamo <- trunc(prestamo)
	salario <- trunc(salario)
	meses <- trunc(meses)
	gastos <- trunc(gastos)
	// se truncan las variables para quitar la parte fraccionaria del número, donde se redondea los números al 
	//entero más cercano basado en el valor de la parte fraccionaria del número.
	Si salario<1000000 Entonces
		Escribir 'No puede pedir el prestamo'
		//si la persona gana menos de 1000000 no puede solicitar el prestamo ya que debe ganar al menos un salario minimo
	SiNo
		Si salario>=1000000 Y salario<4000000 Entonces
			Escribir 'su salario es mas que un salario minimo'
		SiNo
            si salario  >= 1000000 y salario <4000000   entonces
				Escribir "Si es un salario minimo y por ley recibira descuentos en su salario, con un descuento de solidaridad 0";
				descuentoSo=0;
			SiNo
				si salario>= 4000000 Entonces
		        Escribir "Por ley recibira descuentos en su salario, mas un descuento por solidaridad";
				descuentoSO<-salario*0.01;
				// si su salario es menor a 4000000 no se le aplica el decuento de solidaridad por lo tanto este seria 0 
				// ya que nos dice el ejercicio que el descuento de solidaridad se aplica si la persona gana mas 
				//de 4 salarios minimos por lo que se hace la multiplicacion por 0.01 para sacar el 1% del valor del descuento
				fin si
			FinSi
		FinSi
			
		descuentoP<-salario*0.05;
		// se multiplica por 0.05 para sacar el 5% del descuento de pension 
		descuentoS<-salario*0.08;
		//se multiplica por 0.08 para sacar el 8% del descuento para salud 
		descuento_total<-descuentoP+descuentoS+descuentoSO;
		//se suman todos los descuentos anteriores para saber cual seria el descuento total 
			Escribir 'Su descuento por pension es $',descuentoP,' Su descuento por Salud es $',descuentoS,' su descuento por solidaridad es $ ", descuentoSo;
			Escribir 'Ingrese el valor del prestamo'
			Leer prestamo
		salariototal=salario-descuento_total;
			// para obtener el salario total se resta el salrio con los descuentos aplicados 
			Si prestamo<=0 o prestamo>salariototal*0.3 Entonces
				Escribir 'Error';
				// si la persona gana mas de 1000000 (salario minimo) si puede solicitar el prestamo.
			SiNo
				Si prestamo>=1 Entonces
					Escribir '¿a cuantos meses quiere diferir la cuota ?';
					meses <- trunc(meses)
					Leer meses
					//se solicita el numero de meses a diferrir la cuota para sacar el interes mensual y se trunca el valor
					// para si es el caso quitar la parte fraccionaria del número.
					Si meses<=0 O meses<24 O meses>72 O  NO (meses)=trunc(meses) Entonces
						Escribir 'No se puede defirir a esa cantidad de meses';
						// meses<=0 se pone ya que si meses es menor a 0,no exitiriam cuotas 
						// y se pone meses<24 O meses>72 ya que 24 es el minimo meses para diferir las coutas y 72 el maximo 
					SiNo
						Si meses>=24 O meses<=72 Entonces
							Escribir 'escriba porcentaje del interes mensual asignado por la entidad, recuerde que no puede ser superior a 2%';
							leer interes;
							Si interes<=0 O interes>2 O  NO (interes)=trunc(interes) Entonces
								Escribir 'interses no validos';
								/ meses>=24 O meses<=72 a que 24 es el minimo meses para diferir las coutas y 72 el maximo 
								// se solicita el interes mensual asignado por la entidad que no puede ser superior a 2% mensual
								// de lo contrario no se podria operar y manda al ususairo a error
							SiNo
								Si interes>=1 O interes<=2 Entonces
									Escribir 'escriba el valor de sus gastos personales y creditos activos en total'
									gastos <- trunc(gastos)
									Leer gastos;
									Si gastos>=salario*0.5 O gastos<=0 O  NO (gastos)=trunc(gastos) Entonces
										Escribir 'No puede superar el 50 porciento de su salario o ser un numero negativo'
									// se opera con el fin de saber si se puede realizar el prestamo ya que los 
									//gastos personales y credito de la persona no pueden exceder el 50% de su salario
									SiNo
										gastos <- trunc(gastos)
										Si gastos<=salario*0.5 Entonces
											cuota <- prestamo/meses;
											cuota <- trunc(cuota);
										// para saber la couta dividimos el prestamo por el numero de meses y se trunca el valor 
										// para quitar la fraccion del numero si es el caso 
											inm=(cuota*interes)/100;
										//se multiplica la cuota por los intereses y se divide entre 100 para poder 
										//sacar el valor del interes mensual
											int=inm*meses;
										//multiplicamos el interes mensual por el numero de meses para obtener el interes total 
											cuotamensual=cuota+inm;
											cuotamensual<-trunc(cuotamensual);
										//se suma la cuota por el interes mensual para obtener cuanto debe pagar por cada couta mensualmente 
										// y se trunca el valor para quitar la fraccion del numero si es el caso 
											prestamototal=prestamo+int;
											prestamototal<-trunc(prestamototal)
										// para sacar finalmente de cuento fue el prestamo total con intereses, sumamos el prestamo que le hicieron
										// por los intereses totales y se trunca el valor para quitar la fraccion del numero si es el caso 
											Escribir 'Su valor de cuota mensual seria de $',cuotamensual;
											Escribir 'su prestamo total es $',prestamototal;
											Escribir 'su cantidad de meses seria es ',meses;
											//por ultimo se muestran las cantidades correspondientes al valor de la couta a pagar mesualmente, 
											//el prestamo total y el numero de meses 
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		
	FinSi
FinAlgoritmo
