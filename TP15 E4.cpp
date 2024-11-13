#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Empleado{
	protected:
		int horas;
	public:
        virtual int calcularSalario() = 0;
        void ingresarHoras() {
            cout<<"Ingrese las horas trabajadas: "<<endl;
            cin>>horas;
        }
};

class Gerente : public Empleado {
	protected:
		int calcularSalario() override {
            ingresarHoras(); 
            int salario = horas * 15;
            return salario;
        }
};

class Vendedor : public Empleado {
	protected:
		int calcularSalario() override {
            ingresarHoras();
            int salario = horas * 10;
            return salario;
        }
};

int main()
{
	Empleado* emp;

    Gerente g;
    Vendedor v;

    emp = &g;
    cout<<"Salario del gerente: "<<emp->calcularSalario()<<endl;

    emp = &v;
    cout<<"Salario del vendedor: "<<emp->calcularSalario()<<endl;

    return 0;
}
