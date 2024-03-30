#include <iostream>

using namespace std;

int reinciar, senha, tipo;
float salariob, horaE, carga;
string nome, endereco, cpf, dataA, cargo;
float INSS = 0.08;
float IRRF = 0.12;


int main()
{

	cout << "****************************" << endl << "* CADASTRO DE FUNCIONARIOS *" << endl << "****************************" << endl;
	cout << "_____________________" << endl << "Login : Funcionario " << endl << "Senha : ";       // Pagina incial pode ser melhorada
	cin >> senha;


	cout << senha;

	if ((senha == 2023118898) || (senha == 2024121246) || (senha == 5050)) // Alterar para os RA Da Gente
	{
		cout << endl << "*********************" << endl << "* ACESSO AUTORIZADO *" << endl << "*********************" << endl;
		cout << "Vamos iniciar o seu cadastro :" << endl;
		system("pause");
		system("cls");

		cout << "===================" << endl << "    Cadastro " << endl << "===================" << endl << "Informe seu :" << endl;
		cout << "Nome [Joao_Silva]: "; cin >> nome; cout << endl;
		cout << "Endereco [Rua_Central_Numero]: "; cin >> endereco; cout << endl;
		cout << "CPF [111.111.111-11] : "; cin >> cpf; cout << endl;
		cout << "Data de adimissao [01/01/1001] : "; cin >> dataA; cout << endl;
		cout << "Tipo de Funcionario Digite [1] para Efetivo, [2] para Temporario ou [3] para Estagio : "; cin >> tipo; cout << endl;

		if (tipo == 1)
		{
			cargo = "Efetivo";
			cout << "EFETIVO SELECIONADO" << endl;
			cout << "Seu salario base [1300.80] : "; cin >> salariob; cout << endl;
			cout << "Horas Extra [2.5] [3] : "; cin >> horaE; cout << endl;

			cout << endl << "Certo vamos calcular seu salario : " << endl;
			system("pause");
			system("cls");

			float comisaoE = ((salariob / 220) * horaE);
			float salarioC = (salariob + comisaoE);
			float taxas = ((salariob * INSS) + (salariob * IRRF));


			cout << endl << "_________________________________________________________________________________________________";
			cout << endl << "| Empregado                  Cargo                                           RECIBO DE PAGAMENTO ";
			cout << endl << "| Nome : " << nome << "       " << cargo;
			cout << endl << "| Endereco :" << endereco << "                       Data de Admissao : " << dataA;
			cout << endl << "| CPF : " << cpf << "                                " << endl << "| ";
			cout << endl << "|________________________________________________________________________________________________";

			cout << endl << "|             Descricao             |  Referencia  |    Proventos     | Descontos ";
			cout << endl << "|SALARIO BASE                       |              |   " << salariob << "        |";
			cout << endl << "|HORA EXTRA                         |              |   " << comisaoE << "        |";
			cout << endl << "|INSS                               |    8.0%      |                  | " << salariob * INSS;
			cout << endl << "|IRRF                               |   12.0%      |                  | " << salariob * IRRF;
			cout << endl << "|___________________________________|______________|__________________|__________________________";
			cout << endl << "|                                                  |  Total Proventos | Total Descontos";
			cout << endl << "|                                                  |   " << salarioC << "        | " << taxas;
			cout << endl << "|                                                  |---------------------------------------------";
			cout << endl << "|                                                  | Valor Liquido =>  " << salarioC - taxas; 
			cout << endl << "|__________________________________________________|_____________________________________________";

			cout << endl << " Se deseja alterar algo digite [1] + Enter, Se deseja fechar o algoritmo digite [0] + Enter" << endl;
			cin >> reinciar;

			if (reinciar == 1)
			{
				system("cls"); // Limpar o Terminal
				return main(); // Reiniciar o Algoritmo
			}

		}

		if (tipo == 2) 
		{
			float dia;
			cargo = "Temporario";
			cout << "TEMPORARIO SELECIONADO" << endl;
			cout << "Seu salario base [1300.80] : "; cin >> salariob; cout << endl;
			cout << "Dias Trbalhados [25] [03] : "; cin >> dia; cout << endl;
			
			cout << endl << "Certo vamos calcular seu salario : " << endl;
			system("pause");
			system("cls");

			float salariot = ((salariob / 22) * dia);
			float taxas = ((salariot * INSS) + (salariot * IRRF));


			cout << endl << "_________________________________________________________________________________________________";
			cout << endl << "| Empregado                  Cargo                                           RECIBO DE PAGAMENTO ";
			cout << endl << "| Nome : " << nome << "       " << cargo;
			cout << endl << "| Endereco :" << endereco << "                       Data de Admissao : " << dataA;
			cout << endl << "| CPF : " << cpf << "                                " << endl << "| ";
			cout << endl << "|________________________________________________________________________________________________";

			cout << endl << "|             Descricao             |  Referencia  |    Proventos     | Descontos ";
			cout << endl << "|SALARIO BASE                       |   " << salariob << "    |                  |";
			cout << endl << "|DIAS TRABALHADOS                   |     "<< dia << "       |     " << salariot << "      | ";
			cout << endl << "|INSS                               |    8.0%      |                  | " << salariot * INSS;
			cout << endl << "|IRRF                               |   12.0%      |                  | " << salariot * IRRF;
			cout << endl << "|___________________________________|______________|__________________|__________________________";
			cout << endl << "|                                                  |  Total Proventos | Total Descontos";
			cout << endl << "|                                                  |   " << salariot << "        | " << taxas;
			cout << endl << "|                                                  |---------------------------------------------";
			cout << endl << "|                                                  | Valor Liquido =>  " << salariot - taxas;
			cout << endl << "|__________________________________________________|_____________________________________________";

			cout << endl << " Se deseja alterar algo digite [1] + Enter, Se deseja fechar o algoritmo digite [0] + Enter" << endl;
			cin >> reinciar;

			if (reinciar == 1)
			{
				system("cls"); // Limpar o Terminal
				return main(); // Reiniciar o Algoritmo
			}


		}

		if (tipo == 3)
		{ 
			cargo = "Estagiario";
			cout << "ESTAGIO SELECIONADO" << endl;

			cout << endl << "Certo vamos calcular seu salario : " << endl;
			system("pause");
			system("cls");


			salariob = 800;
			float taxas = salariob * IRRF;


			cout << endl << "_________________________________________________________________________________________________";
			cout << endl << "| Empregado                  Cargo                                           RECIBO DE PAGAMENTO ";
			cout << endl << "| Nome : " << nome << "       " << cargo;
			cout << endl << "| Endereco :" << endereco << "                       Data de Admissao : " << dataA;
			cout << endl << "| CPF : " << cpf << "                                " << endl << "| ";
			cout << endl << "|________________________________________________________________________________________________";

			cout << endl << "|             Descricao             |  Referencia  |    Proventos     | Descontos ";
			cout << endl << "|SALARIO BASE                       |              |       " << salariob << "        |";
			cout << endl << "|IRRF                               |   12.0%      |                  | " << salariob * IRRF;
			cout << endl << "|___________________________________|______________|__________________|__________________________";
			cout << endl << "|                                                  |  Total Proventos | Total Descontos";
			cout << endl << "|                                                  |       " << salariob << "        | " << taxas;
			cout << endl << "|                                                  |---------------------------------------------";
			cout << endl << "|                                                  | Valor Liquido =>  " << salariob - taxas;
			cout << endl << "|__________________________________________________|_____________________________________________";

			cout << endl << " Se deseja alterar algo digite [1] + Enter, Se deseja fechar o algoritmo digite [0] + Enter" << endl;
			cin >> reinciar;

			if (reinciar == 1)
			{
				system("cls"); // Limpar o Terminal
				return main(); // Reiniciar o Algoritmo
			}
		
		}
		
		
	}
	else
	{
		cout << endl << "*****************" << endl << "* ACESSO NEGADO *" << endl << "*****************" << endl;
		cout << endl << " Se deseja tentar relogar digite [1] + Enter Se deseja fechar o algoritmo digite [0] + Enter" << endl;
		cin >> reinciar;

		if (reinciar == 1)
		{
			system("cls"); // Limpar o Terminal
			return main(); // Reiniciar o Algoritmo
		}

	}

	return 0;
}