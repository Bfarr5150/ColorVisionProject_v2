# !!!Replace with your unique project name!!!

## Description

!!!Replace with a description of what your program does!!!

### v0.2 Updates

*Coming soon*

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
!!!Replace with an example of the program running with user interaction!!!
```

## C++ Guide

### Variables and Data Types

I used a variety of variables and data types. The main data type I used was 'int', but I also used a 'bool' data type. The reason why 'int' was the most used data type was because my goal was to take the input of numbers, store the numbers, and utilize them in varying ways. I used many variables within my code. Each one with its unique purpose, and named appropriately for what they were representing in the code.

### Console Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!! The main form of user input I used was the gathering of the RGB values they chose, as well as the input of the name of their file. I had the user input 3 separate numbers between 0-255 and evaluated whether or not the value they gave was within the range or not. If it was in the range, the value would be stored and output, but if it was outside of the range, it would output an error message and request the user to input a valid value.

### Decisions

!!!Replace with a summary and examples of how multiple decision constructs have been used effectively and appropriately!!!
I used several decisions within my code. 

### Iteration

!!!Replace with a summary and examples of how iteration has been used effectively and appropriately!!!

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*























## The Six Color Problem Solver 
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