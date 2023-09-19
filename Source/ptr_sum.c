//
//  ptr_sum.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/09/12.
//

#include <stdio.h>

int * psum(int a, int b);

int main(int argc, const char * argv[])
{
    int * resp;
    
    resp = psum(10, 20);
    
    printf("%d\n", *resp);
}

int * psum(int a, int b)
{
    static int res;
    res = a + b;
    
    return &res;
}
