 // This program calculates the users grade.
 
  #include <iostream>
 using namespace std;

 int main()
 {
 int testScore; 
 char grade;
 bool goodScore = true;

 // Input the number score
 cout << "Enter your number test score. For example (75, 83, 95, etc.)\n";
 cin >> testScore;

 // Calculate the letter grade
 if (testScore < 60)
 grade = 'F';
 else if (testScore < 70)
 grade = 'D';
 else if (testScore < 80)
 grade = 'C';
 else if (testScore < 85)
 grade = 'B -'; 
 else if (testScore < 90)
 grade = 'B +';
 else if (testScore < 95)
 grade = 'A -'; 
 else if (testScore <= 100)
 grade = 'A';
 else
 goodScore = false; // The score was greater than 100

 // If the score is valid, display the corresponding letter grade;
 // otherwise, display an error message
  if (goodScore)
 cout << "Your grade is " << grade << endl;
 else
 cout << "Scores higher than 100, will receive a letter grade of A.\n";

 return 0;
 }