#include <iostream>
#include <vector>
#include <random>
#include <iterator>
#include <algorithm>
#include "countSort.h"

std::vector<int> countSort::sort(std::vector<int> input, int size)
{
  std::vector<int>::iterator maxElement;
  maxElement = std::max_element(input.begin(), input.end());
  
  std::vector<int> count((*maxElement)+1,0);
  std::vector<int> output(size,0);
  for(int i:input)
  {
    count[i]++;
  }
  int k=0;
  for(int i=0;i<count.size();i++)
  {
    if(count[i] == 0)
      continue;
    else{
      int cnt = count[i];
      while(cnt>0)
      {
        output[k++]=i;
        cnt--;
      }
    }
  }
  return output;
}

void countSort::callCountSort()
{

  // First create an instance of an engine.
    std::random_device rnd_device;
    // Specify the engine and distribution.
    std::mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    std::uniform_int_distribution<int> dist {1, 15};
    
    auto gen = [&dist, &mersenne_engine](){
                   return dist(mersenne_engine);
               };

    std::vector<int> input(5);
    std::generate(std::begin(input), std::end(input), gen);
    std::vector<int> output;
    output = sort(input, input.size());
    for(auto i:output)
      std::cout<<i<<" ";
    std::cout<<std::endl;
}