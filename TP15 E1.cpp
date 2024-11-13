#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>
#include <algorithm>
using namespace std;

class figura{
	protected:
		double x, y;
	public:
		void medidas(double base, double altura){
			x=base;
			y=altura;
		}
		
		virtual double calcularArea() = 0;
};

class rectangulo : public figura{
	public:
		double calcularArea() override {
			return x*y;
		}
};

class circulo : public figura{
	public:
		void setRadio(double radio) {
            x = radio;
        }
        
        double calcularArea() override {
            return M_PI * pow(x, 2);
        }
};

int main()
{
	rectangulo f1;
	f1.medidas(10, 5);
    cout<<"Area del rectángulo: "<<f1.calcularArea()<<endl;
	
	circulo f2;
    f2.setRadio(5);
    cout<<"Area del circulo: "<<f2.calcularArea()<<endl;
	
	return 0;
}
