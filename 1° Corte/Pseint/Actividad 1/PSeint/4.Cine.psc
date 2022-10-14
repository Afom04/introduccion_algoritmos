//Enunciado
//En un cine se vendieron tres tipos de entradas: preferencial, medio y general. El éxito del cine
//se ocasionó porque se lograron vender la totalidad de las boletas de medio y general. El precio
//de la general fue un 50 % más barato que el de la media, y el precio de la de preferencial es 3
//veces mayor a las boletas de medio. Hallar la recaudación total del cine, y el porcentaje vendido
//de las boletas preferencial.
//Análisis
//Pedir valor de la boleta general, poner condición, en donde si general es <= a 0 entonces las boletas seran gratuitas y no habran mas determinaciones, sino
//medio=general*2, preferencial=medio*3, preguntar el total de boletas vendidas en general, el total en medio, y el total en preferencial 
//totalvendidas=tg+tm+tp, recaugog=tg*general,recaudom=tm*medio,recaudop=tp*preferencial,recaudototal=recaudog+recaudog
//mostrar el resultado de recaudototal, obtener porcentaje=(recaudog*100)/recaudototal, por ultimo mostrar cual sera el porcentaje.
Algoritmo boletas
	escribir"Porfavor escribir el precio de la boleta general";
	leer general;
	si general<=0 Entonces
		escribir "Las boletas son gratuitas."
	sino 
		medio<-general*2;
		preferencial<-medio*3;
		escribir "¿Cual fue el total de boletas vendidas general";
		leer total_general
		escribir "¿Cual fue el total de boletas vendidas medio";
		leer total_medio
		escribir "¿Cual fue el total de boletas vendidas preferencial";
		leer total_preferencial;
		total_vendidas<-total_general+total_medio+total_preferencial;
		recaudo_g<-total_general*general;
		recaudo_m<-total_medio*medio;
		recaudo_p<-total_preferencial*preferencial;
		recaudo_total<-recaudo_g+recaudo_m+recaudo_p;
		escribir "El recaudo total del cine fue de ",recaudo_total;
		porcentaje<-(recaudo_g*100)/recaudo_total;
		escribir "El porcentaje de boletas preferenciales vendidas es de",porcentaje;
	FinSi
FinAlgoritmo
