#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <algorithm>
using namespace std;

class Animal{
	public:
		virtual void hacerSonido() = 0;
};

class perro : public Animal{
	public:
		void hacerSonido() override{
			cout<<"guau"<<endl;
		}
};

class gato : public Animal{
	public:
	void hacerSonido() override{
			cout<<"miau"<<endl;
		}
};

class pato : public Animal{
	public:
	void hacerSonido() override{
			cout<<"cuak"<<endl;
		}
};

int main()
{
	perro a1;
	gato a2;
	pato a3;
	
	a1.hacerSonido();
	a2.hacerSonido();
	a3.hacerSonido();
	
	return 0;
}
