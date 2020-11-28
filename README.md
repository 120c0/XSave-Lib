# XSave-Lib 1.0.0
Esse projeto foi feito para o iniciante ter noção básica de banco de dados. Aproveitem :)

Como usar:
Tipo para usar o banco de dados: XSave(const char*)

xsave.add(std::string, std::string):
  Esse é para adicionar uma chave e o valor, ou seja
  xsave.add("Pedro", "18");
  Aqui a chave "Pedro" tem um valor guardado ("18")

xsave.getData(std:;string) ou xsave[std::string]:
  Coloque a chave que o valor está armazenado, ou seja
  xsave.getData("Pedro") //Output: 18
  xsave["Pedro"] //Output: 18

xsave.clear():
  Obviamente limpa o banco de dados

Pronto, o básico dele, é apenas para ter noção de banco de dados.
