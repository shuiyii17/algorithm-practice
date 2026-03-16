# AcWing 5273 字符串插入



## 题目链接
https://www.acwing.com/problem/content/5276/



## 题目类型
字符串 / 模拟



## 难度
简单



## 题目
有两个不包含空白字符的非空字符串 strstr 和 substrsubstr，strstr 的字符个数不超过 1010，substrsubstr 的字符个数为 33。（字符个数不包括字符串结尾处的 `\0`。）

将 substrsubstr 插入到 strstr 中 `ASCII` 码最小的那个字符后面，若有多个最小则只考虑第一个。

#### 输入格式

输入最多不超过 100100 行，每一行为一组测试数据，格式为

```
str substr
```

#### 输出格式

对于每一组测试数据，输出插入之后的字符串。

#### 输入样例：

```
abcab eee
12343 555
```

#### 输出样例：

```
aeeebcab
15552343
```



## 对应代码
`code/string/acwing_5273.cpp`