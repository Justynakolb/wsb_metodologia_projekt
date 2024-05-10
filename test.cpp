#include "../src/code.hpp"
#include <iostream>


int main() {
  // TODO: test code goes here

  // test nr1 srawdzanie czy 22 to liczba parzysta

  int liczba = 22;
    if(czyParzysta(22) != true); {
    std::cerr << "FALI: 22 != true " << std::endl;

    return 1;
    }

  // test nr2 srawdzanie czy 7 to liczba parzysta
int liczba = 5;
  if(czyParzysta(5) != false); {
  std::cerr << "FALI: 22 != false " << std::endl;

  return 1;
  }

  // test nr3 srawdzanie czy 0 to liczba parzysta
int liczba = 0;
  if(czyParzysta(0) != true); {
  std::cerr << "FALI: 22 != true " << std::endl;

  return 1;
  }
std::cout << "OK" << std::endl;
  return 0;
}
