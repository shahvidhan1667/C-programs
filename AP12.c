#include <stdio.h>
int main() {
    int arr[11] = {1,2,3,4,5,6,7,8,9,10}; int pos, num, i;
    printf("Enter position (0-10) and number: ");
    scanf("%d %d", &pos, &num);
    for (i=10; i>pos; i--) arr[i] = arr[i-1];
    arr[pos] = num;
    for(i=0;i<11;i++) printf("%d ", arr[i]);
    return 0;
}
