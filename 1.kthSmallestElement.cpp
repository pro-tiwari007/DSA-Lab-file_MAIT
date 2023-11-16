#include<iostream>
#include<climits>
using namespace std;

void printArray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<*(arr+i);
        if(i<size-1){
            cout<<" , ";
        }
    }
    cout<<endl;
}

void sorting(int arr[],int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
       for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       }
    }
 }

int main(){
    int arr[]={1,15,12,19,7,9,3,34,11,21,13,17,24};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cout<<"Given array is: "<<endl;
    printArray(arr,n);
    cout<<endl;

    cout<<"Enter the smallest index to be found: ";
    cin>>k;

    cout<<"After Sorting, the elements of given array are:"<<endl;

    sorting(arr,n);

    printArray(arr,n);
    if(k==1){
        cout<<"\nThe 1st smallest element is: "<<arr[0]<<endl;
    }
    else if(k==2){
        cout<<"\nThe 2nd smallest element is: "<<arr[1]<<endl;
    }

    else if(k==3){
        cout<<"\nThe 3rd smallest element is: "<<arr[2]<<endl;
    }
    else{
    cout<<"\nThe "<<k<<"th smallest element is: "<<arr[k-1]<<endl;
    }
 return 0;}
