/******************************************************** 
* Programme : si * 
* but : utilisation de l'instruction if * 
* * 
* Auteur : OCTAVE Edmond * 
* date : 10/09/2019 * 
* STS SNIR * 
* LPO Robert DOISNEAU * 
* *******************************************************/ 
#include <iostream> 
int main(int argc, char *argv[]) 
{ 
 int numerateur, denominateur, reste; 
  
 std::cout << "Entrer deux entiers : "; 
 std::cin >> numerateur >> denominateur; 
 reste = numerateur % denominateur; /* '%' operateur modulo. Calcul le  reste d'une division */ 
 std::cout << numerateur << " % " << denominateur << " = " << reste<<  std::endl;  
 if (reste == 0) std::cout << numerateur<< " est divisible par " <<  denominateur << std::endl; 
 else std::cout << numerateur << " n'est pas divisible par " << denominateur  << std::endl; 
 return 0; 
}

