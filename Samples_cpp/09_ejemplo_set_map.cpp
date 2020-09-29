#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
  set<int> elSet;
  map<string, int> guiaTelefonica;

  int a = 1;
  //se realizan 5 inserciones en el set.
  elSet.insert(a);
  elSet.insert(5);
  elSet.insert(1*2*3);
  elSet.insert(2);
  elSet.insert(7);
  auto largo = elSet.size();
  
  //sólo lo hago para comparar que el valor al que apunta elSet.end() parece ser el mismo de elSet.size().
  //SET.end() devuelve un puntero, por lo que hay que utilizar el * para obtener el valor
  cout << *elSet.end() << " - " << largo << endl;
  
  set<int>::iterator it;
  cout << endl;

  //iteraremos desde el INICIO del set hasta que estemos en un lugar distinto al final.  Avanzando de 1 elemento en 1 (it++)
  for(it = elSet.begin(); it != elSet.end(); it++){
    cout << *it << endl;
  }
  
  //Ejemplo de diccionario (MAP)

  guiaTelefonica["Marcos"] = 2315632;
  guiaTelefonica["Roberto"] = 654618;
  guiaTelefonica["Lía"] = 7165163;
  guiaTelefonica["Jorge"] = 41651;
  guiaTelefonica["Romina"] = 415615;

//como se obtiene la llave y como se obtiene el valor. (Como itmap es un iterador, utilizo -> para obtener el elemento)
  for(auto itmap = guiaTelefonica.begin(); itmap !=  guiaTelefonica.end() ; itmap++){
    cout << itmap->first << ":" << itmap->second << endl;
  }

}
