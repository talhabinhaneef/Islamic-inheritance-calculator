#include<iostream>
#include<conio.h>
using namespace std;
class inheritance
{
	public:
		float land , male , female , widow ,remland;
		int m , f ;
	void getdata()
	{
		cout<<" ------Inheritance Calculator------";
		cout<<"\n Enter Total Land(in Acres): ";
		cin>>land;
		cout<<" Enter Number of Male Children: ";
		cin>>m;
		cout<<" Enter Number of Female Children: ";
		cin>>f;
	}
	void showdata()
	{
		cout<<" ------Approximate Result------";
		cout<<"\n For Widow ="<<land*0.125<<" (in Acres)";
		remland=land-(land*0.125);
		male=((m*2*remland)/(m*2+f))/m;
		cout<<"\n For a Male Child="<<male<<" (in Acres)";
		cout<<"\n For a Female Child="<<male/2<<" (in Acres)";
		cout<<"\n-----------------------------------";
		cout<<"\n Total Land in Brothers: "<<male*m<<" (in Acres)";
		cout<<"\n Total Land in Sisters: "<<(male/2)*f<<" (in Acres)";
		cout<<"\n-------------------------------------";
		}	
	
};
int main()
{
	
	inheritance i;
	i.getdata();
	i.showdata();
	getch();
}
