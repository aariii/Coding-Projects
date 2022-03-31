#include <iostream>
#include<stdio.h>
using namespace std;
struct User{
string firstname;
string lastname;
string sex;
int age;
double height;
double miles;
double sum;
string answer;
};
int week=7;

string yes;
int sum(int weeklyMiles[], int n)
{
    int sum = 0; // initialize sum
 
    // Iterate through all elements
    // and add them to sum
    for (int i = 0; i < n; i++)
    sum += weeklyMiles[i];
 
    return sum;
}
int main()
{

    char answer = 'y';
string yes;
    User user1;
    User user2;
    User user3;
    int choice;
    cout << "Welcome to Fitness Tracker"<<endl;
    do{
cout << "Input User ID" << endl;
cin >> choice;

   if (choice == 1)
    {user1.firstname = "Jaylin";
        user1.lastname = "Collins";
        user1.sex = "Male";
        user1.age = 20;
        user1.height = 72;
        user1.miles;
        
        
        
    cout << "First name: " << user1.firstname << endl;
    cout << "Last name: " << user1.lastname << endl;
    cout << "Age: " << user1.age << " Yrs"<< endl;
    cout << "Sex: "<< user1.sex << endl;
    cout << "Height: " << user1.height << " Inches"<< endl;
        int weeklyMiles [week];// limits size of the array
        int i;
    for ( i=0; i< week; i++){
            cout << "How many miles did you travel this week by foot?"<< endl;
            cout << "Enter miles for Sunday-Saturday. Press Enter after each value"<< endl;
            cin >> weeklyMiles [i];}
            for (i=0; i < week;i++)
            {cout << weeklyMiles[i]<< " " ;}
        cout << endl;
        int n = sizeof(weeklyMiles) / sizeof(weeklyMiles[week]);
        user1.miles=sum(weeklyMiles, n);
        
    cout <<"Your total miles for the week: "<< user1.miles<<" Miles" << endl;
        cout << endl;
    cout << "Would you like to add another Users miles to yours (y/n)?"<< endl;
        cin >> answer;}
   else if (choice==2)
    {user2.firstname = "Ari";
    user2.lastname = "Avant";
    user2.sex = "Female";
    user2.age = 10;
    user2.height = 54;
    user2.miles;

    cout << "First name: " << user2.firstname << endl;
    cout << "Last name: " << user2.lastname << endl;
    cout << "Age: " << user2.age << " Yrs"<< endl;
    cout << "Sex: "<< user2.sex << endl;
    cout << "Height: " << user2.height << " Inches"<< endl;
        int weeklyMiles [week];// limits size of the array
        int i;
        for ( i=0; i< week; i++){
            cout << "How many miles did you travel this week by foot?"<< endl;
            cout << "Enter miles for Sunday-Saturday. Press Enter after each value"<< endl;
            cin >> weeklyMiles [i];}
            for (i=0; i < week;i++)
            {cout << weeklyMiles[i]<< " " ;}
        cout << endl;
        int n = sizeof(weeklyMiles) / sizeof(weeklyMiles[week]);
        user2.miles=sum(weeklyMiles, n);
    cout <<"Total Miles for the week: "<< user2.miles <<" Miles" <<endl;
        cout << endl;
        cout << "Would you like to add another Users miles to yours (y/n)?"<< endl;
        cin >> answer;}
   else if ( choice==3)
    {user3.firstname = "Oliva ";
    user3.lastname = "Miller";
    user3.sex = "Female";
    user3.age = 17;
    user3.height = 60;
    user3.miles;
    cout << "First name: " << user3.firstname << endl;
    cout << "Last name: " << user3.lastname << endl;
    cout << "Age: " << user3.age<< " Yrs" << endl;
    cout << "Sex: "<< user3.sex << endl;
    cout << "Height: " << user3.height << " Inches"<< endl;
        int weeklyMiles [week];// limits size of the array
        int i;
        for ( i=0; i< week; i++){
            cout << "How many miles did you travel this week by foot?"<< endl;
            cout << "Enter miles for Sunday-Saturday. Press Enter after each value"<< endl;
            cin >> weeklyMiles [i];}
            for (i=0; i < week;i++)
            {cout << weeklyMiles[i]<< " " ;}
        cout << endl;
        int n = sizeof(weeklyMiles) / sizeof(weeklyMiles[week]);
        user3.miles=sum(weeklyMiles, n);
    cout <<"Total Miles for the week: "<< user3.miles<<" Miles" << endl;
        cout << endl;
    cout << "Would you like to add another Users miles to yours(y/n) ?"<< endl;
        cin >> answer;}
        else {cout << " Invalid User Selection Please Try Again"<< endl;}
    
    //{ cout << "Total miles of the group is " << user1.miles + user2.miles +user3.miles << " Miles"<<endl;}}
    
cout << "Total miles of the group is " << user1.miles + user2.miles +user3.miles << " Miles"<< endl;


}
    while (answer == 'y'|| answer == 'Y');
if (answer != 'y'|| answer != 'Y')
{cout << endl;
    return 0;}}
