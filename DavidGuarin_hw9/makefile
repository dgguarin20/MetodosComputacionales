cpp_vs_python.png: times_cpp.csv times_python.csv
	python DavidGuarin_Graficas.py

gen_times.x: 
	c++ DavidGuarin_GenerarTiempos.cpp -o gen_times.x

times_cpp.csv: gen_times.x
	./gen_times.x > times_cpp.csv

times_python.csv:
	python DavidGuarin_GenerarTiempos.py > times_python.csv

