#include<iostream>
using namespace std;
int sqr(int x){

int z=x*x;
return z;

}

int main(){
int n;
int a=0;
cout<<"enter the first no:- ";
cin>>n;
cout<<"the numbers are: "<<endl;
for(int i=n;i<=n+5;i++){
    cout<<i<<endl;
}
cout<<"their squares are respectively:-5"<<endl;
while(a<6){
int y=sqr(n);
cout<<y<<endl;;
n++;
a++;
}
    return 0;
}