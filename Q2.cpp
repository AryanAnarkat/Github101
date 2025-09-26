#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int c;
cin>>c;
for(int i=0;i<c;i++){int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++){
cin>>array[i];}
std::sort(array,array+n);
int s;
s=abs(array[1]-array[0]);
for(int i=0;i<n/2-1;i++){s=max(s,abs(array[2*i]-array[2*i+1]));
}
cout<<s<<endl;

}}