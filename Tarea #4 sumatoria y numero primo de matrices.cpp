#include <iostream>
 
using namespace std;

int main()
{
	//********variables**********
	int filas;
    int columnas;
    int matriz[100][100];
    int sumatoria = 0;
    bool esPrimo = true;
    //********************
    
    
	cout<<"Bienvenidos este el mi ´programa para calcular la sumatoria de una matriz y el calculo de un numero primo \n";
	cout<<"Ingrese la cantidad de filas \n";
	cin>>filas;
	cout<<"Ingrese la cantidad de columnas \n";
	cin>>columnas;
	
	
	//*********captura la matriz*****
	for (int i = 0; i < filas; i++)
        {
            for (int a = 0; a < columnas; a++)
                {
                    cout << "ingresa el valor de la columna "<<i<<" y la fila "<<a<<"\n";
                    cin >> matriz[i][a]; 
                }
        }
    system("cls");
    //*******************
    //*****************sumar la matriz
     
    for (int i = 0; i < filas; i++) 
    {
        for (int a = 0; a < columnas; a++) 
        {
          sumatoria = sumatoria + matriz[i][a];
        }
    }
    //**********************
    //**********validar si sumatoria es primo*
     
    for (int i = 2; i < sumatoria; i++)
        {
            if (sumatoria % i == 0)
            {
                esPrimo = false;
            }
        }
    
    //*********************
    //******imprime la matriz solo si la sumatoria es primo
    if(esPrimo)
    {
        cout<<"\n esta es la matriz \n";
        for (int i = 0; i < filas; i++) 
        {
          for (int a = 0; a < columnas; a++) 
          {
            cout << matriz[i][a];
          }
          cout << "\n";
        }
    }
    //*******imprimo la sumatoria
    
    cout << "sumatoria: "<<sumatoria;
    
  //**************
	return 0;
}
