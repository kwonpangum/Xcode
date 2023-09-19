//
//  A2Idea_Advanced.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/08/28.
//

#include "A2Idea_Advanced.h"

void printAddress(void)
{
    int a = 10;
    int *pa = &a;
    *pa = 20;
    printf("%d\n", a);
    printf("%p\n", &a);
}

void ptr_sum(void)
{
    int a = 20;
    int b = 20;
    
    int *ptr_a = &a;
    int *ptr_b = &b;
    
    int sum = *ptr_a + *ptr_b;
    printf("%d\n", sum);
}

void scanf_ptr(void)
{
    int a;
    int *ptr_a = &a;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", ptr_a);
    
    printf("포인터를 이용한 정수는 %d입니다.\n", *ptr_a);
}

void sum_ptr(void)
{
    int a, b, tot;
    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_tot = &tot;
 
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", ptr_a, ptr_b);
    
    *ptr_tot = *ptr_a + *ptr_b;
    
    printf("두 정수의 합 : %d \n", *ptr_tot);
    
    double avg;
    double *ptr_avg = &avg;
    
    *ptr_avg = *ptr_tot / 2.0;
    
    printf("두 정수의 평균 : %.1lf \n", *ptr_avg);
}

void const_ptr(void)
{
    int a = 10, b = 20;
    const int *ptr_a = &a;
    
    printf("변수 a 값 : %d\n", *ptr_a);
    ptr_a = &b;
    printf("변수 b 값 : %d\n", *ptr_a);
    ptr_a = &a;
    a = 20;
    printf("변수 a 값 : %d\n", *ptr_a);
}

static void sub_swap_ptr(int *pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void swap_ptr(void)
{
    int a, b;
    printf("input two integers : ");
    scanf("%d %d", &a, &b);
    
    printf("Two integers are %d, %d\n", a, b);
    
    sub_swap_ptr(&a, &b);
    
    printf("Two integers are %d, %d\n", a, b);
}

static void sub_line_up(double *pa, double *pb)
{
    double tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void line_up(void)
{
    double max, mid, min;
    printf("input 3 float numbers : ");
    scanf("%lf %lf %lf", &max, &mid, &min);
    
    if (max < mid)
        sub_line_up(&max, &mid);
    if (max < min)
        sub_line_up(&max, &min);
    if (mid < min)
        sub_line_up(&mid, &min);
    
    printf("lined-up numbers : %.1lf, %.1f, %.1lf\n", max, mid, min);
}

void line_up_ver2(void)
{
    double a, b, c, d;
    printf("Input 4 float numbers : ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    if (a < b)
        sub_line_up(&a, &b);
    if (a < c)
        sub_line_up(&a, &c);
    if (a < d)
        sub_line_up(&a, &d);
    if (b < c)
        sub_line_up(&b, &c);
    if (b < d)
        sub_line_up(&b, &d);
    if (c < d)
        sub_line_up(&c, &d);
    
    printf("lined-up numbers : %.1lf, %.1f, %.1lf, %.1lf\n", a, b, c, d);
}

void arr_1(void)
{
    int arry[5];
    
    arry[0] = 'A';
    arry[1] = 'B';
    
    for (int i = 0; i < sizeof(arry)/sizeof(arry[0]); ++i)
    {
        printf("%p, %d\n", arry + i, *(arry + i));
    }
}

void arr_ptr(void)
{
    int arry[5] = { 2, 3, 4 };
    
    int * p_arry = arry;

    for (int i = 0; i < sizeof(arry) / sizeof(arry[0]); ++i)
        printf("%d", *(p_arry++));
    printf("\n");
}

void arr_ptr_2(void)
{
    int arry[5] = {};
    
    int * p_arry = arry;
    
    printf("정수 5개를 입력하세요 : ");
    
    for (int i = 0; i < sizeof(arry)/sizeof(arry[0]); ++i)
    {
        scanf("%d", p_arry+i);
        //p_arry++;
    }
    
    p_arry = arry;  // 포인터 재정렬
    
    for (int i = 0; i < sizeof(arry)/sizeof(arry[0]); ++i)
    {
        printf("%d", *(p_arry++));
    }
    printf("\n");
}

static void sub_print_arr_ptr(int *arry, int sz)
{
    for (int i = 0; i < sz; ++i)
    {
        printf("%d \t", *(arry + i));
    }
    printf("\n");
}

void print_arr_ptr(void)
{
    int arry[5] = {};
    
    printf("정수 5개를 입력하세요 : ");
    
    int sz = sizeof(arry)/sizeof(arry[0]);
    for (int i = 0; i < sz; ++i)
    {
        scanf("%d", arry + i);
    }
    
    sub_print_arr_ptr(arry, sz);
}

static void sub_arry_max(int * arry, int sz)
{
    int max = arry[0];
    printf("Tmp max in arry is   : %d\n", max);
    
    for (int i = 1; i < sz; ++i)
    {
        if (max < arry[i])
            {
                max = arry[i];
            }
    }
    printf("MAX value in arry is : %d\n", max);
}

void arry_max(void)
{
    int arry[5] = {4, 100, 20, 43, 51};
    
    int sz = sizeof(arry) / sizeof(arry[0]);
    
    sub_arry_max(arry, sz);
}

static void input_nums(int *lotto_nums)
{
    printf("로또 번호를 입력하세요. : ");
    for (int i = 0; i < 6; ++i)
    {
        scanf("%d", lotto_nums + i);
    }
}

static void print_nums(int *lotto_nums)
{
    for (int i = 0; i <6; ++i)
    {
        printf("%d ", *(lotto_nums + i));
    }
}

void lotto(void)
{
    int lotto_nums[6];
    
    input_nums(lotto_nums);
    print_nums(lotto_nums);
}

void getchar_putchar(void)
{
    printf("문자를 입력하세요 : ");
    int ch = getchar();
    
    putchar(ch);
    putchar('\n');
}

void arry_address(void) // p.347
{
    char fruit[7] = "apple";
    
    printf("%p\n", fruit);

}

void gets_fgets(void) // p354
{
    printf("문자열을 입력하세요. 난 fgets()입니다. : ");
    char str[10];
    fgets(str, sizeof(str), stdin);
    puts(str);
    fputs(str, stdout);
}

void arry_2D_2(void)
{
    int ary[4] = { 1, 2, 3, 4 };
    int ary2[4] = { 5, 6, 7, 8 };
    int ary3[4] = { 9, 10, 11, 12 };
    
    int *pary[3] = { ary, ary2, ary3 };
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%5d", pary[i][j]);
        }
        printf("\n");
    }
}
