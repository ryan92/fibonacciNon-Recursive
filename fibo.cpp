#include <iostream>

float fibo(int input);

int main()
{
 int inputs;
 while (true)
 {
 cout<<"enter number: ";
 cin>> inputs;
 cout<<fibo(inputs);
 }
 cin.get();
 cin.get();
 return 0;
}

float fibo(int input)
{
  int prev0=1,prev=1, i=2;
 	float result;
 	if (input > 1)
 	{
 		while(i<= input)
 		{
 			result=prev0+prev;
   		prev0=prev;
   		prev=result;
   		i++;
 		}
 		return result;
  	}
  	else
  		return prev0;
}
