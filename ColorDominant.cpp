#include "ColorDominant.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


color::color (int red, int green, int blue){
  m_red = red;
  m_green = green;
  m_blue = blue;
}

string color::printDominance(){
  if (m_red > m_green && m_red > m_blue){
    return "This color is Red dominant. \n" ; //RedDom
  }
  else if (m_green > m_red && m_green > m_blue){
    return "This color is Green dominant. \n"; //GreenDom
  }
  else if (m_blue > m_red && m_blue > m_green){
    return "This color is Blue dominant. \n"; //BlueDom
  }
  else if (m_red == m_green && m_red == m_blue){
    return "This color is a greyscale. \n"; //greyscale
  }
  else if (m_red == m_green){
    return "This color is blended. \n"; //blended
  }
  else if (m_red == m_blue){
    return "This color is blended. \n"; //blended
  }
  else if (m_green == m_blue){
    return "This color is blended. \n"; //blended
  }
  else{
    return " ";
  }
}

string color::toString(){
  return to_string (m_red) + " " + to_string (m_green) + " " + to_string (m_blue);
}