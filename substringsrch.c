#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[50];
    int i, j;
    printf("Enter main string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter substring: ");
    fgets(b, sizeof(b), stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] == b[0]) { 
            j = 0;
            while (b[j] != '\0' && a[i + j] == b[j]) {
                j++;
            }
            if (b[j] == '\0') { // reached end → match found
                printf("string found");
                return 0;
            }
        }
    }

    printf("not found");
    return 0;
}
