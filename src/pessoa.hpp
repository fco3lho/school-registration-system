#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
	private:
		string nomePessoa;
		string enderecoPessoa;
		
	public:
		Pessoa();
		
		Pessoa(string n, string end);
		
		void setNomePessoa(string nomePessoa);
		string getNomePessoa();
		
		void setEnderecoPessoa(string enderecoPessoa);
		string getEnderecoPessoa();
		
		void print();
};
#endif
