/*
    Autor   : Francis
    Data    : 02/09/2022
    Programa: Calculadora simples em C++ para CMD

    @branch calc-1.0
    @commit Insere codigo da calculadora no main()
    @description Incluimos os cabecalhos, declaramos os prototipos das funcoes e criamos o codigo para aceitar entradas do usuario na calculadora do main()
*/


#include <iostream>
#include <stdlib.h>
using namespace std;

int Add_Num(int, int);
int Sub_Num(int, int);
int Mul_Num(int, int);
int Div_Num(int, int);

// @branch main
// @commit Cria prototipo Is_Div()
bool Is_Div(int, int);

// @branch main
// @commit Cria prototipo Is_Major()
bool Is_Major(int, int);

// @branch main
// @commit Cria prototipo Is_Minor()
bool Is_Minor(int, int);

// @branch main
// @commit Cria prototipo Is_Equals()
bool Is_Equal(int, int);

// @branch main
// @commit Cria prototipo Is_Diff()
bool Is_Diff(int, int);

// @branch main
// @commit Cria prototipo Is_Number()
bool Is_Number(int, int);

// @branch main
// @commit Cria prototipo Is_Char()
bool Is_Char(int, int);


// @branch main
// @commit Atualiza o main com a nova versao
// @description O repositorio principal agora contem a versao mais recente da calculadora 1.0
int main(void){
    int op, num1, num2, res;
    char rep = 's';

    while(rep == 's'){
        system("ECHO OFF");
        system("CLS");
        cout << "Escolha uma operacao:" << endl << endl;
        cout << "1. Adicao" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "4. Divisao" << endl;
        cin >> op;

        if(op >= 1 && op <= 4){
            cout << endl;
            cout << "Primeiro Numero: ";
            cin >> num1;
            cout << "Segundo Numero: ";
            cin >> num2;
            switch(op){
                case 1: res = Add_Num(num1, num2); break;
                case 2: res = Sub_Num(num1, num2); break;
                case 3: res = Mul_Num(num1, num2); break;
                case 4: res = Div_Num(num1, num2); break;
                default: break;
            }

            cout << endl << "O resultado e : " << res << endl;
        }else{
            cout << "Operacao Invalida!" << endl;
        }
        cout << "Tentar novamente? (s/n)";
        cin >> rep;
    }

    return 0;    
}

/*
    @branch calc-0.1
    @commit Cria funcao de soma Add_Num()
    @description Esta funcao espera x e y como parametros e retorna um inteiro do calculo de x + y
*/
int Add_Num(int x, int y){
    return x + y;
}

/*
    @branch calc-0.2
    @commit Cria funcao de subtracao Sub_Num()
    @description Esta funcao espera x e y como parametros e retorna um inteiro do calculo de x - y
*/
int Sub_Num(int x, int y){
    return x - y;
}

/*
    @branch calc-0.3
    @commit Cria funcao de multiplicacao Mul_Num()
    @description Esta funcao espera x e y como parametros e retorna um inteiro do calculo de x * y
*/
int Mul_Num(int x, int y){
    return x * y;
}

/*
    @branch calc-0.4
    @commit Cria funcao de divisao Div_Num()
    @description Esta funcao espera x e y como parametros e retorna um inteiro do calculo de x / y
*/
int Div_Num(int x, int y){
    return x / y;
}

/*
    @branch calc-1.1
    @commit Cria funcao divisivel Is_Div()
    @description Esta funcao espera x e y como parametros e retorna um booleano do calculo de x % y
*/
bool Is_Div(int x, int y){
    return (x % y) == 0;
}

/*
    @branch calc-1.2
    @commit Cria funcao maior que Is_Major()
    @description Esta funcao espera x e y como parametros e retorna um booleano do calculo de x > y
*/
bool Is_Div(int x, int y){
    return x > y;
}

/*
    @branch calc-1.3
    @commit Cria funcao menor que Is_Minor()
    @description Esta funcao espera x e y como parametros e retorna um booleano do calculo de x < y
*/
bool Is_Minor(int x, int y){
    return x < y;
}

