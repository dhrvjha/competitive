#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
//l,b,h are integers representing the dimensions of the box
private:
    int l,b,h;
// The class should have the following functions : 
public:
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
Box(){
    scanf("%d%d%d",&l,&b,&h);
}
Box(int a,int b,int c){
    this->l = a;
    this->b = b;
    this->h = c;
}
Box(Box &ba){
    this->l = ba.getLength();
    this->b = ba.getBreadth();
    this->h = ba.getHeight();
}
// int getLength(); // Return box's length
const int getLength(){
    return this->l;
}
// int getBreadth (); // Return box's breadth
const int getBreadth(){
    return this->b;
}
// int getHeight ();  //Return box's height
const int getHeight(){
    return this->h;
}
// long long CalculateVolume(); // Return the volume of the box
const long long CalculateVolume(){
    return this->l*this->h*this->b;
}
//Overload operator < as specified
UIStream& operator<<(UIStream& os, std::ostream& (*pf)(std::ostream&));
ostream& operator<<(ostream& out, Box& B){

}
bool operator<(Box &ba){
    return this->CalculateVolume()>ba.CalculateVolume();
}
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}