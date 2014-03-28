#include <stdio.h>

int main(void)
{
    int score = 0;
    
    do{
        if (score != 0)
        printf("点数は0~100の間の値を入力してください\n");
        printf("点数を入力してください\n");
        scanf("%d", &score);
    }while (score <0||score>100);
    printf("入力された点数%d\n",score);
    return 0;
}