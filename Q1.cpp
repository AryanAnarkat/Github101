#include <iostream>
using namespace std;
int main(){
int c;
cin>>c;
for(int i=0;i<c;i++){
long int n,a=0,b=0,c=0;
    cin>>n;
int array[n];
for(int i=0;i<n;i++){cin>>array[i];
if(array[i]==-1)a=a+1;
if(array[i]==0)b=b+1;}
c=c+b;


if(a%2==1){c=c+2;}
cout<<c<<endl;
}}