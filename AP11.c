#include <stdio.h>
int main() {
    int arr[11] = {0}; int i, n = 10, num;
    printf("Enter new number: ");
    scanf("%d", &num);
    arr[0] = num;
    for(i=1;i<=n;i++) arr[i] = i;
    for(i=0;i<=n;i++) printf("%d ", arr[i]);
    return 0;
}
