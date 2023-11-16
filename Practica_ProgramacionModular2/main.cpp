#include <iostream>
#include <string>
using namespace std;
const int TMAX = 50;

void Ejercicio1_cadLargaCorta(const string c1, const string c2, string& cadenaLarga, string& cadenaCorta){
    if(c1.length()>=c2.length()){
        cadenaLarga = c1;
        cadenaCorta = c2;
    }else{
        cadenaLarga = c2;
        cadenaCorta = c1;
    }
}
void Ejercicio1(){
    string cadena1 = "Hola", cadena2 = "Que tal";
    string cadenaLarga, cadenaCorta;

    Ejercicio1_cadLargaCorta(cadena1, cadena2, cadenaLarga, cadenaCorta);

    cout << "La cadena larga es: " << cadenaLarga << " y la cadena corta es: " << cadenaCorta;
}

void Ejercicio2_interValor(int& n1, int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}
void Ejercicio2(){
    int num1 = 7, num2 = 2;
    Ejercicio2_interValor(num1, num2);
    cout << "El numero 1 es: " << num1 << " y el numero 2 es: " << num2;
}

int Ejercicio3_sumaElementosVector(const int v[], const int t){
    int sumaElementos = 0;
    for(int i = 0; i<t; i++){
        sumaElementos += v[i];
    }
    return sumaElementos;
}
void Ejercicio3(){
    int vector[TMAX] = {1,2,3,4,5,6,7,8,9,10}, tam = 10;
    int sumaElementos = 0;
    sumaElementos = Ejercicio3_sumaElementosVector(vector,tam);
    cout << "La suma de los elementos del vector es: " << sumaElementos;
}

void Ejercicio4_cambiarSignos(int v[], const int t){
    for(int i = 0; i<t; i++){
        v[i] *= -1;
    }
}
void Ejercicio4(){
    int vector[TMAX] = {1,-2,3,4,-5,6,7,-8,9,10}, tam = 10;
    Ejercicio4_cambiarSignos(vector, tam);
    for(int i = 0; i<tam; i++){
        cout << "[" << vector[i] << "]";
    }
}

void rellenarImpares(int v[], int t, int vImp[], int& tVImpo){
    for(int i = 0; i<t; i++){
        if(v[i] % 2 != 0){
            tVImpo += 1;
            vImp[tVImpo] = v[i];
        }
    }
}
void Ejercicio5(){
    int vector[TMAX] = {1,2,3,4,5,6,7,8,9,10}, tam = 10;
    int vectorImpares[TMAX], tamVImpares = -1;
    rellenarImpares(vector, tam, vectorImpares, tamVImpares);

    for(int i = 0; i<tamVImpares+1; i++) {
        cout << "[" << vectorImpares[i] << "]";
    }
}

int numMinimoFilaMatriz(const int m[][TMAX], const int nF, const int nC, const int filaElegida){
    int numeroMinimoFila = 1000;
    for(int i = 0; i<nF; i++){
        for(int j = 0; j<nC; j++){
            if(i == filaElegida && m[i][j] < numeroMinimoFila){
                numeroMinimoFila = m[i][j];
            }
        }
    }
    return numeroMinimoFila;
}
void Ejercicio6(){
    int matriz[TMAX][TMAX] = {{1,2,3},{4,5,6},{7,8,9}};
    int numFilas = 3, numColumnas = 3;
    int filaElegida = 1, numeroMinimoFila = numMinimoFilaMatriz(matriz, numFilas, numColumnas, filaElegida);

    cout << "El numero mas pequenio de la fila " << filaElegida << " es: " << numeroMinimoFila;
}

int Ejercicio7_minimo(int v[], int posIni, int posFin){
    int numMinimo = 1000, posMin;
    for(int i = posIni; i<posFin; i++){
        if(v[i]<numMinimo){
            numMinimo = v[i];
            posMin = i;
        }
    }
    return posMin;
}
void Ejercicio7_intercambia(int& n1, int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}
void Ejercicio7_seleccion(int v[], int tamV){
    for(int i = 0; i<tamV-1; i++){
        int posmin = Ejercicio7_minimo(v,i,tamV);
        if(posmin != i){
            Ejercicio7_intercambia(v[i],v[posmin]);
        }
    }
}
void Ejercicio7(){
    int vector[TMAX] = {5,3,2,4,1}, tam = 5;
    Ejercicio7_seleccion(vector, tam);
    for(int i = 0; i<tam; i++){
        cout << "[" << vector[i] << "]";
    }
}

int main() {
    //Ejercicio1();
    //Ejercicio2();
    //Ejercicio3();
    //Ejercicio4();
    //Ejercicio5();
    //Ejercicio6();
    //Ejercicio7();
    return 0;
}
