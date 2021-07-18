#include <iostream>
#include "XSave.hpp"

int main(int argc, char *argv[])
{ (void) argc; (void) argv;
  XSave<XSAVE_BYTE> email_db("email.dl");

  std::cout << email_db.getData("jhon_0x01f");

  return EXIT_SUCCESS;
}