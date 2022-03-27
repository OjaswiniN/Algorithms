#include<iostream>
#include<vector>
using namespace std;

void counting_sort(int a[],int n){ 
    // Largest Element
    int largest =-1;
	for(int i=0;i<n;i++){
		largest =max(largest,a[i]);
	}
	// create a count array
	
	vector<int> freq(largest+1,0);
	// update the freq array
	
		for(int i=0;i<n;i++){
			freq[a[i]]++;
		}
		// put back the elements from freq into orginial array
		int j=0;
		for(int i=0;i<=largest;i++){
			while(freq[i]>0){
			a[j]=i;
			freq[i]--;
			j++;
		}
	}
	return ;
}

int main()
{
	int arr[]={10,15,12,6,4,3,10,8};
	int n = sizeof(arr)/sizeof(int);
	counting_sort(arr,n);
	for(int i=0;i<n;i++){
	   cout<<arr[i]<< " ";
	}
	return 0;
}
