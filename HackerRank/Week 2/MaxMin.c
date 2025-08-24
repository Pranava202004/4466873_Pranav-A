#include <stdio.h>
#include <stdlib.h>

// compare function for qsort
int cmpfunc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int maxMin(int k, int arr[], int n) {
    qsort(arr, n, sizeof(int), cmpfunc);

    int min_unfairness = arr[k-1] - arr[0];
    for (int i = 1; i <= n - k; i++) {
        int unfairness = arr[i + k - 1] - arr[i];
        if (unfairness < min_unfairness) {
            min_unfairness = unfairness;
        }
    }
    return min_unfairness;
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", maxMin(k, arr, n));
    return 0;
}
