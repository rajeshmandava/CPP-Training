#include <iostream>


void print(int i)
{
  if(i <1 )
    return;
  std::cout<<i<<std::endl;
  print(--i);
}
int main()
{
  std::cout<<"This is test C++ container"<<std::endl;
  print(4);
  return 0;
}