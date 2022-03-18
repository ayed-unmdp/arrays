#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sequential_search(int key, int a[], int n) {
    int i = 0;
    while ((i < n) && (a[i] != key)) {
        i++;
    }
    return i;
}

int sequential_sorted_search(int key, int a[], int n) {
    int i = 0;
    while ((i < n) && (a[i] < key)) {
        i++;
    }
    return (a[i] == key) ? i : n;
}

int binary_sorted_search(int key, int a[], int n) {
    int high = n - 1;
    int low = 0;
    int i = (high - low) / 2;
    while ((low < high) && (a[i] != key)) {
        if (key < a[i]) {
            high = i - 1;
        } else {
            low = i + 1;
        }
        i = low + (high - low) / 2;
    }
    return (a[i] == key) ? i : n;
}

