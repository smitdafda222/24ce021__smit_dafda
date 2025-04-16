#include <iostream>
using namespace std;

int recursiveSum(int *arr,int size){
    if(size==0)return 0;
    return arr[size-1]+recursiveSum(arr,size-1);
}

int iterativeSum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter "<<size<<" elements:\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int recSum=recursiveSum(arr,size);
    int iterSum=iterativeSum(arr,size);

    cout<<"\nRecursive Sum: "<<recSum<<endl;
    cout<<"Iterative Sum: "<<iterSum<<endl;

    cout<<"\smit dafda\n24CE021";
    return 0;
}
