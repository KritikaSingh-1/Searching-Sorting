#include<iostream>
using namespace std;

int swap(int arr[],int x,int y){
	int temp=arr[x];

	arr[x]=arr[y];
	arr[y]=temp;
	
}

int partition(int arr[],int l,int r){
	int pivot=arr[r];
	int i=l-1;//i denote the last number less than pivot
	int j;//traversing
	for( j=l;j<r;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i+1;
}

void QuickSort(int arr[],int l,int r){
	
	if(l<r){
		int pi=partition(arr,l,r);
		
		QuickSort(arr,l,pi-1);
		QuickSort(arr,pi+1,r);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	cout<<"Enter the array:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	cout<<"The sorted array is:";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
