#include<iostream>
#include<fstream>
#include"CricketTeam.h"
using namespace std;
ifstream fin;
Cricketteam :: Cricketteam()//default constructor
{
	captain=" ";
	Rank=-1;
	no_of_members=11;
	int j=20;
	for(int i=0;i<10;i++)
		
	Scoreinlast10matches[i] =2*j++ ;
	teamName=nullptr;
	membernames=nullptr;
}
Cricketteam::Cricketteam(string name, int no_of_member)//parametrized constructor
{
	captain=name;
	Rank=-1;
	no_of_members=-1;
	for(int i=0;i<10;i++)
	Scoreinlast10matches[i] = -1;
	int a;
	a=name.size();
	teamName=new char[a+1];
	for(int i=0;i<a;i++)
	teamName[i]=name[i];

	membernames=nullptr;
	
	
}
Cricketteam:: Cricketteam(string filename)//constructor that takes input from file
{
	string size;
	
	int a;
	fin.open(filename);//opens file
	if(fin)
	{
		getline(fin,size,':');//skip upto :
		getline(fin,size,'\n');//reads upto newline
		
	a=size.size();//measure size
	
	teamName=new char [a];//memory allocation
	int i;
	for( i=0;i<a;i++)
		teamName[i]=size[i];
	teamName[i]='\0';
	
	getline(fin,size,':');//calculate total members
	fin>>no_of_members;
	fin.ignore();
	membernames=new string[no_of_members];//allocation of memory
	for(int i=0;i<11;i++)
		getline(fin,membernames[i]);
	
	getline(fin,size,':');//finds rank
	fin>>Rank;
	getline(fin,size,':');//finds captain name
	fin>>captain;
	
	getline(fin,size,':');

	for(int i=0;i<10;i++)//Reads score
	{	fin>>Scoreinlast10matches[i];
	getline(fin,size,',');//skips ,
	}
	
	}
	}
string Cricketteam::  getcaptain()//getter function to get captain
{
	
	return captain;
}
void Cricketteam:: setcaptain(string name)//setter function to set captain
{
	captain=name;
	
}
void Cricketteam:: setrank(int rank)//setter function to set rank
{
	Rank=rank;
}
int Cricketteam:: getrank()//getter function to get rank
{
	return Rank;
}
void Cricketteam:: NameofTeamset(string nameofteam)//sets the name of team
{
	int a=0;
	a=nameofteam.size() ;
	teamName=new char [a];
	for(int i=0;i<a+1;i++)
		teamName[i]=nameofteam[i];

	

}
char* Cricketteam:: NameofTeamget()//get the name of team
{
	return teamName;
}
void Cricketteam:: no_of_memberset(int members)//setter for number of members
{
	no_of_members=members;
}
int Cricketteam::no_of_memberget()//getter for number of members
{
	return no_of_members;
}
int x=0;
void Cricketteam:: inputTeamMember(string name)//This will take input new members 
{
	
	membernames=new string[no_of_members];
if(x>no_of_members)
	cout<< "there is no place for new team member"<<endl;
else
{	membernames[x]=name;
x++;
}

}
void Cricketteam:: inputScore(int score)//This will input score by shifting array
{
	for(int i=0;i<9;i++)
		Scoreinlast10matches[i]=Scoreinlast10matches[i+1];
	Scoreinlast10matches[9]=score;
	for(int i=0;i<10;i++)
		cout<<Scoreinlast10matches[i]<<" ";

}

int Cricketteam:: averagescore()//Calculate average score;
{
	int sum=0;
	int average=0;
	for(int i=0;i<10;i++)
	{
		sum=sum+Scoreinlast10matches[i];
	}
	average=sum/10;
	averageofall=average;
	
	return average;
}
void Cricketteam:: print()//This will print the info of team that user  has input in console
{
	cout<<endl<<"Name of the team is : "<<teamName<<endl<<"Name of captain is : "<<captain<<endl<<"Score in last match is : "<<Scoreinlast10matches[9]<<endl;
}
void Cricketteam::teaminfo()//This will print the info of team that is in file
{
	cout<<endl<<endl<<endl<<"TEAM INFO 2 :"<<endl;
	cout<<"The name of team is : "<<teamName<<endl;
	cout<<"The name of captain is : "<<captain<<endl;
	cout<<"Total number of members are : "<<no_of_members<<endl;
	
	cout<<"Score in last ten matches is : ";
	for(int i=0;i<10;i++)
		cout<<Scoreinlast10matches[i]<<" , ";
}
bool Cricketteam:: compare(Cricketteam Pakistan)//compare both teams
{
	
	if(averageofall>Pakistan.averageofall)
		{
			cout<<"Best team is "<<teamName;
			return true;
	}
	else
		{
			cout<<"Best team is "<<Pakistan.teamName;
			return false;
	}
	}

