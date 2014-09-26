#include <iostream>
#include <string.h>
using namespace std;

string ABCheck(string str)
{
  bool set = false;
  for(int i=0; i<str.length(); i++)
    {
      if((str[i] == 'a' && str[i+4] == 'b') && ((i+4)-(i) == 4))
	{
	  // cout<<str[i]<<":"<<str[i+4]<<endl;
	  //cout<<i<<":"<<i+4<<endl;
	  set = true;
	}
      else if((str[i] == 'b' && str[i+4] == 'a') && ((i+4)-(i) == 4))
	{
	  set = true;
	}
    }

  if(set == true)
    {
      return "true";
    }
  else
    {
      return "false";
    }
}

int main()
{
  string str = "bzzza";
  cout<<ABCheck(str)<<endl;

  return 0;
}
