#include <iostream>
using namespace std;

int main(){
    //Declaracion de variables
    float base, lad1, lad2;

    cout << "Ingresa la base del triangulo" << endl;
    cin >> base;

    cout << "Ingresa del segundo lado del triangulo" << endl;
    cin >> lad1;

    cout << "Ingresa del segundo lado del triangulo" << endl;
    cin >> lad2;

    if(lad1 == lad2 && base == lad1){
        cout << "El triangulo es Equilatero" << endl;
    }else if (base == lad2 || base == lad1 || lad2 == lad1){
        cout << "El triangulo es isoceles" << endl;
    }else 
    cout << "Es un triangulo escaleno" << endl;
    
    return 0;
}