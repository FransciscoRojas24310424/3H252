#include <iostream>
using namespace std;

class empleado
{
private:
    char nombre [10];// 10bites
    int edad;//4 bites
    char direccion[255]; //255 bites
    int telefono ;//4 bites
public:
    int LeerEdad(){
        return 0;
    }
};// 10 empleados



int main(int argc, char const * argv[])
{   //tamaños de memoria estatica
    //enteros
    cout<<"tamaño int " <<sizeof(int) << endl;
    cout<<"tamaño de log " <<sizeof(long) << endl;
    //flotante
    cout<<"tamaño float " <<sizeof(float) << endl;
    cout<<"tamaño de double " <<sizeof(double) << endl;
    //byte
    cout<<"tamaño de chart " <<sizeof(char) << endl;
    cout<<"tamaño de byte " <<sizeof(byte) << endl;
    cout<<"tamaño de bool " <<sizeof(bool) << endl;

    cout<<"tamaño  puntero " <<sizeof(int *) << endl;
    
empleado empleados [10];
cout<< "tamaño empleado " << sizeof(empleado) << endl;
cout<<"empleados"<<empleados [0].LeerEdad()<< endl;

int a= 64;
char b = (char) a;
cout<<b<< endl;

return 0;
}