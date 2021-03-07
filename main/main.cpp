
#include <iostream>
#include "Composant1.h"
#include "Composant2.h"

int main(int argc, char ** argv)
{
	int data1=3;
	int data2=5;

	int valeur1;
	int valeur2;
	
	void* lib1 = dlopen("libComposant1.so", 1);
	void* lib2 = dlopen("libComposant2.so", 1);
	
	void* composant1 = dlsym(lib1, "composant1");
	void* composant2 = dlsym(lib2, "composant2");

	valeur1=composant1(data1,data2);

	valeur2=composant2(data1,data2);

	std::cout << getComposant1Version() << std::endl;
	std::cout << "valeur 1 :" << valeur1 << " valeur 2 :" << valeur2 << std::endl;
}
