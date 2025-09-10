#include<stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first sorted array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second sorted array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int x = 0; 
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                x++;
                break; 
            }
        }
    }

    int arr3[x];
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k++] = arr1[i];
                break;
            }
        }
    }
    printf("Intersection: ");
    if (x == 0) {
        printf("No common elements\n");
    } else {
        for (int i = 0; i < x; i++) {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    return 0;
}
