#include <iostream>
using namespace std;
class Person
{
    protected:
    int name;
    public:
    void get_name()
    {
       std::cout << "Enter the name and  : " << std::endl;
       cin>>a;
    }
};

class account : public Person
{
    protected:
    int b;
    public:
    void get_b()
    {
        std::cout << "Enter the value of 'b' : " << std::endl;
       cin>>b;
    }
};
class Admin
{
    protected:
    int c;
    public:
    void get_c()
    {
        std::cout << "Enter the value of c is : " << std::endl;
        cin>>c;
    }
};

class master : public account, public Admin
{
    protected:
    int d;
    public:
    void mul()
    {
         get_a();
         get_b();
         get_c();
         std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;
    }
};
int main()
{
    master d;
    d.mul();
    return 0;
}
