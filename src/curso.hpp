#ifndef CURSO_HPP
#define CURSO_HPP
#include <iostream>
#include <string>
#include "pessoa.hpp"
#include "professor.hpp"
#include "aluno.hpp"
#include "disciplina.hpp"
#define MAX 100
using namespace std;

class Curso
{
	private:
		string nomeCurso;
		int contProf;
		int contAl;
		int contD;
		
		Professor p[MAX];
		Aluno a[MAX];
		Disciplina d[MAX];
		
		
	public:
		
		Curso();
		
		void setNomeCurso(string nomeCurso);
		string getNomeCurso();
		
		void setProfessor(Professor p, int i);
		Professor getProfessor(int i);
		
		void setAluno(Aluno a, int i);
		Aluno getAluno(int i);	
		
		void setDisciplina(Disciplina d, int i);
		Disciplina getDisciplina(int i);
		
		//
		//
		//
		
		void cadastrarProfessor(Professor x);
		void ListaDeProfessores(int i);
		
		void cadastrarAluno(Aluno y);
		void ListaDeAlunos(int i);
		
		void cadastrarDisciplina(Disciplina z);
		void ListaDeDisciplinas(int i);
		
		void menu();
			
};
#endif
