#include <iostream>

enum GAME_OPTIONS{
  CHESS = 1,
  CHECKERS = 2,
  PARCHIS = 3,
  EXIT = 4
};

void PrintGameOptions(){
  std::cout << "1. Chess" << std::endl;
  std::cout << "2. Checkers" << std::endl;
  std::cout << "3. Parchis" << std::endl;
  std::cout << "4. Exit" << std::endl;
}

int main() {
  unsigned int input;
  std::cout << "Welcome to C++ Board Games!" << std::endl;

  do{
    std::cout << "Choose the game you want to play: " << std::endl;
    PrintGameOptions();
    std::cin >> input;

  }while(input != GAME_OPTIONS::EXIT);
  std::cout << "Bye!" << std::endl;
}

