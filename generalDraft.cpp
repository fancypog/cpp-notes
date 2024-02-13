#include <iostream>
#include <string>
 /*
int main() {

 double itemWeight; 
  cin >> itemWeight;
  cout << "The weight is: " << itemWeight << endl;
  
  return 0;
}
*/

/*
int main() {

  int grade = 90;
  if (grade > 60) {
  std::cout << "Pass";
  }
   
}
*/

int main() {

  double weight;
  int number;
  double weight2;
  double gravity;
  std::string planet;
  
  std::cout << "What is your earth weight? (kg)\n";
  std::cin >> weight;

  std::cout << "Which planet do you want to fight on? (input a number)\n";
  std::cout << "1. Mercury\n" <<"2. Venus\n" << "3. Mars\n" 
  << "4. Jupiter\n" << "5. Saturn\n" << "6. Uranus\n" << "7. Neptune\n";
  std::cin >> number;

  switch(number) {
    case 1:
      gravity = 0.38;
      planet = "Mercury";
    break;

    case 2:
      gravity = 0.91;
      planet = "Venus";
    break;

    case 3:
      gravity = 0.38;
      planet = "Mars";
    break;    

    case 4:
      gravity = 2.34;
      planet = "Jupiter";
    break;

    case 5:
      gravity = 1.06;
      planet = "Saturn";
    break;

    case 6:
      gravity = 0.92;
      planet = "Uranus";
    break;

    case 7:
      gravity = 1.19;
      planet = "Neptune";
    break;

    default:
    std::cout << "Invalid\n";
    break;

    }
  weight2 = weight * gravity;
  std::cout << "Your " << planet << " weight is " << weight2 << " kg.";
}
  