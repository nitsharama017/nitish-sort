/*
void selectionSort(int a[], int n) 
    a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
    n = sizeof(a)/ sizeof(a[0]);
   for (i = 0; i < n - 1; i++) 
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j
      temp = a[i]
      a[i] = a[min]
      a[min] = temp
   
*/
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n) {
   int min, temp;
   for (int i = 0; i < n - 1; i++) {
      min = i;
      for (int j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int main() {
   int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
   int n = sizeof(a)/ sizeof(a[0]);
   selectionSort(a, n);
   for (int i = 0; i < n; i++)
   cout<< a[i] <<" ";
   return 0;
}