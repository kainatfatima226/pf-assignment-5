#include<iostream>
using namespace std;
int main(){
int i;
int j;
int sum=0;
cout<<"Enter a natural number:";
cin>>j;
for(i=1;i<=j;i++){
sum=sum+i;
cout<<sum<<endl;
}
return 0;
}