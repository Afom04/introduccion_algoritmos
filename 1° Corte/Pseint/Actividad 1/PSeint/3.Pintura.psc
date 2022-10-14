//Enunciado
//Si para pintar 1 metro cuadrado de pared se requiere 3.5 mlts de pintura, y Roberto quiere
//pintar una pared de t*y dimensión, cuanta pintura debe comprar teniendo en cuenta que lo
//mínimo que le venden es 5 mlts, y cuánto dinero debe pagar si los 5 mlts cuestan $10000.
//Análisis
//Definir las variables como reales
//Pedir valores de t, y, luego obtener el area=t*y
//Condicional de opción si el area es 1, definir galones como 1 y pago como 1, sino definir galones como area*5 y pago como galones*10000
//Mostrar los galones y el pago al que se llego.
Algoritmo pintura
	definir x,y_1,area,galones,pago Como Real
	escribir "porfavor escribir los valores de t y y";
	leer x , y_1;
	area<-x*y_1;
	si area=1 Entonces
		galones<-1;
		pago<-10000;
	SiNo
		galones<-area*5;
		pago<-10000*galones;
		escribir "en total se utilizaron ",galones," galones y se tuvo que pagar ",pago ;
	FinSi
	
	
FinAlgoritmo
