// exercise 3-2
// created by rui on 19-02-05
//Molar Mass, ACM/ICPC Seoul 2007, UVa 1586

#include<stdio.h>
#include<string.h>

char str[100]; // chemical symbol 
int T; // T test cases
int ptr; // position pointer to str
double n; // quantity number
double weight[128]; // Standard Atomic Weight

// return element number
int eleNum() {
    int ret;
    ptr++;
    if(ptr == strlen(str) || str[ptr] < '0' || str[ptr] > '9')
        ret = 1;
    else {
        ret = 0;
        while(ptr < strlen(str) && str[ptr] >= '0' && str[ptr] <= '9') {
            ret  = ret * 10 + (str[ptr] - 48);
            ptr++;
        }
    }
    return ret;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    weight['C'] = 12.01;
    weight['H'] = 1.008;
    weight['O'] = 16.00;
    weight['N'] = 14.01;

    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", str);
        ptr = n = 0;
        while(ptr < strlen(str)) {
            n += weight[str[ptr]] * eleNum();
        }
        printf("%.3f\n", n);
    }
    return 0;
}

