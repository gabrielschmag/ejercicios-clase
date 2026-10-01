#include <iostream>
#include <string>
using namespace std;

class persona {
private:
		string nom;
		int edad;
public:
	void mostrar_datos() {
		cout << "su nombre es: " << nom << endl; 
		cout << "su edad es: " << edad << endl;
	}
	bool Mayor_edad() {
		if (edad >= 18) {
			return true;
		}
		return false;
	}
};

int ej1() {
	string nom;
	int edad;

	cout << "introduce tu nombre: " << endl;
	cin >> nom;
	cout << "introduce tu edad: " << endl;
	cin >> edad;


	
	persona person;
	cout << "datos de la persona:" << endl;
	person.mostrar_datos();

	if (person.Mayor_edad()) {
		cout << " es mayor de edad" << endl;

	}
	else {
		cout << " es menor de edad" << endl;
	}



}




class rectangulo {
private:
	double ancho;
	double alto;
public:
	Rectangulo(double am, double al) {
		ancho = am;
		alto = al;

	}
	void Mostrar_parametros() {
		cout << "la altura es" << alto << endl;
		cout << "la anchura es" << ancho << endl;
	}
	double calculo_area() {
		return alcho * alto;

	}
	double calculo_perimetro() {
		return (ancho * 2) + (alto * 2)
	};

	int main() {
		double ancho;
		double alto;
		cout << "introduce la anchhura" << endl;
		cin >> ancho;

		cout << "introduce la altura" << endl;
		cin >> alto;
		rectangulo forma (ancho, alto);
		cout << "los datos son " << endl;
		forma.Mostrar_parametros();

		cout << " el area del rectangulo es: " << endl; 
			cout << " el perimetro del rectangulo es: " << endl;

