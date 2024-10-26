#include<iostream>
using namespace std;
int main(){
int sum=0;
int i;
int num,marks;
cout<<"enter number of subject";
cin>>num;
for(i=1;i<=num;i++){
cout<<"enter the marks:";
cin>>marks;
sum= sum+marks;
}
float average=sum/num;
cout<<"average:"<<average<<endl;
if(average>=90 && average<=100){
cout<<"grade A+";
}
else if(average>=80 && average<=90){
cout<<"grade A";
}
else if(average>=70 && average<=80){
cout<<"grade B";
}
else if(average>=60 && average<=70){
cout<<"grade c";
}
else{
cout<<"grade F";
}
return 0;
}