#include <iostream>

using namespace std;
int num1, num2, num3;
int caso;
int suma;
int multiplicacion;
int main()
{
    cout << "ingrese el primer numero"<< endl;
    cin>> num1;
    cout << "ingrese el segundo numero"<< endl;
    cin>> num2;
    cout << "ingrese el tercer numero"<< endl;
    cin>> num3;
    cout << "ingrese el  caso"<< endl;
    cin>> caso;
 switch(caso){
 case 1:
         suma= num1+num2+num3;
         cout << "la suma es " <<suma << endl;

    case 2:
    multiplicacion = num1*num2*num3;
    cout<<" la multiplicacion es " <<multiplicacion<< endl;

     }


    return 0;
}
