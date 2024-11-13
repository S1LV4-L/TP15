#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>
#include <algorithm>
using namespace std;

class InstrumentoMusical{
	public:
		virtual void tocar() = 0;
};

class piano : public InstrumentoMusical{
	public:
		void tocar() override{
			Beep(261, 500);  // Do
            Beep(329, 500);  // Mi
            Beep(392, 500);  // Sol
            Beep(523, 500);  // Do (octava superior)
            Beep(392, 500);  // Sol
            Beep(329, 500);  // Mi
            Beep(261, 500);  // Do
		}
};

class guitarra : public InstrumentoMusical{
	public:
	    void tocar() override{
		    Beep(392, 500);  // Sol
            Beep(294, 500);  // Re
            Beep(392, 500);  // Sol
            Beep(261, 500);  // Do
            Beep(440, 500);  // La
            Beep(294, 500);  // Re
            Beep(330, 500);  // Mi
		}
};

class flauta : public InstrumentoMusical{
	public:
	    void tocar() override{
		    Beep(349, 500);  // Fa
            Beep(440, 500);  // La
            Beep(523, 500);  // Do (octava superior)
            Beep(349, 500);  // Fa
            Beep(523, 500);  // Do (octava superior)
            Beep(440, 500);  // La
            Beep(349, 500);  // Fa
		}
};

int main()
{
	piano a1;
	guitarra a2;
	flauta a3;
	
	a1.tocar();
	Beep(1, 1000);
	a2.tocar();
	Beep(1, 1000);
	a3.tocar();
	Beep(1, 1000);
	
	return 0;
}
