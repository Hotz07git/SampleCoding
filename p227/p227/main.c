#include <stdio.h>
int count; /*グローバル変数*/
int countfunc(void); /*プロトタイプ宣言*/

int main(void)
{
    countfunc();
    count = 10;
    countfunc();
    countfunc();
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n",count);
    return count;
}
