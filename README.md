# The Five Color Generator (V 0.2)

## Description

The program goes through a process to ask the user for three values that are between 0-255, and generates 5 additional, unique colors. If the user selects a number outside of the range, they will be presented with an error and asked to enter a valid number. After this, the program analyzes the values that the user input and generates 5 other RGB values (15 generated values total). When it generates the random numbers, that are between 0-255, it compares the numbers that the user input to the values that the random generated numbers are. The program will not make a RGB color combination that is the same as the user's. Each of these RGB elements are then stored and written to a file, finishing the process.

### v0.2 Updates

I completely changed my previous code. Everything I did has been an update. I have included the whole description of each part and am completing these, as there is no similarity between this deliverable and the first one. I also included the first readme.md text below this.

### v1.0 Updates

*Coming soon*


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






## ********
## ********
## ********


## The Six Color Problem Solver (V 0.1)
## ***
#### I was not able to complete this whole project, or even most of it. I tried my best, but I just kept getting stuck and I wasn't able to come to the lab times on wednesday and thursday because I had gotten called into work. If it is possible, could I go over what I could have done for the rest of the project? How I could have gotten the rest of the deliverable up and running? The greatest difficulty I had was getting stuck after naming the file. I spent hours researching different ways to get the file i/o working and I just wasn't able to figure it out. I was able to follow through with the individual parts of the assignment, besides the file i/o, but my overall outcome was not what I wish it was and I wish I had been more vocal on slack at the time I needed the help, rather than later and that I had alotted more time to the project. I thought that 10+ hours working on it would be enough (yes, that is how long I spent on what I got completed), but apparently not. I would like to go over what I was doing wrong in this deliverable. I want to make sure that I understand the content so I don't get left in the dust as we progress through the rest of the class. I know I am not going to get a lot of points for this, but I just want you to know that I tried my best with the time I had.
## ***
## Description
My goal was to have the user input three different values, each between 0-255 and create the name of the file. I would use the three values in an RGB format to collect the data for a single color. After finding the first color, I would input values to allow for the addition of 5 other colors that do not conflict with the user's input color in the form of colorvision/colorblindness. For instance, if the user was to enter a value that has a higher green value (making the overall color more green), I would choose colors that have a lower value for green. This is because individuals with Deuteranopia/Deuteranomaly (difficulty seeing green) type of colorblindness would have difficulties seeing other colors that had a lot of green in it. If it were a higher red value, I would choose a lower value of red, so that individuals with Protanopia (can't see red light) will be able to still enjoy the six colored theme it would make. With these two combinations in mind, I would also need to stay away from the high blue/yellow values, because people who have Tritanopia (difficulty distinguishing blue/yellow colors) would have a hard time distinguishing them. So, there are different combinations of colors that can be used that are pretty universal. The main color is actually in the blue category. Not dark blue or regular blue, but a lighter blue, a little more towards the light purple side. This color, and colors around this value are mostly visible to all the different forms of colorblindness. However, it is particularly difficult to take each of theese into account when creating this deliverable.

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

Enter the 'Red' value. 
-13
This value was not between 0-255. Please enter another value.
138

Enter the 'Green' value. 
326
This value was not between 0-255. Please enter another value.
247

Enter the 'Blue' value. 
258
This value was not between 0-255. Please enter another value.
92

Choose a name for the file. 
The Six Color Problem Solver
 
```

## C++ Guide

### Variables and Data Types
I was able to successfully define two variables, both the three color values that the user chose and the file name. For the color values, I had the user choose three values between 0-255. This was so that I could get the three number values that I need for the RGB color that the user has chosen. After I got these values, my goal was to write them to a file and have the file save these values and produce additional color values based on the input. I stored these values as an integer data type. This is because I need number values to represent the color. In addition to the RGB color values that were stored as integers, I created a string that stored the name of the file that the user input. Utilizing the string file made it so that I was able to take the collection of characters that were input by the user and store it into a variable that I would use to write and read from the file. If I was able to get further, I would have also added a character data type. I would have asked the user to input either 'y' or 'n' to ask if they would want to repeat the steps to choose another color.

### Console Input and Output
I was able to utilize a few input and output statements throughout this deliverable. I used the output function to ask for the color values that the user wanted to choose, as well as what they wanted to name the file. I also included the output function to let the user know if they had entered in an incorrect integer (outside of 0-255). In addition to these different uses of outputs, I had inputs for the user to enter in the value after they were requested to do so, as well as giving the file a name.

### Decisions
I was able to finish a total of two separate decisions. I use the 'if' and 'else' statements to determine if the input values for the color were in the accepted range. So, 'if' the user input a value that was within the threshold that I had set for the RGB values (0-255), then it would continue to the next part of the deliverable. Otherwise, I used 'else' to repeat the loop until the input was within the threshold.

### Iteration
Where I got to in the deliverable, I was able to complete a do...while loop. I used these loops to ask for the values of each of the colors until I got a number that was within my parameters. I looked at different ways that I could incorporate all of those do...while loops into one single loop, but I wasn't able to find anything. I was thinking if I put nested loops in, but I only saw nested loops in 'for' loops, and I couldn't figure out how to incorporate a 'for' loop in my situation. I think this is what was throwing off being able to write to a file.

### File Input and Output
I tried my best to figure out the file i/o portion of this project. Unfortunately, it was literally the biggest part of the project and I wasn't able to complete it, but I would like to figure out what I was doing wrong, so I can do it right in the future. I had one point where it would write the file when I named it, but I had a different type of loop, and I don't even remember which one it was. I changed the loops, got it working, and then I wasn't able to figure out the file writing again. I obviously didn't do it right, but I want to know what I needed to do to change it and get it right.