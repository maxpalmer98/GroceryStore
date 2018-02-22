//Author: Maxwell Palmer
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
    if ((input == 'A'||input == 'a')&& numItems <= 4)
    {
    cout<<"What is the item?"<<endl;
    cin>>item;
    list[numItems] = item;
    numItems++;
    }
    else if (numItems >= 5&&(input != 'q'&&input != 'Q')) 
    {
    cout<<"What is the item?"<<endl;
    cout<<"You'll need a bigger list!"<<endl;
    }
    
  }
  while(input != 'q'&&input != 'Q');
  return 0;
}
