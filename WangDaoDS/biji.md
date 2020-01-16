## 引用&

引用型的加入帮我们把传入参数的改变保存了下来

```c++
void testNoYY(int a, int b, int c)
{
    c = a + b;
}
int main()
{
    int result = 0;
    testNoYY(1,2,result);
    cout << result;//result值为0
}
```

```c++
void testYinYong(int a, int b, int &c)
{
    c = a + b;
}
int main()
{
    int result = 0;
    testYinYong(1,2,result);
    cout << result;//result值为3
}
```

