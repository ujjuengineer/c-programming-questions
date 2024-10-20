// printing lucas series

#include<stdio.h>
int main() {
    int n;
    printf("enter number of terms : ");
    scanf("%d",&n);

    int a = 1, b = 2, sum = 0;
    printf("%d,%d,",a,b);
    for(int i = 3; i<=n; i++) {
        sum = a + b;
        printf("%d,",sum);
        a = b, b = sum;
    }
}