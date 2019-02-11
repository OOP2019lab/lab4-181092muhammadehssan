#include<iostream>
#include<string>
using namespace std;
class Cricketteam{
	string * membernames;
int no_of_members;
char *teamName;
int Scoreinlast10matches[10];
int Rank;
string captain;
public:
	Cricketteam();
	Cricketteam(string name, int no_of_members);
	Cricketteam(string filename);
	int averageofall;
	void setcaptain(string name);
	string getcaptain();
	void setrank(int rank);
	int getrank();
	void NameofTeamset(string teamname);
	char *NameofTeamget();
	
	void no_of_memberset(int members);
	int no_of_memberget();
	void inputFromFile();
	void inputTeamMember(string name);

	void inputScore(int score);
	int averagescore();
	void print();
	void teaminfo();
	bool compare(Cricketteam Pakistan);
	
};