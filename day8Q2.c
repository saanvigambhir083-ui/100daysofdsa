// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2^x.
bool isPowerOfTwo(int n) 
{
 int i=0;
 while(i<=31)
 {
    if(pow(2,i)==n)
    return true;
    i++;
 }   
 return false;
}