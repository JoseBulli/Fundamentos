#include <iostream>

using namespace std;

const int TMAX = 100;

void Ejercicio1(){
    int array[TMAX], tamArray = 0;
    cout << "Introduce el tamanio del vector: ";
    cin >> tamArray;

    for(int i = 0; i<tamArray; i++){
        cout << "Introduce un numero en la posicion " << i << ": ";
        cin >> array[i];
    }

    for(int i = 0; i<tamArray; i++){
        cout << array[i] << "\n";
    }

}

void Ejercicio2(){
    int array[TMAX] = {1,2,3,4}, tamArray = 4;

    for(int i = tamArray-1; i>=0; i--){
        cout << array[i] << "\n";
    }
}

void Ejercicio3(){
    int array[TMAX] = {1,2,3,4}, tamArray = 4, sumaAcum = 0;

    for(int i = 0; i<tamArray; i++){
        sumaAcum += array[i];
    }

    cout << "La suma de los elementos del vector es: " << sumaAcum;
}

void Ejercicio4(){
    int array[TMAX] = {1,2,3,4}, tamArray = 4, sumaAcum = 0;

    for(int i = 0; i<tamArray; i++){
        sumaAcum += array[i];
        array[i] = sumaAcum;
    }

    for(int i = 0; i<tamArray; i++){
        cout << array[i] << "\n";
    }
}

void Ejercicio5(){
    int array[TMAX] = {1,2,3,4}, tamArray = 4, numMayor = 0;

    for(int i = 0; i<tamArray; i++){
        if(array[i] > numMayor){
            numMayor = array[i];
        }
    }

    cout << "El numero mayor del vector es: " << numMayor;
}

void Ejercicio6(){
    int array[TMAX] = {1,2,3,4}, tamArray = 4, num = 0;
    bool encNum = false;
    cout << "Introduce un numero para comprobar si se encuentra en el vector: ";
    cin >> num;

    for(int i = 0; i<tamArray; i++){
        if(num == array[i]){
            encNum = true;
            i = tamArray;
        }
    }

    if (encNum){
        cout << "El numero se encuentra en el vector";
    }
    else{
        cout << "El numero NO se encuentra en el vector";
    }
}

void Ejercicio7(){
    int array[TMAX] = {9,2,3,4}, tamArray = 4, num = 0;
    bool encSum = false;


    for(int i = 0; i<tamArray; i++){
        int sumAcum = 0;
        for(int j = 0; j<tamArray; j++){
            if(j!=i){
                    sumAcum += array[j];
            }
        }
        //cout << sumAcum << "\n";
        if(array[i] == sumAcum){
            encSum = true;
            num = array[i];
        }
    }

    if (encSum){
        cout << "El numero " << num << " es la suma de los demas elementos del vector";
    }
    else{
        cout << "Ningun numero es la suma de los demas elementos del vector";
    }
}

void Ejercicio8(){
    int matriz[TMAX][TMAX] = {{1,2,3},{4,5,6},{7,8,9}};
    int tamCuadr = 3;

    for(int i = 0; i<tamCuadr; i++){
        for(int j = 0; j<tamCuadr; j++){
            if(i == j){
                cout << matriz[i][j] << "\n";
            }
        }
    }
}

void Ejercicio9(){
    int matriz[TMAX][TMAX] = {{1,2,3},{4,5,6},{7,8,9}};
    int tamCuadr = 3;

    for(int i = 0; i<tamCuadr; i++){
        for(int j = 0; j<tamCuadr; j++){
            cout << "[" << matriz[j][i] << "]";
        }
        cout << endl;
    }
}

void Ejercicio10(){
    int matriz[TMAX][TMAX] = {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[TMAX][TMAX] = {{10,20,30},{40,50,60},{70,80,90}};
    int tamCuadr = 3;

    for(int i = 0; i<tamCuadr; i++){
        for(int j = 0; j<tamCuadr; j++){
            matriz[i][j] += matriz2[i][j];
        }
    }

    for(int i = 0; i<tamCuadr; i++){
        for(int j = 0; j<tamCuadr; j++){
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

}

void Ejercicio11(){
    int matriz[TMAX][TMAX] = {{1,2,3},{2,5,0},{3,0,5}};
    int numFi = 3, numCol = 3, puntuacion = 0;
    bool simetrica = false;

    if(numFi != numCol){
        simetrica = false;
    }
    else{
        for(int i = 0; i<numFi; i++){
            for(int j = 0; j<numCol; j++){
                if(matriz[i][j] == matriz [j][i]){
                    puntuacion += 1;
                }
            }
        }

        if(puntuacion == (numFi*numCol)){
            simetrica = true;
        }

    }

    if(simetrica){
        cout << "La matriz es simetrica";
    }
    else{
        cout << "La matriz NO es simetrica";
    }

}

int main() {
    // Cambiar el ejercicio segun el que vayas a comprobar.
    Ejercicio11();
    return 0;
}
