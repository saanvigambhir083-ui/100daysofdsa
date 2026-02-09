// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.
void reverseString(char* s, int sSize) 
{   char temp;
    int i=sSize-1;
    int j=0;
    while(i>=sSize/2)
    {
     temp=s[i];
     s[i]=s[j];
     s[j]=temp;
     j++;
     i--;
    }
}