#include <iostream>

int main() 
{
  //Name your dog
  std::string dog_name;
    std::cout << "Enter your dog's name:\n";
    std::cin >> dog_name;
  // This version of the program is for dogs older than 2 years old
  int dog_age;
  std::cout << "Enter your dog's age:\n";
  std::cin >> dog_age;
  // The first two years of a dog's life count as 21 human years."
  int early_years = 21;
  // Each following year counts as 4 human years."
  int later_years = (dog_age - 2) * 4;
  // Your dog's age in human years
  int human_years = early_years + later_years;
  //Your age in doggy age
  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
  
  
  
  
  
  
    
}
