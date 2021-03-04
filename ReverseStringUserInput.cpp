#include <bits/stdc++.h> 
using namespace std;

 void rev(string& str){
char temp;
int n=str.length();
for(int i=0;i<n/2;i++)
{
	temp=str[i];
	str[i]=str[n-i-1];
	str[n-i-1]=temp;
	
}
}

int main(){


string str="harryS";
cout<<"enter name";
cin>>str;
rev(str);
cout<<str;

}
