 #include <iostream> 
     #include <set> 
     using namespace std; 
 
     void removeDuplicates(int arr[], int n) { 
         set<int> s(arr, arr + n); 
         for (int x : s) 
             cout << x << " "; 
         cout << endl; 
     } 
 
     int main() { 
         int arr[] = {1, 2, 2, 3, 4, 4, 5}; 
         int n = sizeof(arr) / sizeof(arr[0]); 
         removeDuplicates(arr, n); 
         return 0; 
     }