#include <iostream>
#include "pessoa.hpp"
#include "aluno.hpp"
#include "professor.hpp"
#include "curso.hpp"
#include "disciplina.hpp"
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	Curso c;
	Professor p;
	Aluno a;
	Disciplina d;
	
	string nomePessoa, enderecoPessoa, titulacaoProf, cursoProf, nomeCurso, nomeDisciplina;
	int matriculaAluno, CH;
	
	int aux = -1;
	int x = 0, i;
	
	cout << "Digite o nome do curso/faculdade: ";
	getline(cin, nomeCurso);
	c.setNomeCurso(nomeCurso);
	
	cout << endl << "	CURSO - " << nomeCurso;
	
	c.menu();
	
	while(aux != 0)
	{
		cout << endl << "Opção: ";
		cin >> aux;
		cout << endl;
		cin.ignore();
		
		if(aux == 1)
		{
			cout << "---------------------------------------------------------" << endl;
			cout << "	CADASTRO DE PROFESSOR" << endl << endl;
			
			cout << "Digite o nome: ";
			getline(cin, nomePessoa);
	
			cout << "Digite o endereco: ";
			getline(cin, enderecoPessoa);
	
			cout << "Digite o titulo: ";
			getline(cin, titulacaoProf);
	
			cout << "Digite o curso: ";
			getline(cin, cursoProf);
			
			p.setNomePessoa(nomePessoa);
			p.setEnderecoPessoa(enderecoPessoa);
			p.setTitulacaoProf(titulacaoProf);
			p.setCursoProf(cursoProf);
				
			c.cadastrarProfessor(p);
			
			cout << endl << "Professor cadastrado." << endl;
			cout << "---------------------------------------------------------" << endl;
		}
		
		if(aux == 2)
		{
			cout << "---------------------------------------------------------" << endl;
			cout << "	CADASTRO DE ALUNO" << endl << endl;
			
			cout << "Digite o nome: ";
			getline(cin, nomePessoa);
			
			cout << "Digite o endereço: ";
			getline(cin, enderecoPessoa);
			
			cout << "Digite a matrícula: ";
			cin >> matriculaAluno;
			cin.ignore();
			
			a.setNomePessoa(nomePessoa);
			a.setEnderecoPessoa(enderecoPessoa);
			a.setMatriculaAluno(matriculaAluno);
			
			c.cadastrarAluno(a);
			
			cout << endl << "Aluno cadastrado." << endl;
			cout << "---------------------------------------------------------" << endl;
		}
		
		if(aux == 3)
		{
			cout << "---------------------------------------------------------" << endl;
			cout << "	CADASTRO DE DISCIPLINA" << endl << endl;
			
			cout << "Digite o nome da disciplina: ";
			getline(cin, nomeDisciplina);
			
			cout << "Digite a carga horária da disciplina: ";
			cin >> CH;
			cin.ignore();
			
			d.setNomeDisciplina(nomeDisciplina);
			d.setCH(CH);
			
			c.cadastrarDisciplina(d);
			
			cout << endl << "Disciplina cadastrada." << endl;
			cout << "---------------------------------------------------------" << endl;	
		}
		
		if(aux == 4)
		{
			c.ListaDeProfessores(i);
		}
		
		if(aux == 5)
		{
			c.ListaDeAlunos(i);
		}
		
		if(aux == 6)
		{
			c.ListaDeDisciplinas(i);
		}
		
		if(aux == 0)
		{
			cout << endl << endl << "		Finalizando..." << endl;
		}
		
		else
		{
			cout << "Opção inválida, digite novamente." << endl;
		}
	}


	

}
