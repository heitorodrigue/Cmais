/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std; 


int main()
{
    string nome1,nome2;
    int idade1,idade2;
    double media;
    
    cout<<"Dados primeira pessoa: "<<endl;
    cout<<"Nome: ";
    getline(cin,nome1);
    cout<<"Idade: ";
    cin>>idade1;
    
    cout<<"Dados segunda pessoa: "<<endl;
    cout<<"Nome: ";
    cin.ignore(INT_MAX, '\n'); 
    getline(cin, nome2);
    cout<<"Idade: ";
    cin>>idade2;
    
    media=(idade1+idade2)/2.0;
    
    cout<<"A media das idades de "<<nome1<<" e de "<<nome2<<
    " é:"<<media;
    
    
    return 0;
}