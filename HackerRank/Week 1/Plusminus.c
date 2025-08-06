#include <stdio.h>
int main(){
    int n,A[100],i;
    float pos=0,zeros=0,neg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        
    }
    for(i=0;i<n;i++){
        if(A[i]>0)
        {
            pos++;
        }
        else if(A[i]==0)
        {
            zeros++;
        }
        else
        {
            neg++;
        }
    }
    printf("%.3f\n%.3f\n%.3f", pos/n,neg/n,zeros/n);
}