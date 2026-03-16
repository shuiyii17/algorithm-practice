/**
* @File    : acwing_5273.cpp
 * @Time    : 2026/03/16 16:23
 * @Author  : shuiyi
 * @IDE     : CLion
 * @Desc    : https://www.acwing.com/problem/content/5276/
 */

#include <stdio.h>
#include <string.h>

int main() {
    // 读入字符串
    char str[14], substr[4];
    while (scanf("%s %s", str, substr) != EOF) {
        // 找到 ASCII 码最小的字符
        int index = 0;
        int str_len = strlen(str);
        int substr_len = strlen(substr);
        for (int i = 1; str[i] != '\0'; i++) {
            if (str[i] < str[index])
                index = i;
        }

        // 插入字符串
        int i = str_len + substr_len;
        int j = str_len;
        while (j != index) {
            str[i--] = str[j--];
        }
        i = 0;
        j = index + 1;
        while (substr_len) {
            str[j++] = substr[i++];

            substr_len--;
        }

        //输出
        printf("%s\n", str);
    }

    return 0;
}