//Enunciado
//Rosa el mes pasado pago de agua w valor, este mes pago el doble de lo que pago el mes
//pasado. Se sabe que el valor del metro cubico es Y valor. ¿Cuántos metros cúbicos consumió el
//mes pasado y cuanto aumento de consumo este mes?
//Análisis
//Pedir valor del recibo pagado
//Condicional si el valor es 0, sino pedir el valor de metro cubico y Definir 
//metroscubicos=valorpasado/y, metroscubicos2=w/y, diferencia de consumo=metroscubicos2-metroscubicos
//Mostrar consumo del mes pasado y el aumento del mes.
Algoritmo recibo_agua
	escribir "porfavor digite el valor pagado de agua por rosa"
	leer w
	si w<=0 Entonces
		Escribir "No hay valor pagado";
	SiNo
		valor_pasado<-w/2
		escribir "escriba el valor del metro cubico"
		leer y_1
		metros_cubicos<-valor_pasado/y_1
		metros_cubicos2<-w/y_1
		diferencia<-metros_cubicos2-metros_cubicos
		escribir "el mes pasado rosa consumió ",metros_cubicos," m^3"
		escribir "el consumo este mes aumento ",diferencia," m^3"
	FinSi
FinAlgoritmo
