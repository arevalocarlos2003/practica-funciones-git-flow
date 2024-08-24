#include <iostream>

const int kSize = 3;

struct Person{
  std::string id;
  std::string name;
  double grades[kSize];
};

// Crear funcion para imprimir structs persona
void PrintPersonData(struct Person person);

// Crear funcion para llenar structs persona
void FillPersonFromKeyBoard(struct Person person);

int main()
{

  return 0;
}