#include <iostream>

using namespace std;

int main()
{
     int tabla ;
    int limite ;
    int contador = 1;
    int operacion = 0;
    int caso;

    cout << "ingrese la tabla que decea multiplicar" << endl;
    cin >> tabla;
    cout << "ingrese el limite"<< endl;
    cin>> limite;
    cout << "ingrese el caso"<< endl;
    cin>> caso;

    if (caso ==1){
        while (contador <=limite){
        operacion = tabla * contador;
        cout << tabla <<" * " <<contador <<" = " << operacion << endl;
        contador = contador + 1;
            }
    }else {
          if (caso==2){
            while (contador <=limite){
              operacion=tabla + contador;
              cout << tabla <<" + " <<contador <<" = " << operacion << endl;
              contador = contador + 1;
          }else{
          cout <<"opcion incorrecta"<<endl;
          }
          }
    }

    return 0;
}
