// selection sort function module in C

void display(int a[],int n){

    int i;
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n) {
   int sorted = 0; 
   for(int k=n-1;k>0;k--) { 
      for(int i=0;i<k;i++) {
        if(a[i] > a[i+1]) {
           swap(&a[i],&a[i+1]); 
          sorted = 1;
        }
    }    
     if(sorted == 0) break; 
     display(a,n);
  } 
}
int isprime(int numpi) {
   int flag=0; 
    for(int i=2;i<numpi;i++) {
      if(numpi%i == 0) {
        flag = 1;
        break; 
      }
    }  
    if(flag == 0 && numpi!=1 && numpi!=0) return 1;
    else return 0; 
}




