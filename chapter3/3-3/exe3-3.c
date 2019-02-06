// exercise 3-3
// created by rui on 19-02-06
// Digit Counting, ACM/ICPC Danang 2007, UVa 1225

#include<stdio.h>
#include<string.h>

int count[10]; // count[n]: n appears count[n] times
int line;
int N; // when N = 6, the sequence of consecutive integers: 123456

void addCount(int i) {
    do
    {
        count[i % 10]++;
        i /= 10;
    } while (i != 0);
}

int main() {
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    scanf("%d", &line);
    while(line--){
        memset(count, 0, 10 * sizeof(int)); // set memoey byte by byte
        scanf("%d", &N);
        for(int i = 1; i < N+1; i++)
            addCount(i);
        
        printf("%d", count[0]);
        for(int i = 1; i < 10; i++)
            printf(" %d", count[i]);
        printf("\n");
    }
    return 0;
}
