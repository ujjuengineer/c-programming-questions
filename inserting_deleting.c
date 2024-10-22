#include<stdio.h>
int main(){
    int arr[50],n;
    // taking input in array
    printf("enter the number of inputs : ");
    scanf("%d",&n);
    printf("enter the element of the array : ");
    
    for(int i = 0; i<n; i++) scanf("%d",&arr[i]);
    
    int choice;
    printf("IF you want to add any number in the list, press : 1\nIf you want to delete any index, press : 2\n");
    scanf("%d",&choice);

    // code for adding any number in the list 
    if(choice == 1) {
        int idx, num;
        printf("enter the position where you want to insert the new number : ");
        scanf("%d",&idx);
        printf("enter the number that you want to insert : ");
        scanf("%d",&num);

        for(int i = idx-1; i<=n; i++) {
            int temp = num;
            num = arr[i];
            arr[i] = temp;
        }
        for(int i = 0; i<=n; i++) printf("%d,",arr[i]);
    }
    // code for deleting any number from the list
    if(choice == 2) {
        int idx; // 1 2 2 3 4 
        printf("enter the element position that you want to delete : ");
        scanf("%d",&idx);

        for(int i = idx-1; i<n; i++) {
            arr[i] = arr[i+1];
        }
        arr[n-1] = '\0';
        int i = 0;
        while(arr[i] != '\0') printf("%d,",arr[i++]);
    }
}