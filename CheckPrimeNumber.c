#include <stdio.h>
int main() {
    int n,flag=1; scanf("%d",&n);
    for(int i=2;i<=n/2;i++) if(n%i==0) flag=0;
    if(flag && n>1) printf("Prime");
    else printf("Not Prime");
    return 0;
}
