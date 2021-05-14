#ifndef COLORDOMINANT_H
#define COLORDOMINANT_H
#include <vector>
#include <iostream>
#include <string>

using std::string;
using std::vector;
using std::cout;


class color{
  private: //member variables
    int m_red;
    int m_green;
    int m_blue;

  public:
    color(int red, int green, int blue);
    
    //functions
    string printDominance();
    string toString();
};

#endif
