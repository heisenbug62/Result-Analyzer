# Result-Analyzer
A CPP console that reads the names, reg # and their marks in quiz, assignment, mids and finals and evaluates their results.


This program reads student data from a CSV file, calculates their final grades based on weighted scores for assignments, quizzes, midterms, and final exams, and then writes the results to an output file.

- Features:
Reads student information from a CSV file (sample.txt), including name, registration number, and scores for assignments, quizzes, midterms, and finals.
- Calculates the final grade based on the following weight distribution:
Assignment: 15%
Quiz: 15%
Midterm: 25%
Final Exam: 45%
-Assigns a grade based on the total score:
-A: 86% and above
-B: 75% to 85%
-C: 65% to 74%
-D: 55% to 64%
-F: Below 55%
Outputs the student name, registration number, and grade to a new file (result.txt).
-How It Works:
The program attempts to open an input file (sample.txt). If the file doesn't exist, an error message is displayed.
It then reads each student's information, calculates the total score based on the weights, assigns a grade, and writes the results to result.txt.
The program handles multiple students' data sequentially, processing each record line by line.
- Usage:
Place your student data in a sample.txt file in CSV format.
Compile and run the program.
View the generated grade report in result.txt.
Technologies Used:
C++ Programming Language
File I/O with fstream
License:
This project is open-source and available under the MIT License.
