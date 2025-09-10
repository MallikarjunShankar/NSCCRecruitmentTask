# NSCC Technical Task 2: Interactive Quiz App

This project is a command-line quiz application developed in C for NSCC Technical Task 2. The program presents a series of multiple-choice questions, checks answers for correctness, provides detailed feedback, and summarizes the user's performance at the end.

## Features

### Multiple-Choice Questions: 
The quiz includes 5 questions, each with 4 answer options.

### Input Validation: 
Ensures only numbers between 1 and 4 are accepted for each question.

### Score Calculation: 
Displays the final score after all questions are answered.

### Detailed Feedback: 
Indicates which questions were answered correctly or incorrectly.

### Performance Summary: 
Provides a motivational message based on the user's score.

## How to Compile and Run

This program is written in standard C and can be compiled using any common C compiler (e.g., GCC).

### Prerequisites
A supported C compiler (such as GCC).

### Compilation
Open your terminal or command prompt.

Navigate to the project directory containing quiz.c.

Run the following command
```
bash
gcc quiz.c -o quiz
```
### Execution
After successful compilation, run the executable with:
```
bash
./quiz
```
## Program Overview
The application consists of a single C source file, quiz.c, and uses standard input/output for interaction:

### main() function: 
Initializes the score and user answer variables.

### printf(): 
Displays questions and instructions to the user.

### scanf(): 
Receives input from the user for each question.

### do-while loops: 
Validate input, ensuring entries are between 1 and 4.

### if-else statements: 
Check the answers and update the score and results for each question.

### Feedback: 
At the end, outputs correctness for each answer, the final score, and a performance message.

## Screenshots
![Start of Code](assets/screenshot1)
![During the Quiz](assets/screenshot2)
![End of Quiz](assets/screenshot3)

