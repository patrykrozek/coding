//Hello World

#include <iostream>

int main ()
{
int wynik; 
std::cout << "Podaj liczbe a ";
int a; 
std::cin >> a;

 
std::cout << "Podaj liczbe b ";
int b; 
std::cin >> b;

std::cout << "Podaj liczbe c ";
int c; 
std::cin >> c;

wynik =(a+b)*c;

std::cout << "(a + b) * c = "<< wynik <<std::endl;



return 0;
}

