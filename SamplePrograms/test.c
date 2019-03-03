#include <string.h>

void foobar(){
    int x;
    int y = x + 1; // warn: left operand is garbage
}

void test(){
    char tmp[30] = "Hello World!";
    char str[10];
    strcpy(str,tmp);
}

void foo(){
    char a[10];
    
    for(int i = 0; i <= 10; i++)
        a[i] = 0;
}

void bar(){
    int x = 5, y = 0;
    
    x = x/y;
}

int main()
{
    return 0;
}
