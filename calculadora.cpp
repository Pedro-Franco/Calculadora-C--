#include <iostream>
using namespace std;

int main (){
    for (int i=0; i<=1; i++){
    int opcao;
    float n1, n2;
    cout << "Calculadora: " << endl;
    cout << "O que deseja fazer" << endl;
    cout << "1 - Soma \n";
    cout << "2 - Subtracao \n";
    cout << "3 - Divisao \n";
    cout << "4 - Multiplicacao \n";
    cin >> opcao;

    cout << "------NUMEROS------"<< endl;
    cin >> n1 >> n2;
    cout << "-------------------" << endl;

    switch (opcao){
    case 1: 
        cout << "Resultado: " << n1 + n2 << endl << endl;
        break;

    case 2:
        cout << "Resultado: " << n1 - n2 << endl << endl;
        break;

    case 3:
        cout << "Resultado " << n1 / n2 << endl << endl;
        break;

    case 4:
        cout << "Resultado " << n1 * n2 << endl << endl;
        break;

    default:
        break;
    }
    }
    return 0;

}