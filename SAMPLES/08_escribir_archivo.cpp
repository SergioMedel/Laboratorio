#include <iostream> 
#include <fstream> 
#include <string> 
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
  string str, filenameOUT;

  filenameOUT = "archivo_salida.txt";
  //Archivo de Salida
  ofstream fileOut(filenameOUT);

	if (!fileOut.is_open()) {
		fileOut.open(filenameOUT);
	}

 
  fileOut << "yo soy un texto";
  fileOut << "" << endl;
  fileOut << "soy la segunda línea, no la tercera. y es porque 'endl' es el salto de línea" << endl;

  fileOut.close();
  
  return 0;


}