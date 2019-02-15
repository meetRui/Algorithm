// 2013-12, 01
// created by rui on 19-02-15
// 出现次数最多的数

#include<cstdio>
#include<cstring>
int s[10001];

int main() {
    int n;
    while(~scanf("%d", &n)) {
        memset(s, 0, sizeof(int)*10001);
        int max_cnt = 0;
        int max_num = 0;
        int tmp = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &tmp);
            s[tmp]++;
        }
        for(int i = 1; i <= 10000; i++) {
            if(s[i] > max_cnt) {
                max_cnt = s[i];
                max_num = i;
            }
        }
        printf("%d\n", max_num);
    }
    return 0;
}
