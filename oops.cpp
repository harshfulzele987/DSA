#include<bits/stdc++.h>
using namespace std;

class emp
{

private :
  void private_function();
public :
   void public_function1(void);
   void public_function2(void);
   void public_function4(void);
   void public_function3(void);


};
void emp::private_function(void)
{
    cout<<"these is the private function....\n";

}


void emp::public_function1()
{
    cout<<"these is the pub1 function....\n";

}

void emp::public_function2()
{
    cout<<"these is the pub2 function....\n";

}
void emp::public_function3()
{
    cout<<"these is the pub3 function....\n";

}



int   main(void)
{
    emp tut ;
//    tut.private_function();
    tut.public_function1();
    tut.public_function2();
    tut.public_function3();
return 0;
}
