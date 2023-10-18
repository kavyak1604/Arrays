# Arrays & Strings

In C++, an array is a data structure that is used to store multiple values of similar data types in a contiguous memory location.<br>
A string is a data type used in programming, that is used to represent text rather than numbers. A string is a sequence of characters and can contain letters, numbers, symbols and even spaces. It must be enclosed in quotation marks for it to be recognized as a string.

## THEORY
Arrays:<br>
Indexing of an array starts from 0. It means the first element is stored at the 0th index, the second at 1st, and so on.
Elements of an array can be accessed using their indices.Once an array is declared its size remains constant throughout the program.
An array can have multiple dimensions.
The number of elements in an array can be determined using the sizeof operator.
We can find the size of the type of elements stored in an array by subtracting adjacent addresses.
In C++, we can declare an array by simply specifying the data type first and then the name of an array with its size.
Data_type array_name[Size_of_array];<br>
Strings:<br>
The C-style character string originated within the C language and continues to be supported within C++.<br>
This string is actually a one-dimensional array of characters which is terminated by a null character '\0'.<br>
Thus a null-terminated string contains the characters that comprise the string followed by a null.<br>
It can be declared as char greeting[] = " ";



## Algorithm
a)FOR SEARCHING AN ARRAY:<br>
1)Set the initial value of the integer variable n to the array's size.<br>
2)Request that the user input the array's size and read it into n.<br>
3)Create a size-n integer array called a to hold the input elements.<br>
4)Request n integer entries from the user, then store them in the array a.<br>
5)To sort the array an in ascending order, use a bubble sort:<br>
6)Use the outer loop to iterate through each entry in the array (variable i).<br>
b)USING STRING FUNCTIONS:<br>
1)i (integer) to store the length of the first string.<br>
2)x (integer) to store the length of the concatenated string.<br>
3)str1 and str2 (strings) to store user-entered strings.<br>
4)strc (string) to store the concatenated result.<br>
5)Read the first string input from the user and store it in the str1 variable.<br>
6)Display the length of str1 to the user.<br>
7)Display a prompt to the user: "Enter the second string-".<br>
8)Read the second string input from the user and store it in the str2 variable.<br>
9)Concatenate str1 and str2 using the + operator and store the result in the strc variable.<br>
10)If str1 is equal to str2, display "Strings are equal."Otherwise, display "Strings are not equal.<br>



### Conclusion
Hence in this repository various programs like sorting,searching,printing,average sum etc.were performed using arrays and strings.



