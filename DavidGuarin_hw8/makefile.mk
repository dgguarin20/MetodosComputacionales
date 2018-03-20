a.pdf: DavidGuarin_analizar.py DavidGuarin_generar.py

DavidGuarin_generar.py: sample_1_10.txt sample_1_100.txt sample_1_1000.txt sample_2_10.txt sample_2_100.txt sample_1_1000.txt
	python DavidGuarin_generar.py

DavidGuarin_analizar.py: sample_1_10.png sample_1_100.png sample_2_1000.png sample_2_10.png sample_2_100.png sample_1_1000.png
	python DavidGuarin_analizar.py

rm sample_1_10.png sample_1_100.png sample_2_1000.png sample_2_10.png sample_2_100.png sample_1_1000.png

rm sample_1_10.txt sample_1_100.txt sample_1_1000.txt sample_2_10.txt sample_2_100.txt sample_1_1000.txt
