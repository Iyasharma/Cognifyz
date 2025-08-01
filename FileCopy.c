#include <stdio.h>

int main() {
    char sourceFile[100], destinationFile[100];
    FILE *source, *destination;
    char ch;

    // Ask the user for source and destination file names
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFile);

    // Open the source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destination = fopen(destinationFile, "w");
    if (destination == NULL) {
        printf("Cannot create destination file.\n");
        fclose(source);
        return 1;
    }

    // Read from source and write to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}
