// Enunciado
//Sandra va a comprar una camisa que le cuesta x valor, un pantalon que le costò el doble del valor de la camisa, una chaqueta que le costò
//4 veces màs que el valor del pantalòn, como el almacèn estaba en promociones le hizo un descuento del 20% sobre el valor de la compra.
//Sandra paga la tercera parte de este valor, su papà le regala la tercera parte del valor restante y su mamà la faltante. Determine cuanto 
//debe pagar cada uno de ellos, y cuanto costo la compra total y el valor del descuento realizado.
//Análisis 
//Definir variables como reales
//Pedir valor de la camisa, condicion no puede ser un nùmero negativo o cero
//Pantalòn=2x y de la chaqueta=4pantalòn, sumar todos los valores (valor_t) y multiplicar por 0.2 para obtener el descuento, luego restar el descuento con el valor para obtener el total
//sacar la tercera parte del total llamar partesandra, restar esto a total llamar partepadres, sacar la tercera parte de la partepadres y llamar partepapa
//restar partepapa con partepadres y llamar partemama, mostrar todos los resultados
Algoritmo Sandracompras
	definir camisa como real;
	escribir "bienvenido a nuestra tienda:D";
	escribir "porfavor escriba el valor de la camisa comprada";
	leer camisa;
	Si camisa<=0 entonces 
		Escribir "El valor total de la compra es gratituita";
	sino 
		pantalon<-2*camisa;
		chaqueta<-4*pantalon;
		valor_t<-pantalon+chaqueta;
		descuento<-valor_t*0.2;
		total<-valor_t-descuento;
	FinSi
	escribir "la compra costo en total ",total," y la compra tuvo un descuento de ",descuento;
	parteSandra<-total/3;
	partePadres<-total-parteSandra
	partePapa<-partePadres/3
	parteMadre<-total-(partePadres-partePapa)
	escribir "sandra tiene que pagar ", parteSandra," por la compra"
	escribir "el papa de sandra tiene que pagar ", partePapa," por la compra"
	escribir " la madre de sandra tiene que pagar ", parteMadre," por la compra"
FinAlgoritmo
