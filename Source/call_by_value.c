//
//  call_by_value.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/09/10.
//

#include <stdio.h>

int add_ten(int);

int main(int argc, const char * argv[])
{
    int a = 10;
    
    int b = add_ten(a);
    
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

int add_ten(int a)
{
    a = a + 10;
    return a;
}
