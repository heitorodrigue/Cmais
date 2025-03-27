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
    int x,y;
    
    cout<<"Digite dois mumeros: "<<endl;
    cin>>x>>y;
    do{
        if(x>y){cout<<"DECRESCENTE\n";}else{cout<<"CRESCENTE\n";}
        cout<<"Digite outros dois numeros"<<endl;
        cin>>x>>y;
        }while(x!=y);
    
    
    
    return 0;
}