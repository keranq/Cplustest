#include <iostream>
#include <stack>
using namespace std;
int main() {
stack<int> s;
s.push(1);
s.push(2);
cout << s.top()<<endl; // 输出 2
s.push(3);
cout << s.top()<<endl; // 输出 3
cout << s.size()<<endl; // 输出 3
cout << s.empty()<<endl; // 输出 0

s.pop();     // 弹出栈顶元素
cout << s.top()<<endl; // 输出 2
s.pop();     // 弹出栈顶元素
cout << s.top()<<endl; // 输出 1
}