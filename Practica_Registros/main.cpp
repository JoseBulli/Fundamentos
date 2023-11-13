#include <iostream>
#include <string>

using namespace std;

const int TMAX = 100;

//Estructura que utilizaremos en el ejercicio 1
struct TiemposCiclista{
    int horas;
    int minutos;
    int segundos;
};
void Ejercicio1(){
    TiemposCiclista tmps[TMAX] = {{0,51,32},{1,02,45,},{0,33,33}};
    int numEtapas = 3;

    //Inicializo los valores anteriormente para comprobar que funciona
    /*
    for(int i = 0; i<numEtapas; i++){
        cout << "Introduce los datos de la estapa numero " << i+1;
        cout << endl << "Horas: ";
        cin >> tmps[i].horas;

        cout << "Minutos: ";
        cin >> tmps[i].minutos;

        cout << "Minutos: ";
        cin >> tmps[i].segundos;
    }
     */

    //Bucle para sumar hora, minutos y segundos de cada etapa al total de cada valor
    int horasTotal=0, minsTotal=0, segndsTotal=0;
    for(int i = 0; i<numEtapas; i++){
        horasTotal += tmps[i].horas;
        minsTotal += tmps[i].minutos;
        segndsTotal += tmps[i].segundos;
    }

    //Corregir segundos y minutos por encima de 60
    int arrastreSeg = segndsTotal/60;
    minsTotal += arrastreSeg;
    segndsTotal -= arrastreSeg*60;
    int arrastreMin = minsTotal/60;
    horasTotal += arrastreMin;
    minsTotal -= arrastreMin*60;

    cout << "El ciclista ha tardado " << horasTotal << " horas, " << minsTotal << " minutos y " << segndsTotal << " segundos.";

}

//Estructura que utilizaremos en el ejercicio 2 y 3
struct PersonasYAlergias{
    string nombre;
    bool alergia;
};
void Ejercicio2(){
    PersonasYAlergias vPersonas[TMAX] = {{"A",false},{"B", true},{"C",false},{"D",false},{"E",true},};
    int tamV = 5;
    //Inicializacion de vectores de personas que tienen o no alergias y sus tamaños
    string vSiAlergia[TMAX], vNoAlergia[TMAX];
    int tamSiAlergia = -1, tamNoAlergia = -1;

    //Bucle para rellenar los vectores con los nombres de las personas que tienen o no alergias
    for(int i = 0; i<tamV; i++){
        if(vPersonas[i].alergia){
            tamSiAlergia += 1;
            vSiAlergia[tamSiAlergia] = vPersonas[i].nombre;
        }else{
            tamNoAlergia += 1;
            vNoAlergia[tamNoAlergia] = vPersonas[i].nombre;
        }
    }

    //Bucles para mostrar resultados
    for(int i = 0; i<tamSiAlergia+1;i++){
        cout << vSiAlergia[i] << " tiene alergias." << endl;
    }

    for(int i = 0; i<tamNoAlergia+1;i++){
        cout << vNoAlergia[i] << " NO tiene alergias." << endl;
    }

}

void Ejercicio3(){
    PersonasYAlergias vPersonas[TMAX];
    int tamV = 0;
    //Inicializacion de vectores de personas que tienen o no alergias y sus tamaños
    string vSiAlergia[TMAX], vNoAlergia[TMAX];
    int tamSiAlergia = -1, tamNoAlergia = -1;

    //Definimos el tamaño del vector y lo recorremos añadiendo datos
    cout << "Cuantas personas vas a incluir?: "; cin>>tamV;

    for(int i = 0; i<tamV; i++){
        char alg; //Caracter para comparar con uno definido en indicar si tiene alergia o no
        cout << "Introduce los datos de la persona " << i+1 << endl;
        cout << "Nombre: "; cin>>vPersonas[i].nombre;
        cout << "Presenta alergias? (t para true, cualquier cosa para false): "; cin>>alg;
        alg = tolower(alg); //Pasamos el char a minuscula (da igual introducir 't' que 'T')

        if(alg == 't'){
            vPersonas[i].alergia = true;
        }else{
            vPersonas[i].alergia = false;
        }
    }
    //Bucle para rellenar los vectores con los nombres de las personas que tienen o no alergias
    for(int i = 0; i<tamV; i++){
        if(vPersonas[i].alergia){
            tamSiAlergia += 1;
            vSiAlergia[tamSiAlergia] = vPersonas[i].nombre;
        }else{
            tamNoAlergia += 1;
            vNoAlergia[tamNoAlergia] = vPersonas[i].nombre;
        }
    }

    cout << endl;

    //Mostrar resultados
    for(int i = 0; i<tamSiAlergia+1;i++){
        cout << vSiAlergia[i] << " tiene alergias." << endl;
    }

    for(int i = 0; i<tamNoAlergia+1;i++){
        cout << vNoAlergia[i] << " NO tiene alergias." << endl;
    }
}

