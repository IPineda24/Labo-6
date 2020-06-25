#include<iostream>;
using namespace std;

int main(){

    int array[200],n=200;
    int i=0;
    for ( i = 200; i >= 1 ; i--)
    {
       array[i] = n--;
       if (array[i]%2==1)
       
           cout<< array[i] <<", ";
       
       
    }


 }