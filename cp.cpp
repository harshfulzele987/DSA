using namespace std;
#include <iostream>

class Sample
{

	private:
	int value;

	public:

	Sample()
	{ value = 0;}


	Sample(int c)
	{ value = c;}


	friend Sample operator-(Sample &S1, Sample &S2);


	void printValue()
	{
		cout<<"Value is : "<<value<<endl;
	}
};


Sample operator-(Sample &S1, Sample &S2)
{
	Sample S;
	S = S1.value-S2.value;
	return S;
}


int main()
{
	int i = 0;

	Sample S1(600);
	Sample S2(200);
	Sample S3;


	S3 = S1 - S2;

	cout<<"S1 :"<<endl;
	S1.printValue();

	cout<<"S2 :"<<endl;
	S2.printValue();

	cout<<"S3 :"<<endl;
	S3.printValue();

	return 0;
}
