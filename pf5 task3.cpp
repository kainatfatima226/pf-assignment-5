#include<iostream>
using namespace std;
int main(){
int i;
int number;
cout<<"Enter a number:"<<endl;
cin>>number;
for(int i=1;i<=10;i++){
    cout<<number<<"x"<<i<<"="<<number*1<<endl;
}
return 0;
}