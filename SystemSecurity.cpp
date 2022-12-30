#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  int userChoice, i=0,  originalPassword;
  string text,old,firstPassword,secondPassword, pass, userName, age, user, word, firstWord ;
  string creds[2], cp[2];
  
  cout << "		Security System " << endl;
  cout << "_________________________" << endl;
  cout << endl;
  cout << "1. 	Register	   " << endl;
  cout << "2. 	Login		   " << endl;
  cout << "3. 	ChangePassword " << endl;
  cout << "4. 	End Program    " << endl;
  cout << "_________________________" << endl;
  

  	cout << endl<<endl;
  	cout << "Please enter your choice: ";
  	cin >> userChoice;
  	
  	switch(userChoice)
  	{
  		case 1:
  			cout << "________________________" << endl;
  			cout << "--------REGISTER--------" << endl;
  			cout << "________________________" << endl;
  			cout << "Please enter username: ";
  			cin >> userName;
  			cout << "Please choose a password: ";
  			cin >> originalPassword;
  			cout << "Please enter your age: ";
  			cin >> age;
  			
  			ofstream of1;
  			of1.open("file.txt");
  			if(of1.is_open())
  			{
  				of1 << userName << "\n ";
				of1 << originalPassword	;
				cout << "Your registration was successful" << endl;
			}
  			break;
  			
  		case 2:
  			
  			i = 0;
  			cout << "________________________" << endl;
  			cout << "--------LOGIN--------" << endl;
  			cout << "________________________" << endl;
  			ifstream of2;
  			of2.open("file.txt");
  			cout << "Please enter username: ";
  			cin >> userName;
  			cout << "Please enter password: ";
  			cin >> pass;
  			

  	}
}
