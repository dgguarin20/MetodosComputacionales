
import numpy as np
from matplotlib import pyplot as plt


def cargarGrafica():
    datos = np.loadtxt("times_python.csv", delimiter = ",")
    datos2 = np.loadtxt("times_cpp.csv", delimiter = " , ")

    x1 = datos[:,0]
    y1 = datos[:,1]

    x2 = datos2[:,0]
    y2 = datos2[:,1]

    plt.plot(x1,y1)
    plt.plot(x2,y2)
    plt.savefig("cpp_vs_python.png")


cargarGrafica()
    
