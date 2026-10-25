#include <iostream>
using namespace std;

int main() {
 // Define the 3x3 matrix
 const int rows = 3;
 const int cols = 3;
 int matrix[rows][cols] = {
 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };

 // Print the original matrix
cout << "Original Matrix:" <<endl;
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
cout << matrix[i][j] << " ";
 }
cout <<endl;
 }

 // Transpose the matrix
 int transposed_matrix[cols][rows];
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 transposed_matrix[j][i] = matrix[i][j];
 }
 }

 // Print the transposed matrix
cout << "\nTransposed Matrix:" <<endl;
 for (int i = 0; i < cols; i++) {
 for (int j = 0; j < rows; j++) {
cout << transposed_matrix[i][j] << " ";
 }
cout <<endl;
 }

 return 0;
}


