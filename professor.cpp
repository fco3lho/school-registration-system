#include "professor.hpp"
using namespace std;

Professor::Professor():Pessoa()
{
	this->titulacaoProf = "";
	this->cursoProf = "";
}

Professor::Professor(string titulacaoProf, string cursoProf, string nomePessoa, string enderecoPessoa)
					: Pessoa(nomePessoa, enderecoPessoa)
{
	this->titulacaoProf = titulacaoProf;
	this->cursoProf = cursoProf;
}

void Professor::setTitulacaoProf(string titulacaoProf)
{
	this->titulacaoProf = titulacaoProf;
}

string Professor::getTitulacaoProf()
{
	return titulacaoProf;
}

void Professor::setCursoProf(string cursoProf)
{
	this->cursoProf = cursoProf;
}

string Professor::getCursoProf()
{
	return cursoProf;
}

//
//
//

void Professor::print()
{
	Pessoa::print();
	cout << "Titulação: " << titulacaoProf << endl;
	cout << "Curso: " << cursoProf << endl;
}


