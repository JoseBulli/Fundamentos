#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Ejercicio1(){

    double n1, n2;

    cout << "Introduce dos numeros: ";
    cin >> n1;
    cin >> n2;

    double suma, resta, prod, divis;

    suma = n1 + n2;
    resta = n1 - n2;
    prod = n1 * n2;
    divis = n1 / n2;

    cout << "La suma es: " << suma;
    cout << "\nLa resta es: " << resta;
    cout << "\nEl producto es: " << prod;
    cout << "\nLa division es: " << divis;
}

void Ejercicio2(){
    const double iva = 21;
    double precio = 0, valor_final = 0;

    cout << "Introduce el precio al que le vas a aplicar el IVA del 21%: ";
    cin >> precio;

    valor_final = precio + (precio * (iva/100));

    cout << "\nEl valor final del producto es: " << valor_final;
}

void Ejercicio3(){
    int edad;
    float altura;
    char grupo;

    cout << "Introduce los datos de la persona: ";
    cout << "\nEdad: ";
    cin >> edad;
    cout << "Altura: ";
    cin >> altura;
    cout << "Grupo: ";
    cin >> grupo;

    cout << "La persona tiene " << edad << " anios, mide " << altura << " y pertenece al grupo " << grupo;

}

void Ejercicio4(){

    double nota_teoria = 0, nota_practicas = 0, nota_partic = 0;
    double por_teoria = 0.60, por_practicas = 0.30, por_partic = 0.10;
    double nota_final = 0;

    cout << "Introduce las notas del alumno de: ";
    cout << "\nTeoria: ";
    cin >> nota_teoria;
    cout << "Practicas: ";
    cin >> nota_practicas;
    cout << "Participacion: ";
    cin >> nota_partic;

    nota_final = (nota_teoria * por_teoria) + (nota_practicas * por_practicas) + (nota_partic * por_partic);
    cout << "La nota final del alumno es: " << nota_final;
}

void Ejercicio5(){
    double nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, media_notas = 0;
    int num_alumnos = 4;

    cout << "Introduce las notas de: ";
    cout << "\nAlumno 1: ";
    cin >> nota1;
    cout << "Alumno 2: ";
    cin >> nota2;
    cout << "Alumno 3: ";
    cin >> nota3;
    cout << "Alumno 4: ";
    cin >> nota4;

    media_notas = (nota1 + nota2 + nota3 + nota4) / num_alumnos;
    cout << "La media de las notas es de: " << media_notas;
}

void Ejercicio6(){
    double a = 0, b = 0, c = 0;
    double raiz1 = 0, raiz2 = 0;

    cout << "Introduce los datos de una ecuacion de segundo grado (ax^2 + bc + c = 0): ";
    cout << "\na: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    raiz1 = (-b + sqrt((b*b) - (4*a*c))) / (2*a);
    raiz2 = (-b - sqrt((b*b) - (4*a*c))) / (2*a);

    cout << "Los valores de x son: " << raiz1 << " y " << raiz2;
}

void Ejercicio11(){
    double factura_actual = 0, anios = 0, factura_final = 0, porc_anio = 0.03;

    cout << "Introduce la factura de la luz de este anio: ";
    cin >> factura_actual;
    cout << "Durante cuantos anios: ";
    cin >> anios;

    factura_final = factura_actual + (anios * porc_anio * factura_actual);

    cout << "La factura dentro de " << anios << " anios sera de " << factura_final << " euros.";

}

int main() {

    Ejercicio11();

    return 0;
}
