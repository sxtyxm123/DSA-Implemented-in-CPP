    #include <iostream> 
     using namespace std; 
 
     int main() { 
         int arr[] = {10, 20, 4, 45, 99}; 
         int n = sizeof(arr) / sizeof(arr[0]); 
         int max = arr[0]; 
 
         for (int i = 1; i < n; i++) { 
             if (arr[i] > max) { 
                 max = arr[i]; 
             } 
         } 
 
         cout << "Largest element is " << max << 
endl; 
         return 0; 
     }
     