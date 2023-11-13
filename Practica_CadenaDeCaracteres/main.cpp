#include <iostream>
#include <string>
using namespace std;

const int TMAX = 50;

void Ejercicio1(){
    string cadena = "Murcielago";
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    for(int i=0; i<cadena.length(); i++){
        cadena[i]=tolower(cadena[i]);

        if(cadena[i]=='a'){
            contA += 1;
        }

        if(cadena[i]=='e'){
            contE += 1;
        }

        if(cadena[i]=='i'){
            contI += 1;
        }

        if(cadena[i]=='o'){
            contO += 1;
        }

        if(cadena[i]=='u'){
            contU += 1;
        }

    }

    cout << "A: " << contA << endl;
    cout << "E: " << contE << endl;
    cout << "I: " << contI << endl;
    cout << "O: " << contO << endl;
    cout << "U: " << contU;

}

void Ejercicio2(){
    string frase, frase2, fmayor, fmenor;
    int mayor=0, menor = 1000, num;

    do {
        cout << "Introduce frases hasta FIN: ";
        getline(cin >> ws, frase);

        if(frase != "FIN"){
            frase2 = frase;
        }

        num=frase2.length();

        if (num>mayor){
            fmayor=frase2;
            mayor = num;
        }
        if (num<menor){
            fmenor=frase2;
            menor = num;
        }
    }while(frase!="FIN");

    cout<<"mayor: "<<fmayor<<endl;
    cout<<"menor: "<<fmenor<<endl;
}

void Ejercicio3(){
    string frase, frase2, fmayor, fmenor;
    int mayor=0, menor = 1000, num;

    do {
        cout << "Introduce frases hasta FIN: ";
        getline(cin >> ws, frase);

        string fraseSoloChar;

        for(char c: frase){
            if(c!=' '){
                fraseSoloChar += c;
            }
        }

        if(fraseSoloChar != "FIN"){
            frase2 = fraseSoloChar;
        }

        num=frase2.length();

        if (num>mayor){
            fmayor=frase2;
            mayor = num;
        }
        if (num<menor){
            fmenor=frase2;
            menor = num;
        }
    }while(frase!="FIN");

    cout<<"mayor: "<<fmayor<<endl;
    cout<<"menor: "<<fmenor<<endl;
}

void Ejercicio4(){
    string cadena[TMAX] = {"Jose", "Hugo", "Alberto", "Mario", "Darío"};
    int tamCad = 5;
    string nombre = "Juan";
    bool encontrado = false;

    for(int i = 0; i<tamCad; i++){
        if(cadena[i] == nombre){
            encontrado = true;
            i = tamCad;
        }
    }

    if(encontrado){
        cout << "El nombre se encuentra en el vector";
    }else{
        cout << "El nombre NO se encuentra en el vector";
    }
}

void Ejercicio5(){
    string palabra = "arenera";
    int pos = 0;
    bool palindromo = true;
    pos = palabra.length() - 1;

    for(int i = 0; i<palabra.length(); i++){
        if(palabra[i] != palabra[pos]){
            palindromo = false;
            i = palabra.length();
        }
        pos--;
    }

    if(palindromo){
        cout << "La palabra es un palindromo";
    }else{
        cout << "Error";
    }
}

void Ejercicio6(){
    string frase = "la ruta nos aporto otro paso natural", fraseComprim;

    for(char c: frase){
        if(c != ' '){
            fraseComprim += c;
        }
    }
    int longi = fraseComprim.length(), cont = 0;

    for(int i = 0; i<fraseComprim.length(); i++){
        if(fraseComprim[i] == fraseComprim[longi-i-1]){
            cont += 1;
        }
    }

    if(longi == cont){
        cout << "La frase es un palindromo";
    }else{
        cout << "Error";
    }
}

void Ejercicio7(){
    string frase = "Hola me llamo Jose";
    int numPal = 1, tamFrase = frase.length()-1;
    bool espacioDetectado = false;

    for(int i = 0; i<tamFrase; i++){
        if(frase[i] == ' ' && !espacioDetectado){
            numPal += 1;
            espacioDetectado = true;
        }

        if(frase[i] != ' '){
            espacioDetectado = false;
        }

    }

    cout << "Numero de palabras: " << numPal;
}

int main() {
    Ejercicio3();
    return 0;
}
