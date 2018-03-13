#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list; //vector for list
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

    if (input == 'A'||input == 'a')
    {
      cout<<"What is the item?"<<endl;
      cin>>item;
      list.push_back(item);
      numItems++; 
    }
  }
  while(input != 'q'&&input != 'Q');

  if (numItems == 0)
  {
    cout<<"No items to buy!"<<endl;
  }
  
  for(int i = 0; i < list.size(); i++)
  {
    cout<<list[i]<<endl;
  }

}  
  return 0;

