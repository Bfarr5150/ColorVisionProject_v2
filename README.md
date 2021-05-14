# The Five Color Generator (V 1.0)

## Description

The program goes through a process to ask the user for three values that are between 0-255, and generates 5 additional, unique colors. If the user selects a number outside of the range, they will be presented with an error and asked to enter a valid number. After this, the program analyzes the values that the user input and generates 5 other RGB values (15 generated values total). When it generates the random numbers, that are between 0-255, it compares the numbers that the user input to the values that the random generated numbers are. The program will not make a RGB color combination that is the same as the user's. Each of these RGB elements are then stored and written to a file, finishing the process.

### v0.2 Updates

I completely changed my previous code. Everything I did has been an update. I have included the whole description of each part and am completing these, as there is no similarity between this deliverable and the first one. I also included the first readme.md text below this.

### v1.0 Updates

I implemented a class into the deliverable. The class's job is to determine the color dominance of each color that is input/generated. In order to implement this into my deliverable, I had to change/remove some of the code I had previously, in order to have it analyze the values and determine the color dominance, instead of just generating the five new values.


## Developer

Brad Farris

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```
Here is an example of the program running:
```
Choose 3 color values (Red,Green,Blue) to save to a file (From 0-255):

51
654
This value was not between 0-255. Please enter another value.
168
-845
This value was not between 0-255. Please enter another value.
0

51 168 0 This color is Green dominant. 

103 198 105 This color is Green dominant. 

115 81 255 This color is Blue dominant. 

74 236 41 This color is Green dominant. 

205 186 171 This color is Red dominant. 

242 251 227 This color is Green dominant. 


Enter a file name: TheFiveColorGenerator(v1.0)            

Your file, TheFiveColorGenerator(v1.0), has been created successfully!
```
File contents of above results:
```
51 168 0 This color is Green dominant. 

103 198 105 This color is Green dominant. 

115 81 255 This color is Blue dominant. 

74 236 41 This color is Green dominant. 

205 186 171 This color is Red dominant. 

242 251 227 This color is Green dominant. 

```
## C++ Guide

### Variables and Data Types

I used a variety of variables and data types. The main data type I used was 'int', but I also used a 'bool', 'string', and 'void' data type. The reason why 'int' was the most used data type was because my goal was to take the input of numbers, store the inputs, and utilize them in varying ways. I used many variables within my code. Each one with its unique purpose, and named appropriately for what they were being used for in the code.

#### V 1.0 Variables/Data Types Updates
I ended up taking out the void data type, since it was not necessary with the way that I made the new class.

### Console Input and Output 

The main form of user input I used was the gathering of the RGB values they chose, as well as the input of the name of their file. I had the user input 3 separate numbers between 0-255 and evaluated whether or not the value they gave was within the range or not. If it was in the range, the value would be stored and output, but if it was outside of the range, it would output an error message and request the user to input a valid value. There is also a confirmation message that shows up when the user has successfully named/created their file.

#### V 1.0 Console IO Updates
After adding my new class, the console output has changed from just inlcuding what the color value is to giving the value and labeling its color dominance.

### Decisions

I used several decisions within my code. These were primarily present in the for loops that I had used. One example of a decision is the 'if, else' decision used to get the user's color input, and whether or not to store it. So, in this context, it analyzes the user's input to see IF it is between 0-255. IF it is, THEN it stores that value into the variable. ELSE, it runs an error cout statement and rolls back that input and looks for another valid value.

#### V 1.0 Decisions Update
Not much changed with this. I implemented several "if, else" statements within the class.

### Iteration

Obviously, I used a significant amount of for loops within this deliverable. I also used a do-while loop inside one of the function definitions. A good example of one of the for loops was making sure the color was unique. The for loop parameters included the size of RGB_List. So, the values of RGB stored inside RGB_List were required to be different from one another. I used a nested if statement to check against the value in RGB_List [i] and make sure it wasn't the same number that is stored in the RGB variable [0], [1], [2]. If it was the same, then it would return as false and would go through until it has a value that is not equal to the number that the user input.

#### V 1.0 Iteration Update
I didn't change a whole lot of this. I changed the 2D vector to implement the class with it, which enabled me to take out some of the nested for loops that I previously had.

### File Input and Output

For this program, I gathered the input of the user and the 5 generated random numbers and stored each one in a file, which was named based on the user's input. With this, it created a file that contained each value, separated into six lines. Each line held the three RGB values for each color.

#### V 1.0 File I/O Updates
The only thing that I changed with the file io is the format change for storing/printing the information that was input into the file.

### Arrays/Vectors

I was able to utilize a couple vectors throughout this deliverable. I had one vector that stores the three RGB values for each color. I also utilized a 2D vector that helped combined all the values stored into RGB into one variable. I used the RGB_List vector to compile all the values into that variable, making it easier to capture all the values gathered from the RGB inputs into one place.

#### V 1.0 Arrays/Vectors Updates

There were some big overhauls on the ways I used the vectors. The biggest change was switching the 2D vector from an integer data type to my class. This tweak changed a lot of the code. This has similar functionality, however, I don't ne

### Functions

I used two functions with this deliverable. I used one for determining whether each random generated number was unique from the user's input. I used another one to obtain the users input. For the userColor function, I utilized a pass-by-reference, which helped me change the return type from what was an integer, to a void function. It removed the requirement to return an argument to the main function, so all I had to do was call it in main. It definitely made it easier to do. 

#### V 1.0 Functions Update ###
In addition to the previous functions, I implemented two new string functions. Each were used to display the dominance of the colors. The first one, "printDominance", was used to check which of the three values was higher, if they were all the same, or if there were two that were the same. This went through and evaluated the conditions of each color and determined what the dominance was. The second function that was added took the dominance value that was assigned to each value and printed it to the string in the correct format.

##
 
### Classes

The overall goal of the class is to determine the color dominance of each color, both input and generated. This was done by making a function that evaluated each of the colors to determine dominance. There was also a function that I made to assign it to a string and have it be output to the console/file.

##





## *******
## *******
## *******
## *******
## *******

# The Five Color Generator (V 0.2)

## Description

The program goes through a process to ask the user for three values that are between 0-255, and generates 5 additional, unique colors. If the user selects a number outside of the range, they will be presented with an error and asked to enter a valid number. After this, the program analyzes the values that the user input and generates 5 other RGB values (15 generated values total). When it generates the random numbers, that are between 0-255, it compares the numbers that the user input to the values that the random generated numbers are. The program will not make a RGB color combination that is the same as the user's. Each of these RGB elements are then stored and written to a file, finishing the process.

### v0.2 Updates

I completely changed my previous code. Everything I did has been an update. I have included the whole description of each part and am completing these, as there is no similarity between this deliverable and the first one. I also included the first readme.md text below this.

### v1.0 Updates

I implemented a class into the deliverable. The class's job is to determine the color dominance of each color that is input/generated.


## Developer

Brad Farris

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```
Here is an example of the program running:
```
Choose 3 color values (Red,Green,Blue) to save to a file (From 0-255):

-10
This value was not between 0-255. Please enter another value.
0
255
350
This value was not between 0-255. Please enter another value.
180

0 255 180 
103 198 105 
115 81 255 
74 236 41 
205 186 171 
242 251 227 

Enter a file name: FiveColorGenerator

Your file, FiveColorGenerator, has been created successfully!
```
File contents of above results:
```
0 255 180 
103 198 105 
115 81 255 
74 236 41 
205 186 171 
242 251 227

```
## C++ Guide

