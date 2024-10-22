// given an array, WAP to print the frequency of all the number 
#include<stdio.h>
#include<limits.h>

int swap(int arr[],int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return 0;
}

int main(){ 
    // given array
    int arr[]={4,4,3,3,3,2,2,2,2,2,5,3,5,6,2,5,7,3,5,7,3,7,8,3,4,2};

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
    // sorting according to frequency
    // using bubble sort
    for(int i = 0; i<idx; i++) {
        int flag = 1;
        for(int j = 0; j<idx-1-i; j++) {
            if(freq[j] > freq[j+1]){
                swap(freq, j, j+1);
                swap(num, j, j+1);
                flag = 0;
            }
        }
        if(flag == 1) break;
    }
    for(int i = 0; i<idx; i++) printf("%d's frequency is : %d \n",num[i],freq[i]);
}