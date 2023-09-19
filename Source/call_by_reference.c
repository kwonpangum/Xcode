//
//  call_by_reference.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/09/10.
//

#include <stdio.h>

void sum_ten(int *);

int main(int argc, const char * argv[])
{
    int a = 10;
    
    sum_ten(&a);
    
    printf("%d", a);
}

void sum_ten(int *pa)
{
    *pa = *pa + 10;
}
