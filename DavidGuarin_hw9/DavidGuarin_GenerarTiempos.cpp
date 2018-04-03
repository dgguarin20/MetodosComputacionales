//importaciones
#include <ctime>
#include <iostream>
using namespace std;

float get_time(int N);
int fibonacci(int N);
//main
int main()
{
  //ciclo de ver numeros fibonacci y los imprime
  for (int i = 0; i<35; i=i+1)
    {
      float tiempo;
      tiempo = get_time(i);
      cout << i;
      cout << ", ";
      cout << tiempo;
      //siguiente linea
      cout << " \n";
    }
  return 0;

}

//calcula el tiempo
float get_time(int N)
{
  clock_t t;
  t = clock();
  fibonacci(N);
  //compara tiempos
  t = clock() - t;
  //por los tics del computador
  float time = ((float)t)/CLOCKS_PER_SEC;
  return time;
}
//fibonacci recursivo
int fibonacci(int N)
{
  //importante los if y else para determinar cuando termina
  if(N == 0)
    {
      return 0;
    }
  else if (N==1)
    {
      return 1;
    }
  
  else
    {
 
	return fibonacci(N-1) + fibonacci(N-2);
      }

}
