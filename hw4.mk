resultados.pdf : plot.pdf plot1.pdf resultados.tex
	pdflatex resultados.tex

plot.pdf: datos.dat plotdatos.py
	python plotdatos.py

plot1.pdf: datos1.dat plotdatos1.py
	python plotdatos1.py

datos.dat: makedatos.py
	python makedatos.py >> datos.dat

datos1.dat: makedatos1.cpp
	g++ makedatos1.cpp
	./a.out>>datos1.dat

