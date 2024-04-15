
#include <iostream> 
using namespace std; 
  
int MaxCount(int (&arr)[10]) 
{ 
    int n = 10;
    int maxcount = 0; 
    int element; 
    for (int i = 0; i < n; i++) { 
        int count = 0; 
        for (int j = 0; j < n; j++) { 
            if (arr[i] == arr[j]) 
                count++; 
        } 
  
        if (count > maxcount) { 
            maxcount = count; 
            element = arr[i]; 
        } 
    } 
  
    return element; 
} 
  

int main() 
{    
    int arr[10] = {}; 
    cout<<"Enter Array of 10 Elements";
    for(int i=0; i<10;i++){
    	cin>>arr[i];
	}
	cout<<"Display Array";
	for(int i=0; i<10;i++){
		cout<<arr[i]<<", ";
	}
	cout<<endl;
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << MaxCount(arr); 
    return 0; 
} 
  