### Variables and Data Types

I used a variety of variables and data types. The main data type I used was 'int', but I also used a 'bool', 'string', and 'void' data type. The reason why 'int' was the most used data type was because my goal was to take the input of numbers, store the inputs, and utilize them in varying ways. I used many variables within my code. Each one with its unique purpose, and named appropriately for what they were being used for in the code.

### Console Input and Output 

The main form of user input I used was the gathering of the RGB values they chose, as well as the input of the name of their file. I had the user input 3 separate numbers between 0-255 and evaluated whether or not the value they gave was within the range or not. If it was in the range, the value would be stored and output, but if it was outside of the range, it would output an error message and request the user to input a valid value. There is also a confirmation message that shows up when the user has successfully named/created their file.

### Decisions

I used several decisions within my code. These were primarily present in the for loops that I had used. One example of a decision is the 'if, else' decision used to get the user's color input, and whether or not to store it. So, in this context, it analyzes the user's input to see IF it is between 0-255. IF it is, THEN it stores that value into the variable. ELSE, it runs an error cout statement and rolls back that input and looks for another valid value.

### Iteration

Obviously, I used a significant amount of for loops within this deliverable. I also used a do-while loop inside one of the function definitions. A good example of one of the for loops was making sure the color was unique. The for loop parameters included the size of RGB_List. So, the values of RGB stored inside RGB_List were required to be different from one another. I used a nested if statement to check against the value in RGB_List [i] and make sure it wasn't the same number that is stored in the RGB variable [0], [1], [2]. If it was the same, then it would return as false and would go through until it has a value that is not equal to the number that the user input.

### File Input and Output

For this program, I gathered the input of the user and the 5 generated random numbers and stored each one in a file, which was named based on the user's input. With this, it created a file that contained each value, separated into six lines. Each line held the three RGB values for each color.

### Arrays/Vectors

I was able to utilize a couple vectors throughout this deliverable. I had one vector that stores the three RGB values for each color. I also utilized a 2D vector that helped combined all the values stored into RGB into one variable. I used the RGB_List vector to compile all the values into that variable, making it easier to capture all the values gathered from the RGB inputs into one place.

### Functions

I used two functions with this deliverable. I used one for determining whether each random generated number was unique from the user's input. I used another one to obtain the users input. For the userColor function, I utilized a pass-by-reference, which helped me change the return type from what was an integer, to a void function. It removed the requirement to return an argument to the main function, so all I had to do was call it in main. It definitely made it easier to do. 

### Classes

*Coming in version 1.0* 

##