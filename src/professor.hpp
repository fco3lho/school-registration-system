#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP
#include <iostream>
#include "pessoa.hpp"
using namespace std;

class Professor : public Pessoa
{
	private:
		string titulacaoProf;
		string cursoProf;		
		
	public:
		Professor();
		
		Professor(string titulacaoProf, string cursoProf, string nomePessoa, string enderecoPessoa);
		
		void setTitulacaoProf(string titulacaoProf);
		string getTitulacaoProf();
		
		void setCursoProf(string cursoProf);
		string getCursoProf();
		
		void print();
		
};
#endif
