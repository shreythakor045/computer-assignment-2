#include <stdio.h>
int main() {
    int n,rev=0,temp; scanf("%d",&n); temp=n;
    while(n>0){ rev=rev*10+(n%10); n/=10; }
    if(temp==rev) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
