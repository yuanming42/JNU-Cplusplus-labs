#include <stdio.h>
int main()
{
    int i, a[10];
    for(i = 1; i <= 10; ++i)  //段错误理由：数组下标从0开始，最大为9，不存在a[10]，数组下标越界
        a[i] = 0;
    return 0;
}
//修正：数组下标从0开始，最大下标为数组长度减一