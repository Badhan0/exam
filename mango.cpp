#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int A[] = {1, 3, 5, 7}; 
    int B[] = {8, 6, 4, 2}; 
    int n = sizeof(B) / sizeof(B[0]); 
    int m = sizeof(A) / sizeof(A[0]);
    int a=m+n;
    int C[a];
    
    for (int i = 0, j = 0, k = 0; k < a;) {
    if (A[i] < B[j])
      C[k++] = A[i++];
    else
      C[k++] = B[j++];
  }
  sort(C, C + a);
  for (int k = 0; k < a; k++) {
    cout<<C[k];
  }
}
