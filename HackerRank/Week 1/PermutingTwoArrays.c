#include <stdio.h>
void ao(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void dos(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int q;
    scanf("%d",&q);
    for (int i=0;i<q;i++){
        int k,n;
        int count=0;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[n],b[n];
        for (int j=0;j<n;j++){
            int r;
            scanf("%d",&r);
            a[j]=r;
        }
        ao(a, n);
        for (int j=0;j<n;j++){
            int r;
            scanf("%d",&r);
            b[j]=r;
        }
        dos(b, n);
        for (int j=0;j<n;j++){
            int sum=a[j]+b[j];
            if(sum>=k){
                count++;
            }
        }
        if(count==n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}