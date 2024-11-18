#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    Calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayResult()
    {
        cout << "Numbers are: " << num1 << " and " << num2 << ".";
        cout << "\nAddition is : " << add();
        cout << "\nSubtraction is : " << subtract();
        cout << "\nProduct is : " << multiply();
        cout << "\nDivision is : " << divide();
    }

    T add()
    {
        return num1 + num2;
    }

    T subtract()
    {
        return num1 - num2;
    }

    T multiply()
    {
        return num1 * num2;
    }

    T divide()
    {
        return num1 / num2;
    }
};
template<class T1, class T2>
class test{
    T1 a;
    T2 b;
    public:
    test(T1 x, T2 y){
        a=x;
        b=y;
    }
    void show(){ 
        cout<<a<<" and "<<b<<endl;
    }
};


int main()
{
    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);

    cout << "\nInt results : ";
    intCalc.displayResult();

    cout << "\nFloat results : ";
    floatCalc.displayResult();
    cout<<"\ntest\n";
    test<float, int>test1(1.23, 123);
    test1.show();
     test<int, char>test2(1.23, 'w');
    test2.show();


    return 0;
}
struct AASTU {
    struct informatics{
        char cs[];
        char se[];
    }dept;
}aastu;