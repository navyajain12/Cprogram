//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int n, i, num;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &num);
    
    int low = 0, high = n - 1, mid, f = 0;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == num) {
            printf("Found at index %d\n", mid);
            f = 1;
            break;
        } else if (arr[mid] < num) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (f==0) {
        printf("Not Found\n");
    }
    
    return 0;
}
