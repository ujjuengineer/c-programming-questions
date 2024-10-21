#include<stdio.h>
#include<limits.h>
#include<math.h>
int fun(int arr[], int maxi, int n) {
    for(int i = 0; i<n; i++) {
        if(maxi % arr[i] != 0) return 1;
    }
    return 0;
}

int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("enter your numbers : ");
    for(int i = 0; i<n; i++) scanf("%d",&arr[i]);

    // finding max element
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++) if(arr[i] > maxi) maxi = arr[i];
    // printf("%d\n",maxi);
    int i = 1, copyNum = maxi;
    // finding LCM
    while(fun(arr,maxi,n)) {
        maxi = copyNum * (i++);
        // printf("%d,",maxi);
    }
    printf("\nlcm of given inputs is : %d\n",maxi);
    return 0;
}