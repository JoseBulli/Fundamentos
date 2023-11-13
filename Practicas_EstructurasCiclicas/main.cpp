#include <iostream>
#include <cmath>
using namespace std;

void Ejercicio2(){
    int num = 0;

    cout << "Introduce un numero: ";
    cin >> num;

    cout << endl << "Su tabla de multiplicar es: \n";

    for(int i = 1; i<11; i++){
        cout << num << " x " << i << " = " << num*i << endl;
    }
}

void Ejercicio3(){
    int num, numValores = 0;

    do {
        cout << "Introduce un numero: ";
        cin >> num;
        numValores += 1;
    } while (num != 0);
    cout << "Has introducido " << numValores << " numeros.";
}

void Ejercicio4(){
    int suma = 0, nums = 11;
    for (int i = 1; i<nums; i++){
        suma += (i*i);
        cout << suma << endl;
    }

    cout << "La suma de los 10 primeros numeros enteros es: " << suma;

}

void Ejercicio5(){
    int numMedidas = 6;
    float tempMedia = 0, temp = 0, tempMayor = -1000, tempMenor = 1000;

    for(int i = 0; i<numMedidas; i++){
        cout << "Introduce la temperatura " << i+1 << ": ";
        cin >> temp;

        if(temp > tempMayor){
            tempMayor = temp;
        }
        if(temp < tempMenor){
            tempMenor = temp;
        }

        tempMedia += temp;

    }

    cout << "La temperatura maxima es: " << tempMayor << "\nLa temperatura menor es: " << tempMenor << "\nLa temperatura media es: " << (tempMedia/numMedidas);

}

void Ejercicio6(){
    int num = 0;

    do{
        cout << "Introduce un numero: ";
        cin >> num;

        if(num>=20 && num<=30){
            num = 0;
        }

    }while(num != 0);
}

void Ejercicio7(){
    int num = 0, potencia = 0, resultado = 1;
    cout << "Introduce un numero: "; cin>> num;
    cout << "Introduce el numero al que lo quieres elevar: "; cin>>potencia;

    for(int i = 0; i<potencia; i++){
        resultado *= num;
    }

    cout << "\nEl resultado es: " << resultado;

}

void Ejercicio8(){
    int gr = 0;
    double num = 0;

    cout << "Introduce el grado de aproximacion de Pi: "; cin >> gr;

    for(int i = 1; i<(gr + 1); i++){
        int aux = 0;
        aux = i*i;
        num += (6.0/aux);
    }

    num = sqrt(num);

    cout << "El resultado es: " << num;

}

void Ejercicio9(){
    int numMayor = 0, numMenor = 0, resto = 0;

    cout << "Introduce el numero mayor: "; cin >> numMayor;
    cout << "Introduce el numero menor: "; cin >> numMenor;

    int x=numMayor;
    int y=numMenor;

    do{
        if(numMayor%numMenor != 0){
            float cociente = numMayor/numMenor;
            resto = numMayor - (numMenor*cociente);
            numMayor = numMenor;
            numMenor = resto;
        }
    }
    while(resto != 0);

    cout << "El MCD de " << x << " y " << y << " es: " << numMenor;

} //No funciona

int main() {
    Ejercicio9();
    return 0;
}
