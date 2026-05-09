/*1. Construa um programa que leia dez números inteiros e identifique o maior número.*/

#include <iostream>
#include <locale>
using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");

    int n;
    int i = 1;
    int ma;

    for(i=1; i<=10; i++){

        cout<<"\nInforme um número qualquer: ";
        cin>>n;

        if(i == 1 || n > ma){
            ma = n;
        }
    }
    cout<<"\nO maior número é:"<<ma<<endl;
    return 0;
}