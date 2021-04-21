//Author: Brad Farris
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//VECTORS (Need at least 2) --> DONE
//FUNCTIONS (Need at least 2) --> DONE
//LOOPS (At least 1) --> DONE
//PASS-BY-VALUE & PASS-BY-REFERENCE (Need at least 1 of each)

//PROTOTYPES (Need at least 2)
bool uniqueColors (vector <vector <int>> RGB_List, vector <int> RGB);
//MAKE FIRST FOR LOOP INTO FUNCTION? --> to take three numbers and determine if they are all between 0-255? --> return 
vector <int> userColor (); //no arguments --> 

int main(){

   //VARIABLES
  string fileName = "";
  ofstream file;
  vector <int> RGB;
  vector < vector <int>> RGB_List; //2D vector
  int randomNumber = 0;
  int generateNumber = 5;

  cout << "Choose 3 color values (Red,Green,Blue) to save to a file (From 0-255):\n" << endl;
    
  //user color function
  RGB = userColor(); //RGB is now assigned from information a

  RGB_List.push_back (RGB); // will make a copy of usercolor inside RGB_List, from the push_back values of RGB

  for (int i = 0; i < generateNumber; i++){ //does the nested for loop enough times to generate the determined number of values --> generateNumber assigned to 5 in definition, so it can be easily changed in the future
    for (int j = 0; j < 3; j++){
      randomNumber = rand() % 256 + 0; //256 makes 255 inclusive
      RGB [j] = randomNumber; //assigns RGB at j to a random number --> RGB_List.push_back (RGB)
    }
    if (uniqueColors (RGB_List, RGB) == true){ //calling uniqueColors requires the same parameters as prototype --> use protoype parameter names/format to set argument's type (RGB_List == vector <vector <int>>, RGB == vector <int>)
      RGB_List.push_back (RGB); //stores rngs assigned to RGB, from previous for loop, into RGB_List
    }
    else{
      i--; //goes back one number when its false (to generate a different number for that position)
     }
  }
//want to loop one more time if not unique (returns false)
 
  //both for loops print RGB_List that is compiled from RGB values
  for (int i = 0; i < RGB_List.size(); i++){
    for (int j = 0; j < RGB_List[i].size(); j++){ //[0] vector <int> size, just RGB_List --> RGB_List[i] refers to a position of a complete RGB value (RGB values GROUP (contains the COMBINATION of the three values) --> RGB_List [i]"[j]" refers to the individual values of the stored RGB values ([0][1][2] ([j] == one of the three individual values stored to RGB vector)
      cout << RGB_List[i][j] << " "; //<< " " , in combination with << endl; outside of for loop, helps with formatting
    }
    cout << endl;
  }


  //WRITE INFORMATION TO FILE
  cout << "Enter a file name: ";
  cin >> fileName;
  file.open (fileName);

  if (file.is_open() == true){
    for (int i = 0; i < RGB_List.size(); i++){
      for (int j = 0; j < RGB_List[i].size(); j++){
        cout << RGB_List[i][j] << " ";
      }
      cout << endl;
    }
  }
  file.close ();

  return 0;
}

//DEFINITIONS

//IS COLOR UNIQUE?
//not changing values, asking if RGB value is in list
bool uniqueColors (vector <vector <int>> RGB_List, vector <int> RGB){
  for (int i = 0; i < RGB_List.size(); i++){
    if ((RGB_List[i][0] == RGB [0]) && (RGB_List[i][1] == RGB [1]) && (RGB_List [i][2] == RGB [2])){ //&& because it has to evaluate the value of every input ([0], [1], [2]), and if EVERY value is the same (aka is the same color), then it returns false
      return false;
    }
  }
  return true; //put outside of for loop --> since didn't find rgb match, you can return true --> if you found a match, it would return false (inside for loop) --> if didn't find any matches in for loop, it returns as true, outside of for loop.
}

//USER COLOR DECISION
vector <int> userColor (){
  int userColor;
  vector <int> RGB;

  for (int i = 0; i < 3; i++){ //will add three values (usercolor) to vector <int> RGB
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
  return RGB;
}
