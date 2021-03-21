#include <iostream>
using namespace std;
class Cal{
public:
    double num1;
    double num2;
    double sum(void);//求和
    double sub(void);//减法
    double mul(void);//乘法
    double div(void);//除法
    void set(double s1,double s2);
};
double Cal::div(void) {
    return num1/num2;
}
double Cal::mul(void) {
    return num1*num2;
}
double Cal::sub(void) {
    return num1-num2;
}
double Cal::sum(void) {
    return num1+num2;
}
void Cal::set(double s1,double s2)
{
    num1=s1;
    num2=s2;
}
int main() {
    int i=1;
    Cal cal;
    double s1,s2,value=0.0;
    char f=2;
    while(i=1) {
        cout<<"欢迎使用计算器，请输入你的算式：";
        cin>>s1>>f>>s2;
        cout<<"开始计算了哦~"<<endl;
        cal.set(s1,s2);
        if (f == '+') {
            value = cal.sum();
            cout << "该式和为：" << value << endl;
            cout<<"1继续，0退出"<<endl;
            cin>>i;
            cout<<endl;
        } else if (f == '-') {
            value = cal.sub();
            cout << "该式差为：" << value << endl;
            cout<<"1继续，0退出"<<endl;
            cin>>i;
            cout<<endl;
        } else if (f == '*') {
            value = cal.mul();
            cout << "该式积为：" << value << endl;
            cout<<"1继续，0退出"<<endl;
            cin>>i;
            cout<<endl;
        } else if (f == '/') {
            value = cal.div();
            cout << "该式商为：" << value << endl;
            cout<<"1继续，0退出"<<endl;
            cin>>i;
            cout<<endl;
        } else {
            cout << "无效算式，请重新输入！" << endl;
            cout<<"1继续，0退出"<<endl;
            cin>>i;
            cout<<endl;
        }
    }
    return 0;
}
