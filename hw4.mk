Resultados_hw4.pdf : Resultados_hw4.tex
	pdflatex Resultados_hw4.tex

imagenes: Plots_hw4.py
	python Plots_hw4.py


proyectil.dat and :
datos_PDE.dat: PDE.cpp
	g++ PDE.cpp -o data_pde.out
	./data_pde.out>>datos_PDE.dat

datos_ODE.dat: ODE.cpp
	g++ ODE.cpp -o data_ode.out
	./data_ode.out>>datos_ODE.dat

