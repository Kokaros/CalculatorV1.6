#include <iostream> 
#include <string.h>
using namespace std;

int main ()
{
	char option;
	std::string ans;
	float number1, number2;
	int repeater=1;
	
	
	do {
		cout <<"Which operation you want to perform\n1. a for addition\n2. s for subtraction\n3. m for multiplication\n4. d for division\n5. press e to exit the program\n";
		std::getline(std::cin, ans);
			
	
		if (ans.length() != 1)
		option=1;
		else
		option=ans[0];
		
		bool valid = false;

		switch (option)
		{
			case 'e':
				repeater=0;
			break;
			case 'a':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}
			}
				cout<<"The answer is ";
				cout<<number1 + number2;
				cout<<"\n\n";
				break;
			case 's':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				cout<<"The answer is ";
				cout<<number1 - number2;
				cout<<"\n\n";
				break;
			case 'm':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}	

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				cout<<"The answer is ";
				cout<<number1 * number2;
				cout<<"\n\n";
				break;
			case 'd':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
			
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				if(number2==0)
				cout<<"Cannot be performed, the answer is undefined \n";
				else
				{
				cout<<"The answer is ";
				cout<<number1 / number2;
				cout<<"\n\n";
				}
				break;
			default:
				cout<<"\nError, wrong operation was given\n\n";
				break;
		
		
	}}
	while (repeater != 0);
	return 0;
}


