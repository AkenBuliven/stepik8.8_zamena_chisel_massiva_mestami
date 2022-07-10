#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    
    int n;
    int i;
    int array[100];
    int k;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    k = n/2;
  
    for (i=k; i<n; i++)
    printf("%d ", array[i]);

    for (i=0; i<k; i++)
    printf("%d ", array[i]);
    
  return 0;
   
}

