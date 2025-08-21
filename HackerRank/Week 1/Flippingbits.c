#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t temp = 0xFFFFFFFF;
    int n,i;
    uint32_t a;
    
    scanf("%d",&n);

    for(i = 0;i<n;i++)
    {
        scanf("%u",&a);
        printf("%u\n",a ^ temp);
    }
    return 0;
}