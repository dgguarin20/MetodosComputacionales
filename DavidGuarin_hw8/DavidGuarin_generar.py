import numpy as np
#la funcion de sample 1
def sample_1(N):
    #Se crea un array que defina los valores que se deben generar
    a = [-10,-5,3,9]
    #con los numeros de a y probabilidad exactamente
    x = np.random.choice(a,N,p=[0.1,0.4,0.2,0.3])
    return x

def sample_2(N):
    #random de un exponencial de b 0.5
    x = np.random.exponential(0.5,N)
    return x

def get_mean(sampling_fun,N,M):
    #se crea el retornable donde se va invicando cada sample que debe y
    #retorna un m de eso
    result = []
    for i in range(0,M):
        r = sampling_fun(N)
        result.append(np.mean(r))
        
    result = np.asarray(result)
    return result

M = 10000
N =[10,100,1000]

#aqui lo que hize que generarar en un ciclo los archivos de sample
for i in range(0,len(N)):
    m = "sample_1_%d.txt" %N[i]
    valor = get_mean(sample_1,N[i],M)
    np.savetxt(m,valor,delimiter=',')
    m = "sample_2_%d.txt" %N[i]   
    valor = get_mean(sample_2,N[i],M)
    np.savetxt(m,valor,delimiter=',')   
