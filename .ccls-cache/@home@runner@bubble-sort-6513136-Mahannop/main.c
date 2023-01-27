#define N 6
#include <stdio.h>
#include "sorting.h"
#include <stdlib.h> 
/* int main() {
  int a[N]={3,2,6,7,3,1};
  bubbleSort(a,N); 
   //insertion(a,N);
   //selectionSort(a,N); 
 return 0;
} */
int main(int argc,char *argv[]) {
    int *a,j=0,*prime; //minus name of file 
    int n = argc-1; 
    a = (int*)malloc(sizeof(int)*n); 
    prime = (int*)malloc(sizeof(int)*n); 
    for(int i=0;i<n;i++) {
       a[i] = atoi(argv[i+1]); 
       if(isprime(a[i])) { 
          prime[j] = a[i]; 
          j++;  
        } //copy array 
      }
    if(j == 0) printf("no prime\n"); 
    else { 
    display(prime,j); 
    bubbleSort(prime,j);
    display(prime,j);  //after sorting 
    } 
  return 0; 
}