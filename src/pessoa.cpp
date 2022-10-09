#include "pessoa.hpp"
using namespace std;

Pessoa::Pessoa()
{
	this->nomePessoa = "";
	this->enderecoPessoa = "";
}

Pessoa::Pessoa(string n, string end)
{
	nomePessoa = n;
	enderecoPessoa = end;
}

void Pessoa::setNomePessoa(string nomePessoa)
{
	this->nomePessoa = nomePessoa;
}

string Pessoa::getNomePessoa()
{
	return nomePessoa;
}

void Pessoa::setEnderecoPessoa(string enderecoPessoa)
{
	this->enderecoPessoa = enderecoPessoa;
}

string Pessoa::getEnderecoPessoa()
{
	return enderecoPessoa;
}

void Pessoa::print()
{
	cout << endl << "Nome: " << nomePessoa << endl;
	cout << "Endereço: " << enderecoPessoa << endl;
}
