#include <iostream>
using namespace std;

void Saludar(){
    cout << "Holaaaa" << endl;
}

void Saludar(string pal_){
    cout << "Holaaaa " << pal_ << endl;
}

 string OtroSaludo(){
    return "Holaaaa";
}

int main() {
  Saludar();
  cout << OtroSaludo() << endl;
  Saludar("Pedro");
  return 0;
}