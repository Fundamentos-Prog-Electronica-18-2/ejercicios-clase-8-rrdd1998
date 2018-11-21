#include <iostream>

using namespace std;

int main()
{
    cout << "resolucion de una ecuacion de primer grado" << endl;
    double a= 10;
    double b=2.4;
    double resultado = 0;

    if (a!=0){
        resultado = -b/a;
        cout << "el resultado es"<< endl;
    }else {
        if (b!=0){
            cout <<"solucion imposible"<< endl;
        }else {
            cout << "solucion indeterminada" << endl;
    }

    return 0;
}
}
