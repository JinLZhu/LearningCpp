/* 
 * 桶排序
 * 输入5 3 5 2 8
 * 输出排序
 */
#include <stdio.h>

int main()
{
    int a[11], i, j, t;
    t = 0;

    for(i=0;i<=10;i++){
        // 所有桶初始化为0
        a[i] = 0;
    }

    for(i=1;i<=5;i++){
        // 循环读入5个数字
        scanf("%d", &t);
        a[t]++;
    }

    for(i=0;i<=10;i++){
        for(j=1;j<=a[i];j++){
            printf("%d ", i);
        }
    }

    getchar();getchar();

    return 0;
}
