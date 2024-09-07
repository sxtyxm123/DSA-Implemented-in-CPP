#include <iostream> 
     using namespace std; 
 
     void rotateArray(int arr[], int n, int d) { 
         int temp[d]; 
         for (int i = 0; i < d; i++) 
             temp[i] = arr[i]; 
         for (int i = d; i < n; i++) 
             arr[i - d] = arr[i]; 
         for (int i = 0; i < d; i++) 
             arr[n - d + i] = temp[i]; 
     } 
 
     void printArray(int arr[], int size) { 
         for (int i = 0; i < size; i++) 
             cout << arr[i] << " "; 
         cout << endl; 
     } 
 
     int main() { 
         int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
         int n = sizeof(arr) / sizeof(arr[0]); 
         int d = 2; 
         rotateArray(arr, n, d); 
         printArray(arr, n); 
         return 0; 
     }