/******************************************************** 
* Programme : calc 
* but : calculatrice 4 operations en ligne de commande 
* Auteur : OCTAVE Edmond 
* date : 10/09/2019 
* STS SNIR 
* Lycee Robert DOISNEAU 
*******************************************************/ 
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) 
{ 
    int a, b;
    char operation; 
      
    if (argc != 4) 
    { 
        std::cout << "Nombre d'arguments incorrect.\nExemple : ./calc 12 + 3\n"; 
        return -1; 
    } 
    
    a = atoi(argv[1]); 
    b = atoi(argv[3]); 
    operation = argv[2][0]; 
      
    switch (operation) 
    { 
        case '+' : 
            std::cout << a << " + " << b << " = " << a + b << std::endl;
            break; 
        case '-' : 
            std::cout << a << " - " << b << " = " << a - b << std::endl;
            break; 
        case 'x' : 
        case '*' : 
            std::cout << a << " x " << b << " = " << a * b << std::endl;
            break; 
        case '/' : 
            if (b != 0)
                std::cout << a << " / " << b << " = " << a / b << std::endl;
            else
                std::cout << "Erreur : division par zero.\n";
            break; 
        case '%' : 
            if (b != 0)
                std::cout << a << " % " << b << " = " << a % b << std::endl;
            else
                std::cout << "Erreur : modulo par zero.\n";
            break; 
        default : 
            std::cout << "Erreur : operateur inconnu." << std::endl;   
    } 
    return 0; 
}
