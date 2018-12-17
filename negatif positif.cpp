#include <iostream.h>
#include <conio.h>

using namespace std;

int main(){
int bil;

cout<<"Masukkan Bilangan yang akan dicek = ";
cin>>bil;

if (bil > 0)
   cout<<bil<<" adalah bilangan Positif";
else if (bil < 0)
   {
     cout<<bil<<" adalah bilangan Negatif";
   }
else if (bil==0)
    {
     cout<<"inputan salah";
   }
return 0;
}
