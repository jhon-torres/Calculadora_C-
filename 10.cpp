#include <iostream>
#include <cmath>
using namespace std;
//CALCULADORA CON FUNCIONES
void menu();
float suma(float n, float m);
float resta(float n, float m);
float multiplicacion(float n, float m);
void division(float n, float m);
float sen(float n);
float cose(float n);
float tg(float n);
float PI=3.14159265;

int main(){

    unsigned int opc,resto;
    float num1,num2;
    
    menu();

    cin>>opc;

    while (opc<=0 || opc>8){
        cout<<"***Elige correctamente una de las opciones"<<endl;
        menu();
        cin>>opc;
        }

    while(opc!=8){
        if(opc==1 || opc==2 || opc==3 || opc==4){
            cout<<"Ingrese el primer valor:";
            cin>>num1;
            cin.ignore(80, '\n');
            cout<<"Ingrese el segundo valor: ";
            cin>>num2;
            cin.ignore(80, '\n');
        }else if(opc==5 || opc==6 || opc==7){
            cout<<"Ingrese el valor del angulo: ";
            cin>>num1;
            cin.ignore(80, '\n');
        }

        switch(opc) {
        case 1:
            cout<<"\nEl resultado es: "<<suma(num1,num2)<<endl;
            break;
        case 2:
            cout<<"\nEl resultado es: "<<resta(num1,num2)<<endl;
            break;
        case 3:
            cout<<"\nEl resultado es: "<<multiplicacion(num1,num2)<<endl;
            break;
        case 4:
            division(num1,num2);
            break;
        case 5:
            cout<<"\nEl resultado es: "<<sen(num1)<<endl;
            break;
        case 6:
            cout<<"\nEl resultado es: "<<cose(num1)<<endl;
            break;
        case 7:
            cout<<"\nEl resultado es: "<<tg(num1)<<endl;
            break;
        case 8:
            cout<<"Haz salido"<<endl;
            break;
        default:
            cout<<"***Elige correctamente una de las opciones"<<endl;
        }

        if(opc!=8){
            cout<< "\t>>Elige otra opcion"<<endl;
            cin>>opc;
        }
        
    }

    return 0;
}

void menu(){
    cout<<"\t>> Ingrese una de las opciones dadas"<<endl<<endl;
    cout<<"1. Sumar dos numeros"<<endl;
    cout<<"2. Restar dos numeros"<<endl;
    cout<<"3. Multiplicar dos numeros"<<endl;
    cout<<"4. Dividir dos numeros"<<endl;
    cout<<"5. Obtener el seno de angulo"<<endl;
    cout<<"6. Obtener el coseno de angulo"<<endl;
    cout<<"7. Obtener la tangente de un angulo"<<endl;
    cout<<"8. Salir."<<endl<<endl;
}

float suma(float n, float m){
    float resultado=0;
    resultado= n+m;
    return resultado;
}

float resta(float n, float m){
    float resultado=0;
    resultado= n-m;
    return resultado;
}

float multiplicacion(float n, float m){
    float resultado=0;
    resultado= n*m;
    return resultado;
}

void division(float n, float m){
    float resultado=0;
    int resto=0;
    resultado= n/m;
    resto = int(n) % int(m);
    cout<<"\nEl cociente es: "<<resultado<<"\nEl resto es: "<<resto<<endl;
}

float sen(float n){
    float resultado=0;
    resultado= sin(n*PI/180.0);
    return resultado;
}

float cose(float n){
    float resultado=0;
    resultado= cos(n*PI/180.0);
    return resultado;
}

float tg(float n){
    float resultado=0;
    resultado= tan(n*PI/180.0);
    return resultado;
}
