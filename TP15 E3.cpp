#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Vehiculo {
    public:
        virtual void acelerar() = 0;
};

class Coche : public Vehiculo {
    public:
        void acelerar() override {
            cout<<"Sonido de coche"<<endl;
        }
};

class Moto : public Vehiculo {
    public:
        void acelerar() override {
            cout<<"Sonido de moto"<<endl;
        }
};

int main()
{
	Vehiculo *p;
	
	Coche c;
	Moto m;
	
	p = &c;
	p->acelerar();
	p = &m;
	p->acelerar();
	
	
	return 0;
}
