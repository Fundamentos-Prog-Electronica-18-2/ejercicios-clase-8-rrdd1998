
#include <iostream>
#include <string>
using namespace std;

int main()
{
string nombre;
string apellido;
int edad;

cout << "ingrese su nombre "<<endl;
cin >> nombre;
cout << "ingrese su apellido"<<endl;
cin >> apellido;
cout << "ingrese su edad"<<endl;
cin >> edad;

if (edad<=10){
    cout << nombre<<" " << apellido << endl ;
    cout<< " tiene "<< edad << " años " <<endl;
    cout << "pertenece al basico"<<endl;
}else {
    if ((edad>= 10) && (edad<=14)){
    cout << nombre<< " " << apellido <<endl ;
    cout<< " tiene "<< edad << " años "<<endl;
    cout << " pertenece al basico superior "<<endl;
        }else{
            if ((edad >= 14) && (edad<=17)){
                     cout << nombre<< " " << apellido <<endl ;
                     cout<< " tiene "<< edad << " años "<<endl;
                     cout << " pertenece al bachilerato unificado "<<endl;

            }
        }
}
  return 0;
 }


