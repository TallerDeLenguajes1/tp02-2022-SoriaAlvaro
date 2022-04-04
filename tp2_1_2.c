#include <stdio.h>
#include <time.h>

#define N 20

int main (){
    srand(time(NULL));
    int i;
    double vt[N], *p;
    p = vt;
    for(i=0; i < N; i++){
       *p = 1+rand()%100;
        printf("%0.3lf      ", *(p++));
    }

    return 0;
}
