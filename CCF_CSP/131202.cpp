// 2013-12, 02
// created by rui on 19-02-15
// ISBN号码

#include<cstdio>

char s[10];

int main() {
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &s[0],&s[1],&s[2],&s[3],&s[4],&s[5],&s[6],&s[7],&s[8],&s[9]);
    int ret = 0;
    for(int i = 0; i < 9; i++)
        ret += (s[i]-'0')*(i+1);
    ret %= 11;
    if(ret != 10) {
        if(ret == s[9]-'0') printf("Right\n");
        else {
            printf("%c-%c%c%c-%c%c%c%c%c-%c\n",
            s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],ret+'0');
        }
    } else {
        if(s[9] == 'X') printf("Right\n");
        else {
            printf("%c-%c%c%c-%c%c%c%c%c-X\n",
            s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8]);
        }
    }
    return 0;
}
