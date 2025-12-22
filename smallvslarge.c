#include <stdio.h>
#include <string.h>
int main() {
    char str[300];
    char smallest[300], largest[300];
    char temp[300];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    int firstWord = 1;

    while (1) {
         if ((str[i] >= 'A' && str[i] <= 'Z') ||(str[i] >= 'a' && str[i] <= 'z') ||(str[i] >= '0' && str[i] <= '9')) {
                 temp[j++] = str[i];
        } else {
            // Close current word when separator found
            if (j > 0) {
                temp[j] = '\0';

                if (firstWord) {
                    strcpy(smallest, temp);
                    strcpy(largest, temp);
                    firstWord = 0;
                } else {
                    if (strlen(temp) < strlen(smallest)) {
                        strcpy(smallest, temp);
                    }
                    if (strlen(temp) > strlen(largest)) {
                        strcpy(largest, temp);
                    }
                }
                j = 0; 
            }
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
