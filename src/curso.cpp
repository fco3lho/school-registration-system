#include <iostream>
#include <string>
#include "curso.hpp"
#define MAX 100
using namespace std;

//Construtor

Curso::Curso()
{
	this->nomeCurso = "";
	this->contProf = 0;
	this->contAl = 0;
	this->contD = 0;
	
	Professor x;
	Aluno y;
	Disciplina z;
	
	for(int i = 0; i < MAX; i++)
	{
		setProfessor(x, i);
		setAluno(y, i);
		setDisciplina(z, i);
	}	
}

//
//
//Getteres e Setteres da classe "curso"

void Curso::setNomeCurso(string nomeCurso)
{
	this->nomeCurso = nomeCurso;
}

string Curso::getNomeCurso()
{
	return nomeCurso;	
}


//
//
// Getteres e Setteres das outras classes

void Curso::setProfessor(Professor p, int i)
{
	this->p[i] = p;
}

Professor Curso::getProfessor(int i)
{
	return p[i];
}

void Curso::setAluno(Aluno a, int i)
{
	this->a[i] = a;
}

Aluno Curso::getAluno(int i)
{
	return a[i];
}

void Curso::setDisciplina(Disciplina d, int i)
{
	this->d[i] = d;
}

Disciplina Curso::getDisciplina(int i)
{
	return d[i];
}

//
//
//Metodos de cadastro

void Curso::cadastrarProfessor(Professor x)
{
	p[contProf].setNomePessoa(x.getNomePessoa());
	p[contProf].setEnderecoPessoa(x.getEnderecoPessoa());
	p[contProf].setTitulacaoProf(x.getTitulacaoProf());
	p[contProf].setCursoProf(x.getCursoProf());
		
	contProf = contProf + 1;	
}

void Curso::cadastrarAluno(Aluno y)
{
	a[contAl].setNomePessoa(y.getNomePessoa());
	a[contAl].setEnderecoPessoa(y.getEnderecoPessoa());
	a[contAl].setMatriculaAluno(y.getMatriculaAluno());
	
	contAl = contAl + 1;
}

void Curso::cadastrarDisciplina(Disciplina z)
{
	d[contD].setNomeDisciplina(z.getNomeDisciplina());
	d[contD].setCH(z.getCH());
	
	contD = contD + 1;
}

//
//
//Metodos de impressão

void Curso::ListaDeProfessores(int i)
{
	cout << "---------------------------------------------------------" << endl << endl;
	cout << "	LISTA DE PROFESSORES" << endl;
	
	for(i = 0; i < contProf; i++)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << p[i].getNomePessoa() << endl;
		cout << "Endereco: " << p[i].getEnderecoPessoa() << endl;
		cout << "Titulo: " << p[i].getTitulacaoProf() << endl;
		cout << "Curso: " << p[i].getCursoProf() << endl;
	}
	cout << "---------------------------------------------------------" << endl;
}

void Curso::ListaDeAlunos(int i)
{
	cout << "---------------------------------------------------------" << endl << endl;
	cout << "	LISTA DE ALUNOS" << endl;
	
	for(i = 0; i < contAl; i++)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << a[i].getNomePessoa() << endl;
		cout << "Endereço: " << a[i].getEnderecoPessoa() << endl;
		cout << "Matrícula: " << a[i].getMatriculaAluno() << endl;
	}
	cout << "---------------------------------------------------------" << endl;
}

void Curso::ListaDeDisciplinas(int i)
{
	cout << "---------------------------------------------------------" << endl << endl;
	cout << "	LISTA DE DISCIPLINAS" << endl;
	
	for(i = 0; i < contD; i++)
	{
		cout << "-----------------------------------" << endl;
		cout << "Nome: " << d[i].getNomeDisciplina() << endl;
		cout << "Carga horária: " << d[i].getCH() << endl;
	}
	cout << "---------------------------------------------------------" << endl;
}

//
//
//

void Curso::menu()
{
	cout << endl << "---------------------------------------------------------" << endl;
	cout << "		MENU" << endl << endl;
	cout << "Para cadastrar um novo professor, digite 1." << endl;
	cout << "Para cadastrar um novo alunor, digite 2." << endl;
	cout << "Para cadastrar uma nova disciplina, digite 3." << endl;
	cout << "Para imprimir a lista de professores, digite 4." << endl;
	cout << "Para imprimir a lista de alunos, digite 5." << endl;
	cout << "Para imprimir a lista de disciplinas, digite 6." << endl;
	cout << "Para finalizar o programa, digite 0." << endl;
	cout << "---------------------------------------------------------" << endl;
}
