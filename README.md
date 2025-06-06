# Pair-Sum
This is a simple C++ program that finds all pairs of numbers in a given array, finds the pair whose elements’ sum is equal to a target value and the indexes of these elements in the array.
## How it works:
1. Takes input for number of terms.
2. Takes input for array elements.
3. Takes a target sum.
4. Shows all pairs.
5. Highlights the pairs that match the target.
6. Show the indexes of the elements of the pair.
## How to run:
1. Use a C++ compiler like g++ or Code::Blocks.
2. Load your Pair_Sum.cpp file.
3. In VS.code compile the file: 'g++ Pair_Sum.cpp -o Pair_Sum'.
4. For Code::Blocks click Build and Run. Then input values in the console.
5. In VS.code run the code:'./Pair_Sum' for (Linux/mac) or 'Pair_Sum.exe' for (Windows).
## Code Snippet:
for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
        if(vec[i] + vec[j] == target_value) {
            cout << "Pair: (" << vec[i] << "," << vec[j] << ")";
        }
    }
}
## Sample Output:
Number of terms: 5  
Given array is: 1 3 2 4 5  
The target value is: 6  
Pair is: (1,3)  
Pair is: (1,2) 
...  
The pair which sum is equal to 6 is (2,4)  
The indexes of numbers of the pair are 2 and 3
