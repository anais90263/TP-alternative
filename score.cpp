/******************************************************** 
* Programme : score 
* but : exemple d'utilisation de l'instruction switch 
* Auteur : OCTAVE Edmond 
* date : 10/09/2019 
* STS SNIR 
* LPO Robert DOISNEAU 
*******************************************************/ 
#include <iostream> 

int main(int argc, char *argv[]) 
{ 
    int score; 
      
    std::cout << "Entrer le resultat sur 100 : "; 
    std::cin >> score; 
    
    switch (score/10) 
    { 
        case 10 : 
        case 9 : 
            std::cout << "A\n"; 
            break; 
        case 8 :  
            std::cout << "B\n"; 
            break; 
        case 7 : 
            std::cout << "C\n"; 
            break; 
        case 6 : 
            std::cout << "D\n"; 
            break; 
        case 5 : 
            std::cout << "E\n"; 
            break; 
        case 4 :  
        case 3 : 
        case 2 : 
        case 1 : 
        case 0 :  
            std::cout << "F\n"; 
            break; 
        default : 
            std::cout << "Erreur : valeur non prevue.\n"; 
    } 
    return 0; 
}
