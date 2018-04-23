#include <stdio.h>
#include <stdlib.h>
long some(long n, long m);

int main(int argc, char *argv[])
{
    long n = atoi(argv[1]);
    long m = atoi(argv[2]);
    printf("%ld\n",some(n,m));
    return 0;
}

long some(long n, long m){
    if (n==1 || m==1) {
        return 1;
    }else{
        return some(n-1,m) + some(n,m-1)+ some(n-1,m-1);
    }
}
