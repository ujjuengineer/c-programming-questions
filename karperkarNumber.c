// karperkar number
// 45<sub>2</sub> = 2025 -> 20+25 = 45 -> so its karperkar number 
/*
    input : 45
    * first square this number 
        n = 45 * 45 = 2025
    * reverse this number
        revDig = 5202
    * count number of digit 
        dig = 4
    * created a helper function that will take input of reversed number, first and last index and return
      the digits between first and last index 

    
*/

#include<stdio.h>
#include<math.h>

int helper(int n, int fi, int li){
    int copyNum = n / pow(10,fi); 
    int lenCount = fi;
    int returnDig = 0;
    while (lenCount < li) {
        int temp = copyNum % 10;
        returnDig *= 10;
        returnDig += temp;
        copyNum /= 10;
        lenCount ++;
    }
    return returnDig;
}

int main() {
    int num;
    printf("enter num : ");
    scanf("%d",&num);
    
    // squaring number
    int n = num*num;

    // reversing digit
    int revDig = 0, copyNum = n;
    while(copyNum != 0) {
        int temp = copyNum % 10;
        revDig *= 10;
        revDig += temp;
        copyNum /= 10;
    }

    // counting number of digit
    int len = (int) (log10(n) + 1);
    
    if(len % 2 == 0) {
        if(helper(revDig,0,len/2) + helper(revDig,len/2,len) == num) printf("%d is karperkar number.",num);
        else printf("%d is not a karperkar number",num);
    }
    else{
        if(helper(revDig,0,len/2) + helper(revDig,len/2,len) == num)
            printf("%d is karperkar number",num);
        else if(helper(revDig,0,(len/2)+1) + helper(revDig,(len/2)+1, len) == num)
            printf("%d is karperkar number",num);
        else printf("%d is not a karperkar number",num);
    }
}
