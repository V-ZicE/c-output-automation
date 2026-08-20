#include <stdio.h>
#include <time.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write some calculated output to output.txt
    fprintf(file, "=== C PROGRAM OUTPUT REPORT ===\n");
    fprintf(file, "Status: Execution Successful\n");
    fprintf(file, "Calculation Result (12 * 8): %d\n", 12 * 8);

    fclose(file);
    printf("Output file generated successfully.\n");
    return 0;
}
