// exercise 1-7, is Leap Year?
// created by rui on 19-02-08

#include<stdio.h>

int main() {
    int year;
    while(scanf("%d", &year)) {
        if((year % 4 == 0 && year % 100 != 0) || 
        year % 400 == 0) {
            printf("yes\n");
        } else printf("no\n");
    }

    return 0;
}