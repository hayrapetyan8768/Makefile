#include <iostream>
#include <vector>
#include "complex.h"

int main(){

int n;
    std:: cin >>n;
    complex mas[n];
  
       for (int i=0; i<n; i++)
     {
       std:: cin >>mas[i].real;
       std:: cin >>mas[i].img;
     }
    
   
   double* arr= new double [n];
    for(int i=0;i<n;i++){
        arr[i] = abs(mas[i]);
    }
    
    for (int i = 0; i < n;++i) {
           for (int j = 0; j < n-i-1;++j) {
               if (arr[j] > arr[j + 1]) {
                  int temp;
                   temp = arr[j];
                   arr[j] = arr[j + 1];
                   arr[j + 1] = temp;
               }
           }
        }

       for(int i=0;i<n;++i){
                  std:: cout << arr[i] << "\n";
             }

return 0;
}

