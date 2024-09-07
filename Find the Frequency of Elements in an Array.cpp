    #include <iostream>
    #include <unordered_map> 
     using namespace std; 
 
     void findFrequency(int arr[], int n) { 
         unordered_map<int, int> freq;
         for (int i = 0; i < n; i++) { 
            freq[arr[i]]++; 
         } 
 
         for (auto it : freq) { 
             cout << it.first << " occurs " << it.second << " times" << endl; 
         } 
     } 
 
     int main() { 
         int arr[] = {1, 2, 2, 3, 3, 3, 4, 5}; 
         int n = sizeof(arr) / sizeof(arr[0]); 
         findFrequency(arr, n); 
         return 0; 
     }