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
    int troca,soma, x, y;
   cout<<"Leia dois numeros: "<< endl;
   cin>> x >>y;
   if(x>y){
       troca=x;
       x=y;
       y=troca;
     }
     soma=0;
 for(int i =x + 1; i < y; i++){
     if(i % 2 != 0){
         soma= soma + i;
     }
 }
 cout<<"A soma dos impares é: "<< soma<< endl;
}