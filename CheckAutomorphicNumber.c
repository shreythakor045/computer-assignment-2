#include <stdio.h>
int main() {
    int n,sq; scanf("%d",&n); sq=n*n;
    int temp=n,flag=1;
    while(n>0){
        if(n%10!=sq%10) flag=0;
        n/=10; sq/=10;
    }
    if(flag) printf("Automorphic");
    else printf("Not Automorphic");
    return 0;
}
