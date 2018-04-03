#importar la herramienta de tiempo
import time

#funcion fibonacci recursiva
def fibonacci(N):
    #determinar cuando se termina y que retorna
    if(N==0):
        return 0
    elif(N==1):
        return 1
    else:
        return fibonacci(N-1)+ fibonacci(N-2)
# calcular el tiempo
def get_time(N):
    #tiempo actual
    to = time.time()
    fibonacci(N)
    #tiempo despues de hacer fibonacci
    t1 = time.time()-to
    return t1
#recorrido de numeros de 0 a 34 que son 35 numeros
for i in range(0,35):
    tiempo = get_time(i)
    print i,",",tiempo

    
