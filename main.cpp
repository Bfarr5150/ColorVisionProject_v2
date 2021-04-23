//Author: Brad Farris
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//PROTOTYPES
bool uniqueColors (vector <vector <int>> RGB_List, vector <int> RGB); 
void userColor (vector <int> & RGB);

int main(){

   //VARIABLES
  string fileName = "";
  ofstream file;
  vector <int> RGB;
  vector < vector <int> > RGB_List;
  int randomNumber = 0;
  int generateNumber = 5;

  //Initial input cout
  cout << "Choose 3 color values (Red,Green,Blue) to save to a file (From 0-255):\n" << endl;
  
  //Function calls
  userColor(RGB);
  RGB_List.push_back (RGB); 
  
  //Random Number Generator
  for (int i = 0; i < generateNumber; i++){
    for (int j = 0; j < 3; j++){
      randomNumber = rand() % 256 + 0;
      RGB [j] = randomNumber;
    }
    if (uniqueColors (RGB_List, RGB) == true){
      RGB_List.push_back (RGB);
    }
    else{
      i--;
     }
  }
  cout << endl;
 
 //Output each RGB values (3 per line (R, G, B))
  for (int i = 0; i < RGB_List.size(); i++){
    for (int j = 0; j < RGB_List[i].size(); j++){
      cout << RGB_List[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  //File i/o
  cout << "Enter a file name: ";
  cin >> fileName;
  file.open (fileName);

  if (file.is_open() == true){
    for (int i = 0; i < RGB_List.size(); i++){
      for (int j = 0; j < RGB_List[i].size(); j++){
        file << RGB_List[i][j] << " ";
      }
      file << endl;
    }
  }
  file.close ();
  cout << endl;
  cout << "Your file, " << fileName << ", has been created successfully!" << endl;

  return 0;
}

//DEFINITIONS

  //Ensure unique colors of generated numbers
bool uniqueColors (vector <vector <int>> RGB_List, vector <int> RGB){
  for (int i = 0; i < RGB_List.size(); i++){
    if ((RGB_List[i][0] == RGB [0]) && (RGB_List[i][1] == RGB [1]) && (RGB_List [i][2] == RGB [2])){
      return false;
    }
  }
  return true;
}

  //Obtain the user input for RGB color values
void userColor (vector <int> & RGB){
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
}
