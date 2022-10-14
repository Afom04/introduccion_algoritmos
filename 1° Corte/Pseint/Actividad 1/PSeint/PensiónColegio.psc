//Enunciado
//Sandra desea pagar la pensi�n del colegiuo de su hijo, para ello tendra en cuenta lo siguiente, a ella le corresponde pagar la mitad de la
//pensi�n y al pap� la otra mitad, el colegio decide darle un descuento de acuerdo a la edad de Sandra. Ella decide tomar el descuento sin 
//decirle nada al pap�. Determine cuanto dinero termina pagando Sandra por la pensi�n de su hijo y cuanto le corresponde al pap�.
//An�lisis
//Definir variables como valores reales, pedir valor de la pension y edad de Sandra
//Condicional, si la edad de sandra es >= a 50 entonces el valor que tendra que pagar sera 0 y al padre la mitad de la pensi�n, SiNo
//el padre pagara la mitad de la pension y el valor que sandra ha de pagar sera valordescuento=(valorpension*edadsandra)/100, 
//valorsandra=valorpap�-valordescuento.
//Mostrar el valor que ha de pagar sandra y el que ha de pagar el pap�.
Algoritmo Pensi�nColegio
	definir val_pension, edad_sandra, val_descuento,val_sandra,val_papa Como Real;
	Escribir "Por favor ingrese el valor de la pensi�n";
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
	
	Escribir "El pap� pagar� $", val_papa;
	Escribir "Sandra pagar� $", val_sandra;
	
FinAlgoritmo
