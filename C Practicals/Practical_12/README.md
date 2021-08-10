# Practical 12
## _Write a C program to take 5 names as input and print the longest name._

### Description
- This program will Input 5 names from user Print the longest name.
- Names are stored in array of char pointer.
- A helper function getLen() is used for getting legth of names. 
 
### Issuses
- If the getLen() fuction gets a parameter with a string not having null charater('\0') in end it will be in infinite loop but it is not possble as gets() always put null charater in end.
- If names were of same length then longest name will first name where first same name start.  

