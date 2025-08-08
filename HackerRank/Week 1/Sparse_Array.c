#include <stdio.h>
#include <string.h>

int main(){
    int n1,n2,i,j,count;
    scanf("%d",&n1);
    char st1[n1][100];
    for(i=0;i<n1;i++){
        char c[100];
        scanf("%s",c);
        //st1[i]=c;
        strcpy(st1[i], c);
    }
    scanf("%d",&n2);
    char st2[n2][100];
    //char out[n2][100];
    for(i=0;i<n2;i++){
        char c[100];
        scanf("%s",c);
        strcpy(st2[i], c);
    }
    for(i=0;i<n2;i++){
        count=0;
        for(j=0;j<n1;j++){
            if (strcmp(st1[j], st2[i]) == 0){
                count++;
            }
        }
        printf("%d\n",count);
        //out[i]=count;
    }

   // printf("%s %s %s",st1[0],st1[1],st1[2]);
}