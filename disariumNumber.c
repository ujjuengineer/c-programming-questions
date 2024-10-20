/*
WAP to check wether given number is a disarium number or not.

A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions is equal to the number itself.
e.g., 135, 518
*/

#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int copyNum = n, sum = 0;
    
    while(copyNum != 0) {
        int position = (int) (log10 (copyNum) + 1);
        int temp = copyNum % 10;
        sum += pow(temp, position);

        copyNum /= 10;
    }
    printf("%d", sum);
}