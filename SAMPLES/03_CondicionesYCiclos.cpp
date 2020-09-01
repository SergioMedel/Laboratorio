#include <iostream>
using namespace std;

int main()
{ 
  int a = 0, i = 0;

  //endl es un fin de línea, en lugar de /n
  if(a == 0){
    cout << "Entró al if" << endl;
  }else{
    cout << "Entró al else" << endl;
  }

  do{
    cout << "Entró al doWhile" << endl;
    break;
      
  }while(a == 0);
        
  for(i = 0; i < 5 ; i++){
    cout << i << endl;            
  }
          
  i = 0;
  while(i == 0){
    cout << "Entró al While" << endl;
    break;           
  }

  return 0;
}
