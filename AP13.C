#include <stdio.h>
int main() {
    int arr[11] = {1,2,3,4,5,6,7,8,9,10}; int num, i;
    printf("Enter new number: ");
    scanf("%d", &num);
    arr[10] = num;
    for(i=0;i<11;i++) printf("%d ", arr[i]);
    return 0;
}
