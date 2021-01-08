#include  <bits/stdc++.h>
using namespace std;

int main()
{
    string str1("First String"); //string defination

    string str2(str1);			//pass string as a parameter

    string str3(5, '#');		//declared 5 element string of # symbols

    string str4(str1, 7, 3);	//pass str1 and after 7th element show 3 element

    string str5(str2.begin(), str2.begin() + 5); //string starting to fifth element

    string str6 = str1;  //assignment operator


    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    cout<<str5<<endl;
    cout<<str6<<endl;

    cout<<"########################################"<<endl;

    cout<<"Before Clear"<<str4<<endl;
    str4.clear();				// Clear is used to clear the String
    cout<<"After Clear"<<str4<<endl;

    int len = str6.length();	//length fucntion is used to calculate the length of the string
    cout<<"length of the String"<<" "<<len<<endl;


    char ch = str1.at(2);  //character at specific position second
    cout<<ch<<endl;

    char ch_f = str1.front();  //first Character Of the String 
    cout<<"First character of string "<<ch_f<<endl;

    char ch_l = str1.back();	// Last Character Of the String
    cout<<"Last Character Of the String  "<<ch_l<<endl;

    const char* charstr = str6.c_str(); //made pointer array of the string
    cout<<charstr<<endl;

    str6.append(" Tushar"); // append means adding the string to the end of the existing string.
   	cout<<str6<<endl;

   	string str11 = "******";
   	cout<<str11<<endl;
   	str11.append(str1, 0, 5); //append str1's element from 0th position and 5 elements
   	cout<<str11<<endl;


   	if(str6.find(str4) != string::npos)
   		cout<<"str4 found in str6 at " <<str6.find(str4) <<"pos"<<endl;
   	else
   		cout<<"Str4 is not found in str6"<<endl; 
   	
   	cout<<str6.substr(7,5)<<endl; //this function creates substring of the str6 starting from 7 and having 5 elements
	
	cout<<str6.substr(6)<<endl; //this function is prints substring from the 7 pos to end.

	str6.erase(7, 4); //function erases the elements from 7 and 4 elements are erased
	cout<<str6<<endl;

	str6.erase(str6.begin() + 5, str6.end() - 3); //iterator version
	cout<<str6<<endl;

	str6 = "This is a example";

	str6.replace(2,7, "ese are test"); //replace the elements from 2 character and replaces 7 characters.
	cout<<str6<<"s"<<endl;

    return 0;
}