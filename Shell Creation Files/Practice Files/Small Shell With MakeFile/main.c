#include <stdio.h>
#include <stdlib.h>
int main()
{
    // This pointer will hold the base address of the block created
    int* ptr;
    int n, i;
    // Get the number of elements for the array
    printf("Enter number of elements: ", n);
    scanf("%d",&n);
    // Dynamically allocate memory using malloc()
    ptr = (int*)calloc(n, sizeof(int));
    // Check if the memory has been successfully allocated by malloc
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } 
    else {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }

    ptr = (int*)realloc(ptr, n+5*sizeof(int));
    for (i = n; i < n+5; ++i) {
            ptr[i] = i + 1;
        }
    printf("\nThe elements of the array are: ");
        for (i = 0; i < n+5; ++i) {
            printf("%d, ", ptr[i]);
        }

    free (ptr);
    return 0;
}
