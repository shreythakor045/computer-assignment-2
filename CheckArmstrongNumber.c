#include <stdio.h>
int main() {
    int n,sum=0,temp,d; scanf("%d",&n); temp=n;
    while(n>0){ d=n%10; sum+=d*d*d; n/=10; }
    if(sum==temp) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
