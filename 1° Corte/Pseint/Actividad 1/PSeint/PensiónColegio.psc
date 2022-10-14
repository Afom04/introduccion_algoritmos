//Enunciado
//Sandra desea pagar la pensión del colegiuo de su hijo, para ello tendra en cuenta lo siguiente, a ella le corresponde pagar la mitad de la
//pensión y al papá la otra mitad, el colegio decide darle un descuento de acuerdo a la edad de Sandra. Ella decide tomar el descuento sin 
//decirle nada al papá. Determine cuanto dinero termina pagando Sandra por la pensión de su hijo y cuanto le corresponde al papá.
//Análisis
//Definir variables como valores reales, pedir valor de la pension y edad de Sandra
//Condicional, si la edad de sandra es >= a 50 entonces el valor que tendra que pagar sera 0 y al padre la mitad de la pensión, SiNo
//el padre pagara la mitad de la pension y el valor que sandra ha de pagar sera valordescuento=(valorpension*edadsandra)/100, 
//valorsandra=valorpapá-valordescuento.
//Mostrar el valor que ha de pagar sandra y el que ha de pagar el papá.
Algoritmo PensiónColegio
	definir val_pension, edad_sandra, val_descuento,val_sandra,val_papa Como Real;
	Escribir "Por favor ingrese el valor de la pensión";
	Leer val_pension;
	Escribir "Por favor ingrese la edad de Sandra ";
	Leer edad_sandra;
	
	si edad_sandra>=50 Entonces
		val_sandra=0
		val_papa=val_pension/2;
	SiNo
		val_papa=val_pension/2;
		val_descuento=(val_pension*edad_sandra)/100;
		val_sandra=val_papa-val_descuento;
	FinSi
	
	Escribir "El papá pagará $", val_papa;
	Escribir "Sandra pagará $", val_sandra;
	
FinAlgoritmo
