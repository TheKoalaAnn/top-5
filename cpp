#include <iostream>
using namespace std;
int main() {
const int numStudents = 5; // Number of students is set to 5
int scores[numStudents]; // Array to store scores entered
~find the final and total costs after applying a discount
~Show the final bill for the user
~ the text file needs to be opened in order to save the information
~State the data that needs to be written ~close the file ~end
//ITPPA1-44 EDUV4908885 FORMATIVE

int sum = 0; // Sum of all scores
int highest, lowest; // Variables for highest and lowest scores
// Input scores and calculate sum
cout << "Please enter the scores of 5 students:\n";
for (int i = 0; i < numStudents; i++) {
cout << "Enter the score for student " << (i + 1) << ": ";
cin >> scores[i];
// Add score to sum
sum += scores[i];
// Initialize highest and lowest with the first score
if (i == 0) {
highest = scores[i];
lowest = scores[i];
}
else {
// Update highest and lowest scores
if (scores[i] > highest) {
highest = scores[i];
}
if (scores[i] < lowest) {
lowest = scores[i];
}
}
//ITPPA1-44 EDUV4908885 FORMATIVE

}
// Calculate the average
double average = static_cast<double>(sum) / numStudents;
// Display the results
cout << "\nScores in the order entered:\n";
for (int i = 0; i < numStudents; i++) {
cout << "Student " << (i + 1) << ": " << scores[i] << endl;
}
cout << "\nAverage score: " << average << endl;
cout << "Highest score: " << highest << endl;
cout << "Lowest score: " << lowest << endl;
return 0;
}
