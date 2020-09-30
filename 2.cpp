#include <iostream>
#include <iomanip>
using namespace std;
int select,stu=0;
	int *quiz = new int[stu];
	int *mid = new int[stu];
	int *final = new int[stu];
int main()
{
	
	
	cout<<setw(50)<<setfill('=')<<" "<<endl;;
	cout<<setw(25)<<setfill(' ')<<"MENU"<<endl;
	cout<<setw(50)<<setfill('=')<<" "<<endl;
	cout<<setw(10)<<setfill(' ')<<" "<<"1.Input student records"<<endl;
	cout<<setw(10)<<setfill(' ')<<" "<<"2.View all student records"<<endl;
	cout<<setw(10)<<setfill(' ')<<" "<<"3.Exit"<<endl;
	
	cout<<"select menu ";
	cin>>select;

	if (select==1){
		cout<<"Input Number of students : ";
		cin>>stu; 
	for (int i = 0 ; i<stu ; i++)
	{
		cout<<"Number"<<i+1<<endl;
		cout<<" Input Quiz : ";
		cin>>quiz[i];
		cout<<" Input Midterm : ";
		cin>>mid[i];
		cout<<" Input Final : ";
		cin>>final[i];
		}main();
	}
	
	
	else if (select==2)
	{
		cout<<setw(40)<<setfill('-')<<" "<<endl;
		cout<<left<<"Student"<<setw(5)<<setfill(' ')<<" "<<"Quiz"<<setw(5)<<setfill(' ')<<" "<<"Midterm"<<setw(5)<<setfill(' ')<<" "<<"Final"<<endl;
		cout<<setw(40)<<setfill('-')<<" "<<endl;
		for(int i=0 ; i<stu ; i++)
		{
			cout<<left<<i+1<<setw(10)<<setfill(' ')<<" "<<quiz[i]<<setw(10)<<setfill(' ')<<" "<<mid[i]<<setw(10)<<setfill(' ')<<" "<<final[i]<<endl;
		
		}
			main();
	}


		
return 0;
}