#include<iostream>
#include"CricketTeam.h"
using namespace std;
int main()
{
	string nameofteam;
	string nameofcap;
	int mem;
	int rank;
	string name;
	Cricketteam otherTeam;
	Cricketteam Pakistan("file.txt");
	cout<<"Enter the name of captain : ";
	cin>>nameofcap;
	otherTeam.setcaptain(nameofcap);
	otherTeam.getcaptain();
	cout<<"Enter the rank : ";
	cin>>rank;
	otherTeam.setrank( rank);
	otherTeam.getrank( );
	cout<<"Enter the team name : ";
	cin>>nameofteam;
	otherTeam.NameofTeamset(nameofteam);
	otherTeam.NameofTeamget();
	cout<<"Enter the number of members : ";
	cin>>mem;
	int t1;
	cout<<"Enter the number of players that ypu want to add : ";
	cin>>t1;
	for(int i=0;i<t1;i++)
	{
		cout<<"Enter the name of player that you want to add : ";
	cin>>name;
	otherTeam.inputTeamMember(name);
	}
	int score;
	int times;
	cout<<"How many times did you want to add new score : ";
	cin>>times;
	for(int i=0;i<times;i++)
	{
	cout<<"Enter score : ";
	cin>>score;
	
	otherTeam.inputScore(score);
	}
	int average=0,average2=0;
average=otherTeam.averagescore();
otherTeam.print();
Pakistan.teaminfo();
average2=Pakistan.averagescore();
bool flag=0;
flag=otherTeam.compare(Pakistan);
cout<<endl;
if(flag =0)
	Pakistan.teaminfo();
if(flag=1)
	otherTeam.teaminfo();

}
