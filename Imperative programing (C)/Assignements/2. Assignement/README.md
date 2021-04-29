# 📓 Task Collatz Conjecture

Create a program, that calculates the length of the Collatz sequence from a given integer.  
The first element of the Collatz sequence is a natural number.  
The rest of the elements of the sequance is defined recurively:  
if the previous element was odd, than the next element is (the previous element * 3) + 1,  
if it was even, than the next element is (the previous element / 2).  
  
For example if we start with the number 3, the sequence would look like this: 3, 10, 5, 16, 8, 4, 2, 1.  
According to the Collatz conjecture this sequence always reaches 1, therefore it is always the last element of the sequence.  
So, the length of the Collatz sequence starting with 3 is 8.  
  
The program expects the first element of the sequence as an input.  
The program should write to the console:  
  
- The Collatz sequence from the input number (its elements are separated by commas)   
- The length of the sequence in a new row  
