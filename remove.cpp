#include<iostream>
using namespace std;
int remove(int arr[],int a){
if(a==1||a==0){
return a;
}
int temp[a];
int j=0;
for(int i=0;i<a-1;i++){
    if(arr[i]!=arr[i+1])
    temp[j++]=arr[i];
    temp[j++]=arr[a-1];
    for(int i=0; i<j;i++)
    arr[i]=temp[i];
    return j;
}
}
int main(){
    int arr[]={11,13,11,12,13};
    int a=sizeof(arr)/sizeof(arr[0]);
    a = remove(arr,a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}