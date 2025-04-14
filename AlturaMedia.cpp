/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cont;
    double media, soma, perc;
   cout<<"Quantas pessoas serão digitadas: "<< endl;
   cin>> n;
 string nomes[n];
 int idades[n];
 double alturas[n];
    for(int i=0; i<n; i++){
        cout<<"Dados da "<<i+1<<" pessoa:"<<endl;
        cout<<"Nome: ";
        cin.ignore(INT_MAX,'\n');
        getline(cin, nomes[i]);
        cout<<"Idade: ";
        cin>>idades[i];
        cout<<"Altura: ";
        cin>>alturas[i];
    }
    soma=0;
    for(int i=0; i<n; i++){
        soma= soma + alturas[i];
    }
    media= soma/n;
    cout<<fixed<<setprecision(2);
    cout<<"ALtura media:"<<media<<endl;
    
    cont=0;
    for(int i=0; i<n; i++){
        if(idades[i]<16){
            cont++;
        }
    }
    perc = cont * 100.0/n;
    cout<<fixed<<setprecision(1);
    cout<<"Pessoas com menos de 16 anos: "<<perc<<"%"<<endl;
    
    for(int i=0; i<n; i++){
        if(idades[i]<16){
        cout<<nomes[i]<<endl;
        }
    }
    return 0;
}