#include "disciplina.hpp"
using namespace std;

Disciplina::Disciplina()
{
	this->nomeDisciplina = "";
	this->CH = 0;
}

Disciplina::Disciplina(string nomeDisciplina, int CH)
{
	this->nomeDisciplina = nomeDisciplina;
	this->CH = CH;
}

void Disciplina::setNomeDisciplina(string nomeDisciplina)
{
	this->nomeDisciplina = nomeDisciplina;
}

string Disciplina::getNomeDisciplina()
{
	return nomeDisciplina;
}

void Disciplina::setCH(int CH)
{
	this->CH = CH;
}

int Disciplina::getCH()
{
	return CH;
}


//
//
//
