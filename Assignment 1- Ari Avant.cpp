#include <iostream>
using namespace std;
/*Algorithm setup
*Prompt user to enter month(stored as string)
*Ask user to enter the day(stored as string)
*Ask user to enter the year(stored as string)
*Output that into the following format 00/00/00
*Convert month and day into an int then multiple these two numbers
*Convert the year into an int
*Compare the product and year conversion
*If the product == the year conversion output "the date is magic"
*If not output "the date is not magic"
*/
int main() {
//Prompt user 	
cout<<"----------Magic Year Finder-----------\n\n\n"<<endl;
//Month day and year stored as strings
	string userMonth;
	string userDay;
	string userYear;
	
//Print on screen 
	cout<<"Enter the month in numeric form"<<endl;
	cin>>userMonth;
	cout<<"Enter the day in numeric form"<<endl;
	cin>>userDay;
	cout<<"Enter the year as a two digit number"<<endl;
	cin>>userYear;
	
//Format 00/00/00
cout<<"\n"<<endl;	
string userDate = userMonth +"/"+ userDay + "/" +userYear;
cout <<userDate<<endl;
/*Code from edpresso used to convert a string to an integer*/
/*int int_1 = stoi(str_example_1);
cout << "int_1 : " << int_1 << endl;*/

			 int conversion1 = stoi(userMonth);
			 int conversion2 = stoi(userDay);
			 int multiply = conversion1 * conversion2;
			 int conversion3 = stoi(userYear);
			 
//Compares multiply and conversion3			 
	if(multiply == conversion3){
		cout<<multiply<<" Is the product of the month times the year and the date is Magic!!!!!"<<endl;
	}
	else{
		cout<<multiply<<" Is the product of the month times the year and the date is not Magic!"<<endl;
	}
	 
return 0;
			
}


