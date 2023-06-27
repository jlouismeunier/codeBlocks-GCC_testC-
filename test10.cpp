#include<iostream>
using namespace std;
const int N=10;

int main()
{
int t[N],i,V;
bool trouve;

for(i=0;i<N;i++){
    cout<<"Tapez un entier ";
    cin>>t[i];}
cout<<"Tapez la valeur de V : ";
cin>>V;
trouve=false;
i=0;

while(!trouve && i<N)
if(t[i]==V)trouve=true;
else i++;
if(trouve) cout<<"La valeur V se trouve dans le tableau"<<endl;
else cout<<"La valeur V ne se trouve pas dans le tableau"<<endl;

cin.get();
return 0;
}

