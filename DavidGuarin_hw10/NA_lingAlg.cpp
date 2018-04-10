#include <ctime>
#include <iostream>
using namespace std;


double** matrix_product(double **a, double**b, int na, int mb, int s);
void imprimir(double **c, int n, int m);
int main()
{
  cout << "inserte las dimensiones de la primera matriz \n";
  cout << "primero es el numero de filas para la primera matriz despues enter\n";
  int Na;
  cin >> Na;
  cout << "ahora la dimension de columnas para la primera matriz \n";
  int Ma;
  cin >> Ma;
  cout << "ahora el numero de filas para la segunda matriz \n";
  int Nb;
  cin >> Nb;
  cout << "por ultimo el numero de columnas para la segunda matriz \n";
  int Mb;
  cin >> Mb;
  //chequea si conquerdan los tamaños
  if(Ma!= Nb)
    {
      cout << "ERROR ";
      cout << "deben coincidir las dimensiones";
      return 0;
    }

  //matriz
  double **a = new double*[Na];
  double **b = new double*[Nb];
  int i;
  for (i=0; i<Na; i++)
    {
       a[i]= new double[Ma];
    }
  for (i=0; i<Nb; i++)
    {
      b[i]= new double[Mb];
    }
  cout << "valor para matriz a \n";
  //agregar los valores para la matriz a
  int j;
  int valor;
  for (i=0; i<Na; i++)
    {
      for (j = 0; j<Ma; j++)
	{
	  cout << "inserte el valor, de la fila:  ";
	  cout << i;
	  cout << " con columna: ";
	  cout << j;
	  cout << "\n";
	  cin >> valor;
	  a[i][j]= valor;
	}
    }
  cout << "su matriz para matriz a es : \n";
  imprimir(a, Na,Ma);
  
  //agregar valor matriz b
  cout << "ahora para matriz b \n";
  for (i=0; i<Nb; i++)
    {
      for (j = 0; j<Mb; j++)
	{
	  cout << "inserte el valor, de la fila:  ";
	  cout << i;
	  cout << " con columna: ";
	  cout << j;
	  cout << "\n";
	  cin >> valor;
	  b[i][j]= valor;
	}
    }
  cout << "su matriz para matriz b es : \n";
  imprimir(b, Nb,Mb);
  
  double **resultado;
  resultado = matrix_product(a, b, Na, Mb, Nb);
  cout << "el resultado de la multiplicacion es \n";
  imprimir(resultado, Na, Mb);
  return 0;
  
}

double** matrix_product(double **a, double**b, int na, int mb, int s)
{
  //inicializar resultado
 double **result = new double*[na];
  int i;
  for (i=0; i<na; i++)
    {
       result[i]= new double[mb];
    } 

  
  int j;
  int k;

  //calculo
  for (k = 0; k<mb; k++)
    {
      for(i = 0; i<na; i++)
	{
	  double v = 0;
	  for (j=0; j<s; j++)
	    {
	      //va en funcion i el a pero b depende de k por las columnas
	      v = v + a[i][j]*b[j][k];

	    }
	  result[i][k]=v;

	}
    }
  return result;
}

void imprimir(double **c, int n, int m)
{
  //para imprimir recorre toda la matriz
  int i;
  int j;
  for(i=0; i<n;i++)
    {
      for (j=0; j<m; j++)
	{
	  cout << c[i][j];
	  cout << " ";
	}
      cout << "\n";
    }

}

