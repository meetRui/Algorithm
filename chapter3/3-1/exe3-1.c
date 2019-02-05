// exercise 3-1
// created by rui on 19-02-05
// Score, ACM/ICPC Seoul 2005, UVa 1585

#include<stdio.h>
#include<string.h> // for strlen()  function

int main()
{
    int line = 0;
    scanf("%d", &line);
    while(line--)
    {
        int contin_O = 0, score = 0;
        char str[100];
        scanf("%s", str);
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] == 'O')
            {
                score += (contin_O + 1);
                contin_O++; 
            } else if(str[i] == 'X')
            {
                contin_O = 0;
            } else {
                printf("error\n"); // for debug
            }
        }
        printf("%d\n", score);
    }
    return 0;
}
