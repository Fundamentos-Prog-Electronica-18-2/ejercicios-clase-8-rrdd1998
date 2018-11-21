#include <iostream>

using namespace std;

int main()
{
    cout << "ejemplo de switch"<< endl;
    int dia_semana=0;
    cout << "ingrese el dia de la semana" << endl;
    cin >> dia_semana;

    switch(dia-semana){
        case 1;
             cout << "su dia es lunes"<< endl;
             break;
        case 2;
             cout << "su dia es martes"<< endl;
             break;
        case 3;
             cout << "su dia es miercoles" << endl;
             break;
        case 4;
              cout << "su dia es jueves" << endl;
             break;
        case 5;
              cout << "su dia es viernes" << endl;
             break;
        case 6;
              cout << "su dia es sabado" << endl;
             break;
        case 7;
              cout << "su dia es domingo" << endl;
             break;
        default;
                cout << "no hay dia que mostrar" << endl;
                 cout << "...ingrese un valor entre" << endl;
                  cout << "1-7" << endl;



    }
    cout << "el nombre ingresdo es" << endl;
    cout << nombre << endl;
     return 0;
}
