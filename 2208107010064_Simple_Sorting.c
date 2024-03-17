#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void generateRandomNumbers(int *array, int n);
void bubbleSort(int *array, int n);
void selectionSort(int *array, int n);
void insertionSort(int *array, int n);
void saveArrayToFile(int *array, int n, const char *filename);

int main() {
    // Maximum number of integers
    int max_numbers = 1000000;
    // Increment step for number of integers
    int step = 100000;
    // Initial number of integers
    int num_numbers = step;

    // Seed for random number generation
    srand(time(NULL));

    printf("+---------------------+----------------+-------------------+\n");
    printf("|   Jenis Algoritma   | Jumlah Bilangan| Waktu Eksekusi (ms)|\n");
    printf("+---------------------+----------------+-------------------+\n");

    while (num_numbers <= max_numbers) {
        // Allocate memory for the array
        int *array = (int *)malloc(num_numbers * sizeof(int));

        // Generate random numbers
        generateRandomNumbers(array, num_numbers);

        // Time measurement variables
        clock_t start, end;
        double cpu_time_used;

        // Bubble sort
        start = clock();
        bubbleSort(array, num_numbers);
        end = clock();
        cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC;
        printf("|      Bubble Sort    |   %10d   |   %15.2f   |\n", num_numbers, cpu_time_used);

        // Selection sort
        start = clock();
        selectionSort(array, num_numbers);
        end = clock();
        cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC;
        printf("|    Selection Sort   |   %10d   |   %15.2f   |\n", num_numbers, cpu_time_used);

        // Insertion sort
        start = clock();
        insertionSort(array, num_numbers);
        end = clock();
        cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC;
        printf("|    Insertion Sort   |   %10d   |   %15.2f   |\n", num_numbers, cpu_time_used);

        // Free allocated memory
        free(array);

        // Increment number of numbers
        num_numbers += step;
    }

    printf("+---------------------+----------------+-------------------+\n");

    return 0;
}

// Function to generate random numbers
void generateRandomNumbers(int *array, int n) {
    for (int i = 0; i < n; i++) {
        array[i] = rand();
    }
}

// Bubble sort implementation
void bubbleSort(int *array, int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

// Selection sort implementation
void selectionSort(int *array, int n) {
    int min_idx, temp;
    for (int i = 0; i < n-1; i++) {
        min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }
}

// Insertion sort implementation
void insertionSort(int *array, int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}