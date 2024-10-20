// given an array, WAP to print the frequency of all the number 
#include<stdio.h>
#include<limits.h>
int main(){ 
    // given array
    int arr[]={3,5,3,7,98,56,34,56,78,45,68,4,3,4,4,5,6,67,7,7,7,8,8,3,3,3};

    // counting size of given array
    int size = sizeof(arr)/sizeof(arr[0]);

    // num for storing numbers, freq for storing freq, idx is just representing index of num and freq 
    int num[size], freq[size], idx = 0, count = 0;
    
    for(int i = 0; i<size; i++) {
        count = 0;
        int copyNum = arr[i];
        for(int j = 0; j<size; j++) {
            if(copyNum == arr[j] && arr[j] != INT_MIN) {
                count++, arr[j] = INT_MIN;
            }
        }
        if(count != 0) num[idx] = copyNum, freq[idx] = count, idx++;
    }
    for(int i = 0; i<idx; i++) printf("%d's frequency is : %d \n",num[i],freq[i]);
}