#include <iostream> 
#include <fstream> 
#include <string> 
#include <map>
#include <set>
#include <vector>
#include <unistd.h>

using namespace std;

vector<int> prueba(int** matriz,vector<int> listaEnteros,int sizem){
  for(int i=0; i < sizem; i = i+1){
    for(int j=0; j < sizem; j++){
      listaEnteros.push_back(matriz[i][j]);
    }
  }
  return listaEnteros;
}

void mostrarContenidoVector(vector<int> listaEnteros){
  for(int i = 0; i < listaEnteros.size(); i++){
    cout << listaEnteros[i] << " ";
  }
  cout << endl;
}

int main() {
  //acá tendré 3 punteros de punteros de entero (ya reservado)
  int **matrix = new int *[3];
  matrix[0] = new int [3] {1,2,3};
  matrix[1] = new int [3] {4,5,6};
  matrix[2] = new int [3] {7,8,9};
  int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  
  vector<int> primero, segundo;
  primero.push_back(0);
  segundo = prueba(matrix, primero, 3);

  mostrarContenidoVector(primero);
  mostrarContenidoVector(segundo);
  
}