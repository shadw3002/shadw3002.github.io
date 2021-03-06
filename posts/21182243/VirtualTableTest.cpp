class Base1
{
public:
    int _data_1;
    int _data_2;
};

class Base2
{
public:
    int _data_1;
    int _data_2;

    void foo()
    {

    }
};

class Base3
{
public:
    int _data_1;
    int _data_2;

    virtual void foo() {}
};

class Base4
{
public:
    int _data_1;
    int _data_2;

    virtual void foo1() {}
    virtual void foo2() {}
};



class Base5
{
public:
    int base1_1;
    int base1_2;

    virtual void base1_fun1() {}
    virtual void base1_fun2() {}
};

class Derive5 : public Base5
{
public:
    int derive1_1;
    int derive1_2;
};

class Derive5_ : public Derive5
{
public:
    int derive5_1;
    int derive5_2;
};

class Base6
{
public:
    int base6_1;
    int base6_2;

    virtual void base6_fun1() {}
    virtual void base6_fun2() {}
};

class Derive6 : public Base6
{
public:
    int derive6_1;
    int derive6_2;

    // 覆盖基类函数
    virtual void base6_fun1() {}
};

class Base7
{
public:
    int base7_1;
    int base7_2;

    virtual void base7_fun1() {}
    virtual void base7_fun2() {}
};

class Derive7 : public Base7
{
public:
    int derive7_1;
    int derive7_2;

    virtual void base7_fun1() {}
};

class Base8_1
{
public:
    int base8_1_1;
    int base8_1_2;

    virtual void base8_1_fun1() {}
    virtual void base8_1_fun2() {}
};

class Base8_2
{
public:
    int base8_2_1;
    int base8_2_2;

    virtual void base8_2_fun1() {}
    virtual void base8_2_fun2() {}
};

// 多继承
class Derive8 : public Base8_1, public Base8_2
{
public:
    int derive8_1;
    int derive8_2;

    // 基类虚函数覆盖
    virtual void base8_1_fun1() {}
    virtual void base8_2_fun2() {}

    // 自身定义的虚函数
    virtual void derive8_fun1() {}
    virtual void derive8_fun2() {}
};

class Base9_1
{
public:
    int base9_1_1;
    int base9_1_2;
};

class Base9_2
{
public:
    int base9_2_1;
    int base9_2_2;

    virtual void base9_2_fun1() {}
    virtual void base9_2_fun2() {}
};

// 多继承
class Derive9 : public Base9_1, public Base9_2
{
public:
    int derive9_1;
    int derive9_2;

    // 自身定义的虚函数
    virtual void derive9_fun1() {}
    virtual void derive9_fun2() {}
};

class Base10_1
{
public:
    int base10_1_1;
    int base10_1_2;
};

class Base10_2
{
public:
    int base10_2_1;
    int base10_2_2;
};

// 多继承
class Derive10 : public Base10_1, public Base10_2
{
public:
    int derive10_1;
    int derive10_2;

    // 自身定义的虚函数
    virtual void derive10_fun1() {}
    virtual void derive10_fun2() {}
};

class Base11_1
{
public:
    int base11_1_1;
    int base11_1_2;

    virtual void base11_1_fun1() {}
    virtual void base11_1_fun2() {}
};

class Base11_2
{
public:
    int base11_2_1;
    int base11_2_2;
};

class Base11_3
{
public:
    int base11_3_1;
    int base11_3_2;

    virtual void base11_3_fun1() {}
    virtual void base11_3_fun2() {}
};

// 多继承
class Derive11 : public Base11_1, public Base11_2, public Base11_3
{
public:
    int derive11__1;
    int derive11__2;

    // 自身定义的虚函数
    virtual void derive11__fun1() {}
    virtual void derive11__fun2() {}
};

class Base12
{
public:
    int base12_1;
    int base12_2;

    virtual void base12_fun1() = 0;
};

class Derive12 : public Base12
{
public:
    int derive12_1;
    int derive12_2;

    virtual void base12_fun1()
    {

    }
};

int main()
{

}