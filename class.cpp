#include<iostream>
using namespace std;

int main (){
int arr[5]={1,2,3,4,5};
int index;
int a,b;
for(int i=0;i<5;i++){
    cout<< "array before editing"<<arr[i]<<endl;
}
cout<<"write the index of elemnt you want to delete"<<endl;
cin>>index;
cout<<"enter the element you want to insert"<<endl;
cin>>a;
cout<<"enter the index where you want to insert the element"<<endl;
cin>>b;
for (int i=5;i>b;i--){
     arr[i]=arr[i+1];
    arr[b]=a;
    }
for(int i=0;i<5;i++){
    cout<<arr[i];
}
return 0;
}