#include <stdio.h>
#include <stdlib.h>

unsigned long list[50][50];
unsigned long some(unsigned long n, unsigned long m);

int main(int argc, char *argv[])
{
    unsigned long n = atoi(argv[1]);
    unsigned long m = atoi(argv[2]);
    some(n,m); 
    printf("%lu",list[n][m]);
    return 0;

}

unsigned long some(unsigned long n, unsigned long m){
    unsigned long s;
    unsigned long f1, f2, f3;

    if(n==1 || m==1){
        s=1;
    }
    else{
        if(list[n-1][m]==0) f1 = some(n-1,m);
        else f1 =  list[n-1][m];

        if(list[n][m-1]==0) f2 = some(n,m-1);
        else f2 = list[n][m-1];

        if(list[n-1][m-1]==0) f3 = some(n-1,m-1);       
        else f3 = list[n-1][m-1];

        s = f1 + f2 + f3;
    }
    list[n][m] = s;
    list[m][n] = s;
    return list[n][m];
}
