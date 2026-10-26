/******************************************************** 
* Programme : comparer * 
* but : comparer deux nombres entiers entres au clavier * 
* * 
* Auteur : Anaïs * 
* STS CIEL * 
* LPO Robert DOISNEAU * 
*******************************************************/ 
#include <iostream> 

int main(int argc, char *argv[]) 
{ 
    int premier, deuxieme;

    std::cout << "Entrer deux entiers : ";
    std::cin >> premier >> deuxieme;

    if (premier > deuxieme) 
    {
        std::cout << premier << " est superieur a " << deuxieme << std::endl;
    } 
    else if (premier < deuxieme) 
    {
        std::cout << premier << " est inferieur a " << deuxieme << std::endl;
    } 
    else 
    {
        std::cout << premier << " est egal a " << deuxieme << std::endl;
    }

    return 0; 
}
