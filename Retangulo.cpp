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
    double area,base,altura,perimetro, diagonal;
    cout<<"Base do retangulo: "<<endl;
    cin>>base;
    cout<<"Altura: "<<endl;
    cin>>altura;
    area= base * altura;
    perimetro= (base*2)+(altura*2);
    diagonal= sqrt(pow(base,2.0)+pow(altura,2.0));
    cout << fixed << setprecision(4)<< endl; 
    cout<<"Area:"<<area<<endl;
    cout<<"Perimetro:"<<perimetro<<endl;
    cout<<"Diagonal:"<<diagonal<<endl;

    return 0;
}