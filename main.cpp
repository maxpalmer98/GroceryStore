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

    if (input == 'A'||input == 'a')
    {
      cout<<"What is the item?"<<endl;
      if(numItems < 5)
      {
        cin>>item;
        list[numItems] = item;
        numItems++;
      }
      else if (numItems >= 5&&(input == 'a'||input == 'A'))
      {
        cout<<"You'll need a bigger list!"<<endl;
      }
    }

  }
  while(input != 'q'&&input != 'Q');

  if(input == 'q'||input == 'Q')
  {
    cout<<"==ITEMS TO BUY==";
    cout<<"\n1 "<<list[0];
    cout<<"\n2 "<<list[1];
    cout<<"\n3 "<<list[2];
    cout<<"\n4 "<<list[3];
    cout<<"\n5 "<<list[4];
  }
  return 0;
}
