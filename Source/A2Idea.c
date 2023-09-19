//
//  A2Idea.c
//  A2Idea
//
//  Created by Pangum Kwon on 2023/08/23.
//

#include "A2Idea.h"

void charToAscii(void)
{
    printf("문자를 입력하세요. : ");
    char ch;
    scanf("%c", &ch);
    printf("%c의 아스키코드는 %d입니다.\n", ch, ch);
}

void compareInts(void)
{
    int res, a, b;
    printf("두 정수를 입력하세요. : ");
    scanf("%d %d", &a, &b);
    res = a > b;
    printf("%d는 %d보다 큽니다(true:1/false:0) : %d\n", a, b, res);
}

void compareInts2(void)
{
    int res, a, b;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    res = (a == b);
    printf("%d와 %d는 같습니다(참:1, 거짓:0) %d\n", a, b, res);
}

void conditional(void)
{
    int a, b;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    
    int max = (a > b) ? a : b;
    printf("최대값은 %d 입니다.\n", max);
    
    int min;
    (a > b) ? (min = b) : (min = a);
    printf("최소값은 %d 입니다.\n", min);
}

void doubleToTime(void)
{
    while(1) {
        printf("시간을 실수 단위로 입력하세요. (예) 3.76 : ");
        double time;
        scanf("%lf", &time);
        double tmp = time;
        
        if (time >= 0) {
            
            int hour, min, sec;
            
            hour = (int)time;
            
            time -= hour;
            time *= 60;
            min = (int)time;
            
            time -= min;
            time *= 60;
            sec = (int)time;
            
            printf("%.2lf는 %d시 %d분 %d초입니다.\n", tmp, hour, min, sec);
            break;
        } else {
            printf("잘 못 입력하셨습니다.\n");
        }
    }
}

void ifelse(void)
{
    printf("가슴 둘레를 입력하세요 : ");
    int chest;
    scanf("%d", &chest);
    
    char size;
    if (chest >= 100) {
        size = 'L';
    } else if (90 <= chest && chest < 100) {
        size = 'M';
    } else {
        size = 'S';
    }
    printf("가슴 사이즈는 %c 입니다. \n", size);
}

void swich_case(void)
{
    printf("정수를 입력하세요 : ");
    int num;
    scanf("%d", &num);
    int res = num % 3;
    switch(res)
    {
        case 0:
            printf("참\n");
            break;
        default:
            printf("거짓\n");
            break;
    }
}
void decToAscii(void)
{
    printf("암호를 입력하세요 : ____\b\b\b\b");
    char password[5] = {0};
    
    scanf("%s", password);
    //printf("%c\n", password[1]);
    //printf("%s\n", password);
    
    for (int i=0; i<128; ++i) // decToAscii
    {
        printf("%d = \"%c\" \t", i, i);
        if (i%5 == 0) printf("\n");
    }
}

void primeNumber(void)
{
    printf("정수를 입력하세요 : ");
    int num;
    scanf("%d", &num);
    
    printf("%d 이하의 소수: \n", num);
    //int cnt = 0;
    for (int i=2; i<=num; ++i) {
        int is_prime = 1; // true
        
        for (int j=2; j<= i/2; ++j) {
            if (i % j == 0) {
                is_prime = 0; // false
                break; // 더 이상 확인할 필요 없음
            }
        }
        if (is_prime) {
            printf("%d ", i);
            //++cnt;
            //if (cnt % 5 == 0) printf("\n");
        }
    }
    printf("\n");
}

int sum(int x, int y)
{
    return x + y;
}

double average(double a, double b)
{
    double res = (a + b)/2.0;
    return res;
}

double centiToMeter(int a)
{
    double res = a * 0.01;
    return res;
}

void subject_mean(void)
{
    int scores[5];
    int total = 0;
    double avg;
    int cnt = sizeof(scores)/sizeof(scores[0]);
                                    
    for (int i=0; i < cnt; ++i)
    {
        printf("%d/5 점수를 입력하세요 : ", i+1);
        scanf("%d", &scores[i]);
    }
        
    for (int i=0; i < cnt; ++i) printf("%4d", scores[i]);
    
    printf("\n");
    
    for (int i=0; i < cnt; ++i) total += scores[i];
    
    avg = (double)total/cnt;
    
    printf("평균 : %.1lf\n", avg);
}

void str_arry(void)
{
    char str[10] = "apple";
    
    printf("문자열을 입력하세요 : ");
    scanf("%s", str);
    //printf("%c\n", str[4]);
    printf("%s\n", str);
}

void str_cpy(void)
{
    char str[10] = "cat";

    // str = "tiger";
    // 이렇게 하면 안됩니다요~ "문자열 배열"은 한번 선언되면 바꿀 수가 없어요.
    // 왜냐하면 문자열의 길이가 다를 수 있기 때문입니다.
    // 그래서 string.h에 있는 strcpy()를 써야 해요.
    
    strcpy(str, "tiger1");
    printf("%s\n", str);
    
    char str1[40] = "rabbit";
    
    strcpy(str, str1);
    printf("%s\n", str);

}

void fgets_puts(void)
{
    char str[80];
    printf("문자열을 입력하세요 : ");
    // gets(str);
    // 'gets' is deprecated: This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of gets(3), it is highly recommended that you use fgets(3) instead.
    
    fgets(str, sizeof(str), stdin);
    
    printf("문자열은 다음과 같습니다. : ");
    
    puts(str);
    
    //printf("%s", str);
}
