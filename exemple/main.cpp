#include <iostream>
#include "XSave.hpp"

#define EXEMPLE_1 0
#define EXEMPLE_2 1

int main(int argc, char *argv[])
{ (void) argc; (void) argv;
  XSave<XSAVE_BYTE> email_db("email.xs");

#if EXEMPLE_1
  // email_db.addData("jhon_001", "jhon@gmail.com");
  std::cout << email_db.getData("jhon_001") << std::endl;
  std::cout << email_db.getData("julio_003") << std::endl;

#else
  //email_db.addArrayData("cars", {"BMW", "Ferrarie", "Jeep"});
  for(auto &i : email_db.getArrayData("cars"))
    std::cout << i << std::endl;
#endif

  return EXIT_SUCCESS;
}