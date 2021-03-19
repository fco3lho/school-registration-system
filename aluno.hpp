#ifndef ALUNO_HPP
#define ALUNO_HPP
#include <iostream>
#include "pessoa.hpp"
using namespace std;

class Aluno : public Pessoa
{
	private:
		int matriculaAluno;		
		
	public:
		Aluno();
		
		Aluno(int matriculaAluno, string nomePessoa, string enderecoPessoa);
		
		void setMatriculaAluno(int matriculaAluno);
		int getMatriculaAluno();		
		
		void print();
};
#endif
