#include <iostream>
#include <string>

using namespace std;

float absNum(const float n){
    float num = abs(n);
    return num;
}
void Ejercicio1(){
    float num = -34;
    num = absNum(num);
    cout << "El valor absoluto del numero es: " << num;
}

int tamanioCadena(const string c){
    int tamCad = c.length();
    return tamCad;
}
void Ejercicio2(){
    string cadena = "Hola";
    int tamCad = tamanioCadena(cadena);
    cout << "El tamanio de la cadena es: " << tamCad;
}

string cadenaMayor(const string c1, const string c2){
    string cadMay = c1;
    if(c2.length()>c1.length()){
        cadMay = c2;
    }
    return cadMay;
}
void Ejercicio3(){
    string cadena1 = "Hola", cadena2 = "Bulli";
    string cadMay = cadenaMayor(cadena1, cadena2);
    cout << "La cadena mayor es: " << cadMay;
}

bool numPertenece(const int my, const int mn, const int n){
    if(n>=mn&&n<=my){
        return true;
    }else{
        return false;
    }
}
void Ejercicio4(){
    int mayor = 5, menor = 1;
    int num = 3;
    bool pertenece = numPertenece(mayor, menor, num);

    if(pertenece){
        cout << "El numero pertenece al intervalo";
    }else{
        cout << "El numero no pertenece al intervalo";
    }
}

int main() {
    Ejercicio1();
    cout << endl;
    Ejercicio2();
    cout << endl;
    Ejercicio3();
    cout << endl;
    Ejercicio4();
    cout << endl;
    return 0;
}
