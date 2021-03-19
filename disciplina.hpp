#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP
#include <iostream>
using namespace std;

class Disciplina
{
	private:
		string nomeDisciplina;
		int CH;
		
	public:
		Disciplina();
		
		Disciplina(string nomeDisciplina, int CH);
		
		void setNomeDisciplina(string nomeDisciplina);
		string getNomeDisciplina();
		
		void setCH(int CH);
		int getCH();
		
};
#endif