//Estructura que utilizaremos en el ejercicio 4
struct DatosPersonas{
    string nombre;
    float peso;
    float altura;
    float IMC;
};
void Ejercicio4(){
    DatosPersonas vPersonas[TMAX] = {{"Jose", 75,1.78,0}, {"Mario",85,1.95,0}, {"Dario", 60, 1.72,0}};
    int tamV = 3;

    //Definimos el valor de mayor y menor IMC y los string para indicar la persona
    string nombMayorIMC, nombMenorIMC;
    float mayorIMC = 0, menorIMC = 1000;

    //Defino los datos en el codigo directamente para ahorrar tiempo ;)
    /*
    cout << "Cuantas personas vas a introducir?: "; cin>>tamV;

    for(int i = 0; i<tamV; i++){
        cout << "Introduce los datos de la persona " << i+1 << endl;
        cout << "Nombre: "; cin>>vPersonas[i].nombre;
        cout << "Peso: "; cin>>vPersonas[i].peso;
        cout << "Altura: "; cin>>vPersonas[i].altura;
    }
    */

    /*
    Definimos datos para encontrar al mas alto (junto con el vector de altos),
    y un valor logico para indicar si el mas bajo tiene menor IMC
    */

    string personasAltas[TMAX];
    float alturaBuscada, alturaMasBajo = 1000.0;
    bool bajitoIMC = false;
    int tamAltos = -1;
    cout << endl << "Indica la altura a partir la cual vas a filtrar: "; cin>>alturaBuscada;



    for(int i = 0; i<tamV; i++){

        //Muesta los datos de cada persona
        cout << endl << "Datos de la persona " << i+1 << endl;
        cout << "Nombre: "<<vPersonas[i].nombre << endl;
        cout << "Peso: "<<vPersonas[i].peso << endl;
        cout << "Altura: "<<vPersonas[i].altura << endl;
        vPersonas[i].IMC = (vPersonas[i].peso)/((vPersonas[i].altura)*(vPersonas[i].altura));
        cout << "IMC: " << vPersonas[i].IMC << endl;

        //Indica la persona con mayor IMC y su nombre
        if(vPersonas[i].IMC > mayorIMC){
            mayorIMC = vPersonas[i].IMC;
            nombMayorIMC = vPersonas[i].nombre;
        }

        //Indica la persona con menor IMC y su nombre
        if(vPersonas[i].IMC < menorIMC){
            menorIMC = vPersonas[i].IMC;
            nombMenorIMC = vPersonas[i].nombre;
        }

        //Introduce a las personas altas en su vector
        if(vPersonas[i].altura > alturaBuscada){
            tamAltos += 1;
            personasAltas[tamAltos] += vPersonas[i].nombre;
        }

        //Guardamos el valor de la persona con menor altura
        if(vPersonas[i].altura < alturaMasBajo){
            alturaMasBajo = vPersonas[i].altura;
        }
    }

    /*
    Bucle para comparar el tamaño e IMC de cada persona con los datos mas
    bajos de cada apartado y mostrarlo mediante el valor logico
    */
    for(int i = 0; i<tamV; i++){
        if((vPersonas[i].altura == alturaMasBajo) && (vPersonas[i].IMC == mayorIMC)){
            bajitoIMC = true;
        }
    }

    cout << endl;
    cout << "La persona con mayor IMC es: " << nombMayorIMC;

    cout << endl;
    for(int i = 0; i<tamAltos+1; i++){
        cout << personasAltas[i] << " supera la altura buscada" << endl;
    }

    cout << endl;
    if(bajitoIMC){
        cout << "La persona mas bajita tiene menor IMC";
    }else{
        cout << "La persona mas bajita NO tiene menor IMC";
    }

}

int main() {
    //Puedes comprobar cada ejercicio escribiendo: EjercicioX();
    //X es el numero de cada ejercicio. Ejemplo: Ejercicio1();
    return 0;
}
