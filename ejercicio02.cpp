#include <iostream>


using namespace std;

class Gato{

private:
int suEdad;
float suPeso;



void Edad(int edad);
int Edad();
void Peso(float peso);
float Peso();
void Maullar();
};
void Gato::Edad(int edad){
suEdad = edad;
}
int  Gato::Peso(float peso){
suPeso = peso;
}
float Gato::Peso(){
return suPeso;
}
void Gato::Maullar(){
cout << "miuuu" << endl;
}

int main (void){

Gato Pelusa;
Pelusa.Edad(9);
Pelusa.Peso(6.5);

cout << "El peso de pelusa es: " << Pelusa.Edad() << endl;
cout << "La edad de Pelusa es: " << Pelusa.Peso() << endl;

Pelusa.Maullar();
Gato::Edad(){
return suEdad;
}
void Gato::Peso(float peso){
suPeso = peso;
}
float Gato::Peso(){
return suPeso;
}
void Gato::Maullar(){
cout << "miuuu" << endl;
}

int main (void){

Gato Pelusa;
Pelusa.Edad(9);
Pelusa.Peso(6.5);

cout << "El peso de pelusa es: " << Pelusa.Edad() << endl;
cout << "La edad de Pelusa es: " << Pelusa.Peso() << endl;

Pelusa.Maullar();

}
