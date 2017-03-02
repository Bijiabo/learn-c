//
// Created by huchunbo on 2016/12/20.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* print_i(int);

int main(void)
{
    printf("hello,world.\n");
    for (int i = 0; i < 10; ++i) {
        printf("%s\n", print_i(i));
    }
    goto test;
    test:;
}

char* print_i(int i)
{
    char i_str = i + '0';
    char result[] = "the variable \"i\" is ";
    char *_result = malloc( sizeof(char) * strlen(result) );
    strcpy(_result, result);
    strcat(_result, &i_str);
    return _result;
}

char* get_x()
{
    char x[] = "I am X.";
    int x_length = strlen(x);
    char *s = (char *)malloc(sizeof(char)*x_length);
    strcpy(s, x);
    return s;
}