//
//  fingingPassword.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/08/25.
//

#include "findingPassword.h"

void findingPassword(void)
{
    printf("암호를 입력하세요 : ____\b\b\b\b");
    char password[10] = {0};
    scanf("%s", password);
    
    // 패스워드 자릿수 찾기
    int count = 0;
    for (int i = 0; i < sizeof(password) / sizeof(password[0]); ++i)
    {
        if (password[i] != '\0') count++;
    }
    
    int i, j;
    char so_password[sizeof(password)];

    for (i = 0; i < count ; ++i)
    {
        for (j = 0; j < 128 ; ++j)
        {
            while (password[i] != (char)j) {
                ++j;
                printf("%c\t", j);
            }
        }
        printf("\n%d번째 자리의 암호는 %c입니다.\n", i, j-1);
        so_password[i] = j-1;
    }
    printf("=================================\n");
    printf("암호는 %d 자리입니다.\n", count);
    printf("암호는 %s 입니다.\n", so_password);
    printf("=================================\n");
}
