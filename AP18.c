#include <stdio.h>
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, val, i, found=0;
    printf("Enter value to search: ");
    scanf("%d", &val);
    for(i=0;i<10;i++){
        if(arr[i]==val){found=1; break;}
    }
    if(found)
        printf("Found at position %d", i);
    else
        printf("Not found");
    return 0;
}
