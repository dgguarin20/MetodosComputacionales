import numpy as np
from scipy.optimize import curve_fit
import matplotlib.pyplot as plt

def normal_dist(x, mean, sigma):
    x = np.random.normal(mean,sigma,x)
    return x

def get_fit(filename):
    a = np.loadtxt(filename)
    freq,bins = np.histogram(a)
    x = 0.5*(bins[:-1]+bins[1:])
    y = freq
    popt, pcov = curve_fit(normal_dist,x,y)
    print filename
    print " ", popt
    plt.hist(x)
    m = filename + ".png"
    plt.savefig(m)
    plt.close()
    
N = [10,100,1000]

for i in range(0,len(N)):
    
    m = "sample_1_%d.txt" %N[i]
    get_fit(m)
    m2 = "sample_2_%d.txt" %N[i]
    get_fit(m2)
       
