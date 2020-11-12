#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define N 10
int disposizioniripetute(int pos,int k,int n, char* val, char* sol , int count);

int main() {
    char alfabeto[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int k=2; //fornito dall'utente
    int n=10;
    int count=0;
    char* sol=malloc(n*sizeof(char));
    count=disposizioniripetute(0,3,26,alfabeto,sol,count);
    printf("Le soluzioni sono %d",count);
    free(sol);
    return 0;
}

int disposizioniripetute(int pos,int k,int n, char* val, char* sol , int count)
{
    int i=0;
    if(pos>=k)
    {

        for(i=0;i<k;i++)
            printf("%c",sol[i]);

            printf("\n");
        return count+1;
    }
    for(i=0;i<n;i++) {
        sol[pos] = val[i];
        count = disposizioniripetute(pos + 1, k, n, val, sol, count);
    }
    return count;
}