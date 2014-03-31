#include <stdio.h>
int main(void)
{
    int no;
    printf("出席番号を入力してください:\n");
    scanf("%d",&no);
    switch (no) {
    case 1:
    case 3:
    case 4:
        printf("男性\n");
        break;
    case 2:
        printf("女性\n");
        break;
    default:
        printf("そんな人はいない\n");
        break;
    }
}
