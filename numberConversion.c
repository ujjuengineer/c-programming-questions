#include<stdio.h>
#include<math.h>
int fun(char ch) {
    int dig = ch - '0'; // if ch is any number then it will convert it into int

    for(char ph = 'A'; ph<='Z'; ph++) {
        if(ch == ph) return (ph - 'A' + 10);
    }

    for(int i = 0; i<=9; i++){
        if(i == dig) return dig;
    }

    return 0;
}
int main(){
    int base1, base2, num2[50];
    char num1[50];

    printf("\nenter the base and number : ");
    scanf("%d %s",&base1,num1);
    
    printf("\nenter the base that you want to convert : ");
    scanf("%d",&base2);

    // counting number of characters in num1
    int count = 0;
    while(num1[count] != '\0') count++;

    // converting it into decimal
    int decimalNum = 0;
    for(int i = 0; i<count; i++) {
        decimalNum += fun(num1[i]) * pow(base1,count-i-1);
    }
    printf("%d\n",decimalNum);
    // converting into base2
    int idx = 0;
    while(decimalNum != 0) {
        num2[idx++] = (decimalNum % base2);
        decimalNum /= base2;
    }
    printf("(%s)%d --> (",num1,base1);
    for(int i = idx-1; i>=0; i--) printf("%d",num2[i]);
    printf(")%d\n",base2);

}