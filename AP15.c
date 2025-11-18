#include <stdio.h>
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, pos, i;
    printf("Enter position to delete (0-9): ");
    scanf("%d", &pos);
    for (i=pos; i<9; i++) arr[i]=arr[i+1];
    arr[9]=0;
    for(i=0;i<10;i++) printf("%d ", arr[i]);
    return 0;
}
