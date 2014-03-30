#include <stdio.h>
int main(void)
{
    int score;
    printf("点数を入力してください:\n");
    scanf("%d",&score);
    if (score > 100) {
        printf("点数が100より高いので修正します\n");
        score = 100;
    }
    printf("点数は%dです\n",score);
    return 0;
}