Algoritmo CP1_TB_E1
	Escribir "Inserte los a�os trabajando"
	Leer a�os
	Escribir "Inserte sueldo en soles"
	Leer sueldo
	Si a�os <= 3 Entonces
		bono <- sueldo + (sueldo * 0.04)
	SiNo
		Si a�os > 3 y a�os <= 5 Entonces
			bono <- sueldo + (sueldo * 0.06)
		SiNo
			Si a�os > 5 y a�os <= 10 Entonces
				bono <- sueldo + (sueldo * 0.1)
			SiNo
				Si a�os < 10 Entonces
					bono <- sueldo + (sueldo * 0.15)
				SiNo
					Escribir "ERROR"
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	Escribir bono
FinAlgoritmo
