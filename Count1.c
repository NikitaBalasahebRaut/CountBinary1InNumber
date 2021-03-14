/*
    Problem statement :
 Accept number from user and count number of 1 in the binary format.
 */
 
  #include<stdio.h>
 
  int DisplayBinary(int iValue)
 {
   int iDigit = 0;
   int iCount = 0;
   
   while(iValue != 0)
   {
     iDigit = iValue % 2;
	 
	 if(iDigit == 1)
	 {
	    iCount++;
	 }
	 iValue = iValue /2;
   }
   
   return iCount;
 }
 
 int main()
 {
  int iNo = 0;
  int iRet = 0;
  
  printf("Enter The No \n");
  scanf("%d",&iNo);
  
  iRet = DisplayBinary(iNo);
  
  printf("No of 1's  in number is : %d\n", iRet);
 
 return 0;
 }
 
 /*
 
 output
 
 Enter The No
12                //0011
No of 1's  in number is : 2

*/