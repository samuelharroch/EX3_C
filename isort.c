#include <stdio.h>
#define N 50
int shift_element(int* arr, int i)
{
   int *ptr = arr+i-1;
   while(ptr>=arr){
       *(ptr+1)=*ptr;
       ptr--;
   }

    return 0;

}

int insertion_sort(int* arr , int len)
{
    int *p = arr;
    int *p1;
    int i;
    int count;
   
    for(i=1; i<len; i++){
       
        p1=p;
        p++;
       
        count=0;
       
        while(p1>=arr && *(p)<*(p1)){
            count++;
            p1--;
        }
        if(count>0){
            int temp= *p;
            p1++;
            shift_element(p1,count);
            *(p-count)=temp;
        }
       
    }
   
    return 0;
}

int main()
{
   
   int i=0;
   int arr[N];
   int *p= arr;
 
   while(i<N){
       scanf("%d", p);
       
       p++;
       i++;
   }
 
 
 
   insertion_sort(arr,N);
   p=arr;
   
   for(i=0; i<N; i++){
       if(i==(N-1)){
            printf("%d", *(p++));
       }else{ printf("%d,", *(p++));
       }
      
       
   }

    return 0;
}

    
