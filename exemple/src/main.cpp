#include <iostream>
#include "XSave.hpp"

int main()
{
  XSave data("nomes.dl");

  char a[256], v[256];

  std::cin.getline(a, 256);
  std::cin.getline(v, 256);

  data.addDataInfo(a, v);

  return EXIT_SUCCESS;
}
