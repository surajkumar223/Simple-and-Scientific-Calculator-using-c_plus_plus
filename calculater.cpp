#include<iostream>
#include<math.h>
using namespace std;
class base1
{
protected:
    int num1,num2;
public:
    void setdata1()
    {
        cout<<"Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number"<<endl;
        cin>>num2;
    }
    void SimpleCalculator()
    {
        char ch;
        while(1)
        {
            cout<<"Menu :"<<endl<<"1.Press + for addition"<<endl<<"2.Press - for substraction"<<endl<<"3.Press * for multiplication"<<endl<<"4.Press / for division"<<endl<<"5.Press % for remainder"<<endl<<"6.Press ^ for power"<<endl<<"7.Press 0 to exit"<<endl;
            cin>>ch;
            switch(ch)
            {
            case '+':
                setdata1();
                cout<<num1+num2<<endl;
                break;
            case '-':
                setdata1();
                cout<<num1-num2<<endl;
                break;
            case '*':
                setdata1();
                cout<<num1*num2<<endl;
                break;
            case '/':
                setdata1();
                cout<<num1/num2<<endl;
                break;
            case '%':
                setdata1();
                cout<<num1%num2<<endl;
                break;
            case '^':
                setdata1();
                cout<<pow(num1,num2)<<endl;
                break;
            case '0':
                goto exit;
                break;
            default:
                cout<<"Invalid character!!!"<<endl;
            }

        }
        exit:;
    }
};
class base2
{
protected:
    int n;
public:
    void setdata2()
    {
        cout<<"Enter the number"<<endl;
        cin>>n;
    }
    void ScientificCalculator()
    {
        int op;
        while(1)
        {
            cout<<"Menu:"<<endl<<"1.Press 1 for square root"<<endl<<"2.Press 2 for sin"<<endl<<"3.Press 3 for log"<<endl<<"4.Press 4 for exit"<<endl;
            cin>>op;
            switch(op)
            {
            case 1:
                setdata2();
                cout<<sqrt(n)<<endl;
                break;
            case 2:
                setdata2();
                cout<<sin(n*180/3.14)<<endl;
                break;
            case 3:
                setdata2();
                cout<<log(n)<<endl;
                break;
            case 4:
                goto exit;
                break;
            default:
                cout<<"Invalid Character!!!"<<endl;
            }
        }
        exit:;
    }
};
class derived :public base1,public base2
{
public:
    void show()
    {
        while(1)
        {
            char chr;
            cout<<"Enter @ for Menu Of Simple Calculator "<<endl
			    <<"               or"<<endl
				<<"enter # for Menu of Scientific Calculator "<<endl
				<< "              or"<<endl
				<<"enter & for exit"<<endl;
            cin>>chr;
            switch(chr)
            {
            case '@':
                SimpleCalculator();
                break;
            case '#':
                ScientificCalculator();
                break;
            case '&':
                goto exit;
                break;
            default:
                cout<<"Invalid Character entered!!"<<endl;
            }
        }
        exit:;
    }
};
int main()
{
    derived d;
    d.show();
    return 0;
}