#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

void findZigZagSequence(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmpfunc);

    int mid = (n - 1) / 2;   // FIX 1
    int temp = arr[mid];
    arr[mid] = arr[n-1];
    arr[n-1] = temp;

    int st = mid + 1;
    int ed = n - 2;          // FIX 2
    while (st <= ed) {
        temp = arr[st];
        arr[st] = arr[ed];
        arr[ed] = temp;
        st++;
        ed--;
    }

    for (int i = 0; i < n; i++) {
        if (i == n-1)
            printf("%d\n", arr[i]);
        else
            printf("%d ", arr[i]);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        findZigZagSequence(arr, n);
    }
    return 0;
}
