//Author: Brad Farris
#include <iostream>
#include <fstream>
#include <vector>
#include "ColorDominant.h"
using namespace std;

//PROTOTYPES
bool uniqueColors (vector < color > color_List, vector <int> RGB);
color userColor (vector <int> & RGB); 

int main(){
  
   //VARIABLES
  string fileName = "";
  ofstream file;
  vector <int> RGB;
  vector < color > color_List;
  int randomNumber = 0;
  int generateNumber = 5;

  cout << "Choose 3 color values (Red,Green,Blue) to save to a file (From 0-255):\n" << endl;
    
  //USER COLOR FUNCTION
  
  color_List.push_back (userColor(RGB));
  
  for (int i = 0; i < generateNumber; i++){
    for (int j = 0; j < 3; j++){
      randomNumber = rand() % 256 + 0;
      RGB [j] = randomNumber;
    }
    if (uniqueColors (color_List, RGB) == true){
      color unique (RGB [0], RGB [1], RGB [2]);
      color_List.push_back (unique);
    }
    else{
      i--;
     }
  }
  cout << endl;
  
  for (int i = 0; i < color_List.size(); i++){
      cout << color_List[i].toString() << " ";
      cout << color_List[i].printDominance();
    cout << endl;
  }
  cout << endl;


  //WRITE INFORMATION TO FILE
  cout << "Enter a file name: ";
  cin >> fileName;
  file.open (fileName);

  if (file.is_open() == true){
    for (int i = 0; i < color_List.size(); i++){
        file << color_List[i].toString() << " ";
        file << color_List[i].printDominance();
      file << endl;
    }
  }
  file.close ();
  cout << endl;
  cout << "Your file, " << fileName << ", has been created successfully!" << endl;
  return 0;
}

//DEFINITIONS
bool uniqueColors (vector < color > color_List, vector <int> RGB){
  return true;
}

color userColor (vector <int> & RGB){
  int userColor;

  for (int i = 0; i < 3; i++){
    do{
      cin >> userColor;
      if (userColor >= 0 && userColor <= 255){
      RGB.push_back(userColor);
      }
      else{
      cout << "This value was not between 0-255. Please enter another value.\n";
      }
    } while (userColor < 0 || userColor > 255);
  }
  color col (RGB [0], RGB [1], RGB [2]);
  return col;
}