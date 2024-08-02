#include <iostream>
using namespace std;
int a;

namespace DICS
{
	int a = 900;
	int b = 56;
	void fun(){
		cout<<"I am Making our own Namespace";
	}
	
	class Person
	{
		private : 
			string name ;
		protected : 
			
		public :
			void showName(){
				cout<<"Show Name\n";
			}
	};
}
int main()
{
	cout <<"Shrushti Gupta\n"<< endl;
	int a = 100;
	cout<< a + (DICS::a) <<endl;
	DICS::fun();
	return 0;
}
