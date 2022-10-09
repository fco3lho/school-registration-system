#include "aluno.hpp"
using namespace std;

Aluno::Aluno():Pessoa()
{
	this->matriculaAluno = 0;
}

Aluno::Aluno(int matriculaAluno, string nomePessoa, string enderecoPessoa) 
			: Pessoa(nomePessoa, enderecoPessoa)
{
	this->matriculaAluno = matriculaAluno;
}

void Aluno::setMatriculaAluno(int matriculaAluno)
{
	this->matriculaAluno = matriculaAluno;
}

int Aluno::getMatriculaAluno()
{
	return matriculaAluno;
}

//
//
//

void Aluno::print()
{
	Pessoa::print();
	cout << "Matrícula: " << matriculaAluno << endl;
}
