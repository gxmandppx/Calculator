#include <iostream>
using namespace std;
class Cal{
public:
    double num1;
    double num2;
    double sum(void);//���
    double sub(void);//����
    double mul(void);//�˷�
    double div(void);//����
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
        cout<<"��ӭʹ�ü������������������ʽ��";
        cin>>s1>>f>>s2;
        cout<<"��ʼ������Ŷ~"<<endl;
        cal.set(s1,s2);
        if (f == '+') {
            value = cal.sum();
            cout << "��ʽ��Ϊ��" << value << endl;
            cout<<"1������0�˳�"<<endl;
            cin>>i;
            cout<<endl;
        } else if (f == '-') {
            value = cal.sub();
            cout << "��ʽ��Ϊ��" << value << endl;
            cout<<"1������0�˳�"<<endl;
            cin>>i;
            cout<<endl;
        } else if (f == '*') {
            value = cal.mul();
            cout << "��ʽ��Ϊ��" << value << endl;
            cout<<"1������0�˳�"<<endl;
            cin>>i;
            cout<<endl;
        } else if (f == '/') {
            value = cal.div();
            cout << "��ʽ��Ϊ��" << value << endl;
            cout<<"1������0�˳�"<<endl;
            cin>>i;
            cout<<endl;
        } else {
            cout << "��Ч��ʽ�����������룡" << endl;
            cout<<"1������0�˳�"<<endl;
            cin>>i;
            cout<<endl;
        }
    }
    return 0;
}
