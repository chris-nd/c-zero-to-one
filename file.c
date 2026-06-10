#include <stdio.h>

int main() {

    // Pointeur de fichier de type FILE
    FILE *file1;
    file1 = fopen("file.txt", "w");
    fprintf(file1, "Hello World!\n");
    fclose(file1);

    FILE *file2;
    file2 = fopen("file.txt", "a");
    fprintf(file2, "Appended text!\n");
    fclose(file2);

    FILE *file3;
    file3 = fopen("file.txt", "r");
    char line[255];

    if(file3 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while(fgets(line, sizeof(line), file3)) {
        printf("%s", line);
    }
    fclose(file3);

    return 0;
}
