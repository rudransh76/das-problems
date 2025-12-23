#include <stdio.h>
#define MAX 100
void traverse(int arr[], int n) {
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insert(int arr[], int *n, int pos, int val) {
    if (*n >= MAX) {
        printf("Array overflow!\n");
        return;
    }
    for (int i = *n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    (*n)++;
    printf("Inserted successfully!\n");
}
void delete(int arr[], int *n, int pos) {
    if (*n <= 0) {
        printf("Array underflow!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Deleted successfully!\n");
}
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array sorted successfully!\n");
}
int main() {
    int arr[MAX], n, choice, pos, val, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while (1) {
        printf("\n------ MENU ------\n");
        printf("1. Traverse\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Sort\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                traverse(arr, n);
                break;
            case 2:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert(arr, &n, pos, val);
                break;
            case 3:
                printf("Enter position (0 to %d): ", n-1);
                scanf("%d", &pos);
                delete(arr, &n, pos);
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &key);
                pos = linearSearch(arr, n, key);
                if(pos != -1)
                    printf("Element found at index %d\n", pos);
                else
                    printf("Element not found\n");
                break;
            case 5:
                bubbleSort(arr, n);
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
