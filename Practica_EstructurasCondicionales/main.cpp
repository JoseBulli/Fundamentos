#include <iostream>
#include <string>
using namespace std;

void Ejercicio1(){

    int num1 = 0, num2 = 0;
    cout << "Introduce dos numeros.";
    cout << "\nNumero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    //Mayor de los dos números introducidos
   if (num1 > num2){
       cout << "El primer numero es el mayor";
   }
   else{
       cout << "El segundo numero es el mayor";
   }
}

void Ejercicio2(){

    int num1 = 0, num2 = 0, num3 = 0;
    cout << "Introduce tres numeros.";
    cout << "\nNumero 1: ";
    cin >> num1;
    cout << "Numero 2: ";
    cin >> num2;
    cout << "Numero 3: ";
    cin >> num3;
    //Mayor de los tres números introducidos
    if (num1 > num2 && num1 > num3){
        cout << "El primer numero es el mayor";
    }
    if (num2 > num1 && num2 > num3){
        cout << "El segundo numero es el mayor";
    }
    if (num3 > num1 && num3 > num2){
        cout << "El tercer numero es el mayor";
    }

}

void Ejercicio3(){

    int num = 0;
    cout << "Introduce un numero: ";
    cin >> num;

    //Determinar si el número es par o impar
    if(num % 2 == 0){
        cout << "El numero introducido es par";
    }
    else{
        cout << "El numero introducido es impar";
    }
}

void Ejercicio4(){
    int num1 = 0, num2 = 0;
    cout << "Introduce un numero: ";
    cin >> num1;
    cout << "Introduce otro numero: ";
    cin >> num2;


    //Determinar si un número es divisible entre otro
    if(num1 % num2 == 0){
        cout << "El primer numero es divisible entre el segundo";
    }

    if(num2 % num1 == 0){
        cout << "El segundo numero es divisible entre el primero";
    }
}

void Ejercicio5(){
    char carac;

    cout << "Introduce un caracter: ";
    cin >> carac;
    //Ver si el caracter es una vocal minuscula
    if(carac == 'a' || carac == 'e' ||carac == 'i' ||carac == 'o' ||carac == 'u'){
        cout << "El caracter es una vocal minuscula";
    }
    else{
        cout << "El caracter no es una vocal minuscula";
    }
}

void Ejercicio6(){
    char carac;

    cout << "Introduce un caracter: ";
    cin >> carac;

    if(carac == 'a' || carac == 'e' ||carac == 'i' ||carac == 'o' ||carac == 'u'){
        cout << "El caracter es una vocal minuscula";
    }
    if(carac == 'A' || carac == 'E' ||carac == 'I' ||carac == 'O' ||carac == 'U'){
        cout << "El caracter es una vocal mayuscula";
    }
    else{
        cout << "El caracter no es una vocal";
    }
};

void Ejercicio7(){

    int edad = 0;
    cout << "Introduce tu edad: ";
    cin >> edad;
    //Edad comprendida entre 18 y 25 (incluyendo ambos)
    if(edad >= 18 && edad <= 25){
        cout << "Tu edad esta entre 18 y 25 anios";
    }
    else{
        cout << "Tu edad no esta entre 18 y 25 anios";
    }

}

void Ejercicio8(){
    int num1 = 3, num2 = 4, num3 = 2, numIntr = 0;
    cout << "Introduce un numero para comparar con los anteriores: ";
    cin >> numIntr;
    //Comprobar si el introducido es igual que uno de los introducidos
    if(numIntr == num1 || numIntr == num2 || numIntr == num3){
        cout << "El numero coincide con los introducidos anteriormente";
    }
    else{
        cout << "El numero no coincide";
    }
}

int main() {

    Ejercicio8();

    return 0;
}
