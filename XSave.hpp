#ifndef XSAVE
#define XSAVE

#include <fstream>
#include <map>
#include <iostream>
#include <cstring>

class XSave final {
public:
	//Construtor
	XSave(const char*);
	//Função para recarregar os dados
	void reload();
	//Função para adicionar um novo elemnto
	void add(std::string, std::string);
	//Função para pegar a valor dentro do "map" definido
	const std::string getData(std::string);
	std::string operator[](std::string);
	//Funçao que limpa dados do arquivo
	void clear() const;
private:
	void __create_file(const char*);
	//Função para carregar os dados
	void __load_file(const char*);
	//Variavel do nome do arquivo
	const char* filename;
	//Tipo "map" onde armazena o par dos valores
	std::map<std::string, std::string> data;
};

#endif