/*
    Autor   : Francis
    Data    : 02/09/2022
    Programa: Calculadora simples em C++ para CMD

    @branch main
    @commit Insere funcao main() vazia
    @description Comecaremos o desenvolvimento do codigo principal para chamar as outras funcoes
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int Add_Num(int, int);
int Sub_Num(int, int);
int Mul_Num(int, int);
int Div_Num(int, int);

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

