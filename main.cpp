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

// @branch main
int Add_Num(int, int);
int Sub_Num(int, int);
int Mul_Num(int, int);
int Div_Num(int, int);

// @commit Cria prototipo Is_Div()
bool Is_Div(int, int);

// @commit Cria prototipo Is_Major()
bool Is_Major(int, int);

// @commit Cria prototipo Is_Minor()
bool Is_Minor(int, int);

// @commit Cria prototipo Exponencial()
bool Exponencial(int, int);

// @commit Cria prototipo Unknown()
bool Unknown(int);

// @commit Cria prototipo Routh_Hurwitz()
float Routh_Hurwitz(float, float, float, float);

// @commit Cria ultimo prototipo de hoje LastPrototype()
bool LastPrototype(int);

// @commit Cria prototipo New_Function1()
void New_Function1();

// @commit Cria prototipo New_Function2()
void New_Function2();

// @commit Cria prototipo New_Function3()
void New_Function3();

// @commit Cria prototipo New_Function4()
void New_Function4();

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
bool Is_Major(int x, int y){
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

/*
    @branch calc-1.4
    @commit Cria funcao Exponencial()
    @description Esta funcao espera x e y como parametros e retorna um calculo de x ^ y
*/
bool Exponencial(int x, int y){
    return x ^ y;
}

/*
    @branch calc-1.5
    @commit Cria funcao Routh_Hurwitz()
    @description Esta funcao espera os floats a, b, c e d como parametros e retorna um calculo de (a * d) - (b * c) / c 
*/
float Routh_Hurwitz(float a, float b, float c, float d){
    return (a * d) - (b * c) / c;
}

/*
    @branch calc-1.6
    @commit Cria funcao New_Function1()
*/
void New_Function1(){

}

/*
    @branch calc-1.7
    @commit Cria funcao New_Function2()
*/
void New_Function2(){

}

/*
    @branch calc-1.8
    @commit Cria funcao New_Function3()
*/
void New_Function3(){

}

/*
    @branch calc-1.9
    @commit Cria funcao New_Function4()
*/
void New_Function4(){

}

/*
    @branch calc-1.10
    @commit Cria funcao New_Function5()
    @description Teste de commit da nova funcao
*/
void New_Function5(){

}

/*
    @branch calc-1.11
    @commit Cria funcao New_Function6()
    @description Teste de commit da nova funcao6
*/
void New_Function5(){

}

/*
    @branch calc-1.12
    @commit Cria funcao New_Function7()
    @description Teste de commit da nova funcao7
*/
void New_Function5(){

}

/*
    @commit Cria funcao New_Function8()
    @description Teste de commit da nova funcao8
*/
void New_Function8(){

}

/*
    @commit Cria funcao New_Function9()
    @description Teste de commit da nova funcao10
*/

/*
    @commit Cria funcao New_Function10()
    @description Teste de commit da nova funcao10
*/

/*
    @commit Cria funcao New_Function11()
    @description Teste de commit da nova funcao11
*/

/*
    @commit Cria funcao New_Function12()
    @description Teste de commit da nova funcao12
*/

/*
    @commit Cria funcao New_Function13()
    @description Teste de commit da nova funcao13
*/

/*
    @commit Cria funcao New_Function14()
    @description Teste de commit da nova funcao14
*/

/*
    @commit Cria funcao New_Function15()
    @description Teste de commit da nova funcao15
*/

/*
    @commit Cria funcao New_Function16()
    @description Teste de commit da nova funcao16
*/



