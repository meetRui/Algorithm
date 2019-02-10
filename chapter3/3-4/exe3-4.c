// exercise 3-4
// created by rui on 19-02-10
// Periodic Strings, UVa 455

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int N;
char str[100];
int divisor[100]; // divisor of strlen(str)
int count; // the number of divisor of strlen(str)

int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void getDivisor(int n) {
    count = 0;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            divisor[count++] = i;
            divisor[count++] = n / i;
        }
    }
    qsort(divisor, count, sizeof(int), cmp);
}

int cmpStr(int n) {
    int tmp = 1;
    for(int i = 1; i < strlen(str)/n; i++) {
        for(int j = 0; j < n; j++) {
            int ptr = i * n + j;
            if(str[ptr] != str[ptr-n]) {
                tmp = 0;
                break;
            }
        }
    }
    return tmp;
}

int getPeriod() {
    for(int i = 0; i < count; i++) {
        int j = divisor[i];
        if(cmpStr(j))
            return j;
    }
    return -1;
}

int main() {
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    
    scanf("%d", &N);
    while(N--){
        scanf("%s", str);
        memset(divisor, 0, sizeof(int) * 100);
        getDivisor(strlen(str));
        printf("%d\n", getPeriod());
        if(N) printf("\n");
    }
    return 0;
}
