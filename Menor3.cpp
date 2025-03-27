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
    int x,y,z;
    
    cout<<"Primeiro valor: "<<endl;
    cin>>x;
    cout<<"Segundo valor: "<<endl;
    cin>>y;
    cout<<"Terceiro valor: "<<endl;
    cin>>z;
    if(x<y && x<z){
        cout<<"Menor:"<<x;
    }else if(y<z){
        cout<<"Menor:"<<y;
        }else{
            cout<<"Menor:"<<z;
        }
    
    
    
    
    return 0;
}