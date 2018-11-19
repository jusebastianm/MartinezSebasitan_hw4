Resultados_hw4.pdf : proyectil_1.png proyectil_2.png Resultados_hw4.tex
	pdflatex Resultados_hw4.tex

proyectil_1.png proyectil_2.png: proyectil.txt proyectil_2.txt Plots_hw4.py
	python Plots_hw4.py

proyectil.txt proyectil_2.txt: ODE.cpp
	g++ ODE.cpp -o data_ode.out
	./data_ode.out

