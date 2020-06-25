#include<iostream>;
#include<stdlib.h>
#include <time.h>
using namespace std;

int Myarray(int a){
srand(time(NULL));
  int array[a];
   int total=0;
      cout<<"Los elementos son:"<<endl;
    for ( int i = 0; i <= a; i++)
    {
      int n=1+rand()%(101-1);
       array[i]=n;
           cout<< array[i] <<", ";
    }


      for ( int s = 0; s <= a; s++)
    {
      
    total += array[s];
         
    }

    
    float promedio =total/a;
     cout<<endl;
    cout<<"El promedio es:"<<endl;
 cout<<promedio<<endl;

 
}

int main(){
    cout<<"ingresar el largo del arreglo"<<endl;
    int a;
cin>>a;
Myarray(a);

 }