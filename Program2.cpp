#include <bits/stdc++.h>
using namespace std;
stack <int> st;
void push_digits(int number)
{
	while (number != 0) 
	{
		st.push(number % 10);
		number = number / 10;
	}
}
int reverse_number(int number)
{
	push_digits(number);
	
	int reverse = 0;
	int i = 1;
	while (!st.empty()) 
	{
		reverse = reverse + (st.top() * i);
		st.pop();
		i = i * 10;
	}
	return reverse;
}
int main()
{
    int n;
	cout<<"Enter number to be reversed : ";
	cin>>n;
	cout<<"Reversed number is "<<reverse_number(n);
	return 0;
}
