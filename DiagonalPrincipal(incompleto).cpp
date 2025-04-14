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
    int N, cont;
    int mat[N][N];
   cout<<"Qual a ordem da matriz: "<< endl;
   cin>> N;
    for(int i=0; i<N; i++){
        for(int j=0; i<N; j++){
            cout<<"Elemento["<<i<<","<<j<<"]:"<<endl;
            cin>>mat[i][j];
        }
    }
    
    cont=0;
    for(int i=0; i<N; i++){
        for(int j=0; i<N; j++){
         if(mat[i][j]<0){
             cont++;
         }   
        }
    }
    cout<<"Quantidade de negativos: "<<cont;
    return 0;
}