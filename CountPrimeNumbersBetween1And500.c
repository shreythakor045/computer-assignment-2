#include <stdio.h>
int main() {
    int count=0;
    for(int n=2;n<=500;n++){
        int f=1;
        for(int i=2;i<=n/2;i++) if(n%i==0) f=0;
        if(f) count++;
    }
    printf("%d",count);
    return 0;
}
