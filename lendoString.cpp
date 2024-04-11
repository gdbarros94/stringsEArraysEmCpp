#include <iostream>
#include <stdio.h>

int main() {
  // Exemplo 1: usando std::string

  std::string str;

  printf("Digite uma string (Exemplo 1): ");
  std::cin >> str;

  printf("A string digitada (Exemplo 1): %s\n", str.c_str());

  // Exemplo 2: usando char[100]

  char str2[100];

  printf("Digite uma string (Exemplo 2): ");
  scanf("%s", str2);

  printf("A string digitada (Exemplo 2): %s\n", str2);

  return 0;
}