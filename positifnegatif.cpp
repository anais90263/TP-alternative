/******************************************************** 
* Programme : positifnegatif * 
* but : dire si un nombre entré au clavier est positif ou négatif * 
* * 
* Auteur : Anaïs * 
* STS CIEL * 
* LPO Robert DOISNEAU * 
*******************************************************/ 
#include <iostream> 

int main(int argc, char *argv[]) 
{ 
    int nombre;

    std::cout << "Entrer un nombre entier : ";
    std::cin >> nombre;

    if (nombre >= 0) 
    {
        std::cout << nombre << " est un nombre positif." << std::endl;
    } 
    else 
    {
        std::cout << nombre << " est un nombre négatif." << std::endl;
    }

    return 0; 
}
