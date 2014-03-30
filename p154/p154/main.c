#include <stdio.h>
int main(void)
{
    int suuti;
    printf("整数を入力してください:\n");
    scanf("%d",&suuti);
    if (suuti == 10){
        printf("入力された数値は10です\n");
    }else{
        printf("入力された数値は10ではありません\n");
    }
    return 0;
}
