#include <iostream>
using namespace std;
// 字符串比较是按字符的ASCII码进行对比
// = 返回 0
// > 返回 1
// < 返回 -1
// int compare(const string &s) const; // 与字符串s比较
// int compare(const char *s) const;   // 与字符串s比较
// 字符串比较
void test01()
{

    string s1 = "hello";
    string s2 = "aello";

    int ret = s1.compare(s2);

    if (ret == 0)
    {
        cout << "s1 等于 s2" << endl;
    }
    else if (ret > 0)
    {
        cout << "s1 大于 s2" << endl;
    }
    else
    {
        cout << "s1 小于 s2" << endl;
    }
}
int main()
{
    return 0;
}
// 总结：字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大