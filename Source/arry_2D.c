//
//  arry_2D.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/09/11.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char animal[2][30];
    
    int count = sizeof(animal) / sizeof(animal[0]);
    
    for (int i = 0; i < count; ++i)
    {
        fgets(animal[i], 30, stdin);
    }
    
    for (int i = 0; i < count; ++i)
    {
        fputs(animal[i], stdout);
    }
        
    return 0;
}
