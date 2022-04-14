#include <iostream>
#include <memory>

class myClass{

  public:
  void print()
  {
    std::cout<<"print myClass"<<std::endl;
  }

};

void usemyClass()
{
  std::shared_ptr<myClass> myClassSPtr = std::make_shared<myClass>();
  myClassSPtr->print();
}

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
  usemyClass();
  return 0;
}