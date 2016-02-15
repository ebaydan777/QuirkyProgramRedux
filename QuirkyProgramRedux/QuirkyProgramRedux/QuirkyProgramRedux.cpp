/**************************************************************************
***************************************************************************
***************************************************************************
***                                                         			***
***                   		ID INFORMATION                         		***
***                                                         			***
***		Programmers				:			Daniel Maris          		***
***		Assignment #		 	:   		TA #1.1Q					***
***		Assignment Name			:	    	Quirky Programming			***
***		Course # and Title		:	    	CISC 192 - C++				***
***		Class Meeting Time		:	    	MW 9:35 – 12:45				***
***		Instructor				:	    	Professor Forman 			***
***		Hours			   		:			14.5						***
***		Difficulty				:	    	3							***
***		Completion Date			:	    	02/07/2016  				***
***		Project Name			:  	    	DanielsQuirks	 			***
***                                                         			***
***************************************************************************
***************************************************************************
***                                                         			***
***                   	     PROGRAM DESCRIPTION						***
***                                                         			***
***   	This program will display various quirks from some of the		***
***   	students in Professor Forman's C++ class. You are able to		***
***   	view my airplane logo and 2 quirks from each student. There		***
***     are a total of 7 student's quirks including myself with a		***
***		total of 14 quirks altogether.									***
***                                                         			***
***************************************************************************
***************************************************************************
***                                                         			***
***                        			CREDITS					            ***
***                                                         			***
***   	Thank you to everyone that was able to help me with tips		***
***		and tricks to get some of the lines in here working proper!		***
***                                                         			***
***   	Thanks for assistance and help from:           					***
***                                                         			***
***        Mohamed, JP, Johnny, Todd, Shane & Professor Forman        	***
***                                                         			***
***   	Thanks for the opportunity to assist and inspire:				***
***																		***
***		   Johnny, JP, Todd, Allison, Eric, Alex & George				***
***																		***
***                                                         			***
***************************************************************************
***************************************************************************
**************************************************************************/


#include <iostream>		//Required for cin and cout
#include <string>		//Required for string variables
#include <windows.h>	//Required for Handle, BACKGROUND_ &
//FOREGROUND_ consts, SetConsoleTextAttribute	
#include <mmstream.h>	//Required for PlaySound Feature

#pragma comment(lib, "winmm.lib")	


using namespace std;	//Standard Naming Conventions



						//FUNCTIONS : EDIT THIS!

void welcome();
//This is a void function with no parameters

void hitEnter1();
//This is a void function with no parameters

void hitEnter2();
//This is a void function with no parameters

void hitEnter3();
//This is a void function with no parameters

void danielsLogo();
//This is a void function with no parameters

//void PromptLogin();
//This is a void function with no parameters

//void EchoName();
//This is a void function with no parameters

void danielsQuirksIntro();
//This is a void function with no parameters

void danielsQuirks1();
//This is a void function with no parameters

void danielsQuirks2();
//This is a void function with no parameters

void jpsQuirksIntro();
//This is a void function with no parameters

void jpsQuirks1();
//This is a void function with no parameters

void jpsQuirks2();
//This is a void function with no parameters

void toddsQuirksIntro();
//This is a void function with no parameters

void toddsQuirks1();
//This is a void function with no parameters

void toddsQuirks2();
//This is a void function with no parameters

void allisonsQuirksIntro();
//This is a void function with no parameters

void allisonsQuirks1();
//This is a void function with no parameters

void allisonsQuirks2();
//This is a void function with no parameters

void alexsQuirksIntro();
//This is a void function with no parameters

void alexsQuirks1();
//This is a void function with no parameters

void alexsQuirks2();
//This is a void function with no parameters

void georgesQuirksIntro();
//This is a void function with no parameters

void georgesQuirks1();
//This is a void function with no parameters

void georgesQuirks2();
//This is a void function with no parameters

void ericsQuirksIntro();
//This is a void function with no parameters

void ericsQuirks1();
//This is a void function with no parameters

void ericsQuirks2();
//This is a void function with no parameters

void farewell();
//This is a void function with no parameters


///////////////////////////////////////////////////////////////////////////
//				CONSTANTS DECLARATIONS AND DEFINITIONS					 //
//																		 //	
const char		MY_NAME[] = "DANIEL MARIS";		//MY Name			 //
//																		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
//																		 //
//		Using HANDLE with predefined RGB colors							 //
	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);				 //
																		 //
	string userName;				//Login Name Defined				 //
//																		 //
///////////////////////////////////////////////////////////////////////////

int main()
{

///////////////////////////////////////////////////////////////////////////
//				 OTHER SELF-NOTES INCLUDED FROM HANDOUTS				 //
//																		 //
//	A)	Red-Green-Blue Color Codings, known as RGB colors,				 // 
//		are used in computer displays. Here:							 //
//																		 //
//		red = 4				red = 64									 //
//		green = 2			green = 32									 //
//		blue = 1			blue = 16									 //
//																		 //
//		for text colors		for background colors	                     //
//																		 //
//	B)	__TIMESTAMP__ uses the macro built into VS to display			 //
//		current time and date!											 //
//																		 //	
///////////////////////////////////////////////////////////////////////////


PlaySound(TEXT("topgun.wav"), 0, SND_ASYNC);	 //Play song until end of this program.

	welcome();

	hitEnter1();

	danielsLogo();

	danielsQuirksIntro();

	danielsQuirks1();

	danielsQuirks2();

	jpsQuirksIntro();

	jpsQuirks1();

	jpsQuirks2();

	toddsQuirksIntro();

	toddsQuirks1();

	toddsQuirks2();

	allisonsQuirksIntro();

	allisonsQuirks1();

	allisonsQuirks2();

	alexsQuirksIntro();

	alexsQuirks1();

	alexsQuirks2();

	georgesQuirksIntro();

	georgesQuirks1();

	georgesQuirks2();

	ericsQuirksIntro();

	ericsQuirks1();

	ericsQuirks2();

	danielsLogo();

	farewell();
	return 0;

}

//WELCOME MESSAGE																//#1
void welcome()
{
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\n\n\n\n\n\t\t\t WELCOME TO ";        //Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << MY_NAME;							   //Set color attribute to # 11 color CYAN + INTENSITY 
	SetConsoleTextAttribute(consoleHANDLE, 10); cout << "' QUIRKY";							   //Set color attribute to # 10 color GREEN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 13); cout << " PROGRAM!\n\n";					   //Set color attribute to # 12 color RED + INTENSITY
}

//HIT ENTER MESSAGE	1															//#2

void hitEnter1()
{
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\t\t\t\t\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\n\t\t\t\t\272";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "  HIT ENTER TO CONTINUE!";
	SetConsoleTextAttribute(consoleHANDLE, 11);	cout << " \272\n";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << " \t\t\t\t\272";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "      \333\333\333\333\333             ";
	SetConsoleTextAttribute(consoleHANDLE, 11);	cout << " \272";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\n\t\t\t\t\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274";
	cin.ignore();
	system("cls");
}

//DANIEL'S LOGO of an Aircraft with D and M initals on the tail					//#3
void danielsLogo()
{
		SetConsoleTextAttribute(consoleHANDLE, 11);
		cout << "\n\n"
		<< "      \043\043\043\043\n"
		<< "      \043\043\043\043\043\n"
		<< "      \043\043\043\043\043\043\n"
		<< "      \043\043\043\043\043\043\043\n"
		<< "      \043\043\043\043\043\043\043\043\n"
		<< "      \043\043\043\043\043\043\043\043\043\n"
		<< "      \043\043\043\043\043\043\043\043\043\043\n"
		<< "      \043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262\262\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262\262\262\262\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043                 ";
	SetConsoleTextAttribute(consoleHANDLE, 3); cout << "\043\043\n";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "      \043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043                ";
	SetConsoleTextAttribute(consoleHANDLE, 3); cout << "\043\043\043\n";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "      \043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043               ";
	SetConsoleTextAttribute(consoleHANDLE, 3); cout << "\043\043\043\043\n";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "      \043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262\262\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\262";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043              ";
	SetConsoleTextAttribute(consoleHANDLE, 3); cout << "\043\043\043\043\043\043\n";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "  \043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\n"
		<< "  \043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\n"
		<< "       \043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\n"
		<< "           \043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\261\261\261";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\n"
		<< "                  \043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\n"
		<< "                          \043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\043\n"
		<< "                                                    \043\043\043\043\043\043\043\043\043\043\043\n"
		<< "                                                     \043\043\043\043\043\043\043\043\043\043\n"
		<< "                                                       \043\043\043\043\043\043\043\043\n";
	hitEnter1();
	return;
}


/*USER LOGIN SCREEN (FIRST NAME)												//#5

SetConsoleTextAttribute(consoleHANDLE, 11);
cout << "\n\n\n\n\tPlease Login With Your First Name: ";
SetConsoleTextAttribute(consoleHANDLE, 12); cin >> userName;		//using String Variable for Name.

//ECHO BACK USERNAME IN #5														//#6

cout << ("\n\n\n\tLogging in at: \n\n");
cout << "\t";
system("time /t");
cout << "\t";
system("date /t");
system("color BC"); Sleep(250);		//Cyan background and Red text + Date & Time!
system("color CB"); Sleep(250);		//Red background and Cyan text
system("color BC"); Sleep(250);		//Cyan background and Red text
system("color CB"); Sleep(250);		//Red background and Cyan text
system("color BC"); Sleep(250);		//Cyan background and Red text
system("color CB"); Sleep(250);		//Red background and Cyan text
system("color BC"); Sleep(250);		//Cyan background and Red text
system("color CB"); Sleep(250);		//Red background and Cyan text
system("color 07"); Sleep(1);		//Reset to Black background and White text
system("cls");
SetConsoleTextAttribute(consoleHANDLE, 11);
cout << "\n\n\n\n\tYour Login Name ";
SetConsoleTextAttribute(consoleHANDLE, 12); cout << userName;
SetConsoleTextAttribute(consoleHANDLE, 11); cout << " Was Accepted!";
SetConsoleTextAttribute(consoleHANDLE, 12);
cout << "\n\tYour Login Time was " << __TIMESTAMP__;				//__TIMESTAMP__ Used here for full Date & Time Display
SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\n\n\tThank You.\n";
cin.ignore();
*/

//HIT ENTER MESSAGE 1


//DANIEL'S QUIRK INTRO MESSAGE													//#8

void danielsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t       \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "DANIEL'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS! ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337\337\337         ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//HIT ENTER MESSAGE #4															//#10

void hitEnter2()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HIT ENTER TO CONTINUE!";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \336\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "      \333\333\333\333\333             ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\336";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cin.ignore();
	system("cls");
}

void hitEnter3()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HIT ENTER TO CONTINUE!";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \336\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "      \333\333\333\333\333             ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\336";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cin.ignore();
	system("cls");
}

void hitEnter4()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HIT ENTER TO CONTINUE!";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \336\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "      \333\333\333\333\333             ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\335\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\336";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cin.ignore();
	system("cls");
}

void danielsQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\n\n\n\tDaniel's ";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "First Quirk is an Odd One!:";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n I am a partnered Twitch Streamer and usually stream on some weekday nights.\n"
		<< " I randomly taught myself how to use some aircrafts avionics and teach others ages 17-65 on how to use them.\n"
		<< " Also, I learned last year that I encouraged a 60-year-old to get his private pilot license, and passed.\n\n\n";
	hitEnter2();
	return;
}

//DANIEL'S QUIRK #2																//#11

void danielsQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\n\n\n\tDaniel's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Odd Quirk is:";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Another quirk is that I enjoy ranch with pretty much most foods especially chicken and pizza.\n"
		" I tend to actually rate a restaurant on good its ranch is.\n"
		" I probably wouldn’t go back again if it was bad.\n\n\n";
	hitEnter2();
	return;
}

//1ST PARTNER QUIRK	- JP'S INTRO												//#13

void jpsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t    \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "JP'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337          ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//1ST PARTNER QUIRK #1	- JP's Quirks											//#14
void jpsQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "JP's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "First Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n JP used to hate slurpees until a short time ago \n"
		" His mind changed about slurpees when his parents open their own 7-11 store, now he loves them!\n"
		" His favorite flavor is Blue Raspberry but Cherry is a close second.\n\n\n";
	hitEnter2();
	return;
}


//1ST PARTNER QUIRK #2	- JP's Quirks											//#16

void jpsQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "JP's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n JP likes to wear different and unique socks with many patterns and logos on them.\n"
		" He owns 30 different pairs of unique socks.\n"
		" The most expensive pair of socks in his collection are $35.\n\n\n";
	hitEnter2();
	return;
}

//2ND PARTNER QUIRK	- TODD'S INTRO												//#18

void toddsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t      \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "TODD'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337          ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//2ND PARTNER'S QUIRK #1	- Todd's Quirks										//#19

void toddsQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Todd's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "First Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n At one point, Todd used to raise pigeons!\n"
		" His favorite pigeon in particular is the Birmingham Roller.\n"
		" This pigeon is famous for their ability to do backflips mid-air!\n\n\n";
	hitEnter2();
	return;
}

//2ND PARTNER QUIRK #2		- Todd's Quirks										//#21

void toddsQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Todd's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Todd enjoys learning various things about airplanes.\n"
		" He is well informed on many systems having to do with aircrafts, like lasers, video and GPS. His favorite is radar.\n"
		" However his knowledge does not make his wife feel anymore comfortable about flying!\n\n\n";
	hitEnter2();
	return;
}

//3RD PARTNER QUIRK	- ALLISON'S INTRO											//#23

void allisonsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t         \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "ALLISON'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337\337\337\337       ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "   \1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//3RD PARTNER QUIRK #1		- Allison's Quirks									//#24

void allisonsQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Allison's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "First Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n She likes eating her food in a particular order from food she likes the least to food she like the most.\n"
		" she start by eating a small amount of everything on her plate and rating it in her head. She slowly works around \n"
		" her plate eating her least favorite items. Allison eventually finishes her plate eating her favorite thing last.\n\n\n";
	hitEnter2();
	return;
}

//3RD PARTNER QUIRK #2		- Allison's Quirks									//#26

void allisonsQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Allison's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Allison has a very short attention span when it comes to trying to relax.\n"
		" When watching TV, she's usually reading or browsing the internet. This makes it hard to \n"
		" pay attention especially when you can pause and come back! The opposite is true while she \n"
		" plays video games where she must check back into reality!\n\n\n";
	hitEnter2();
	return;
}

// 4TH PARTNER QUIRK - ALEX'S INTRO												//#28

void alexsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t      \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "ALEX'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337         ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//4TH PARTNER QUIRK #1		- Alex's Quirks										//#29

void alexsQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Alex's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "First Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Alex has a tendency to be an active sleeper. He is one to toss and turn, talk and even \n"
		" yell in his sleep. He has even slept walk before! \n"
		" There is even an instance in High School that he took an order during his sleep for Subway, where he worked.\n\n\n";
	hitEnter2();
	return;
}

//4TH PARTNER QUIRK #2		- Alex's Quirks										/#31

void alexsQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Alex's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Alex really hates tomatos. It does not bring him any joy eating it, he is not sure exactly \n"
		" What it is about tomatos. Kethchup on the other hand he loves.\n"
		" Comparitively, ketchup brings Alex much joy.\n\n\n";
	hitEnter2();
	return;
}


//5TH PARTNER QUIRK	- GEORGE'S INTRO											//#33

void georgesQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t        \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "GEORGE'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337\337\337       ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "   \1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//5TH PARTNER QUIRK #1		- George's Quirks									//#34

void georgesQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "George's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "First Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n George likes to play online computer games. His favorites are World of Warcraft, Diablo 3 & \n"
		" Heroes of the Storm. He dislikes playing by himself so he make sure a friend joins him when he's actively online.\n"
		" He realizes how much time he wastes when play alone, but friends help forget and just enjoy the game!\n\n\n";
	hitEnter2();
	return;
}

//5TH PARTNER QUIRK #2		- George's Quirks									//#36

void georgesQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "George's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n George has a very eclectic taste in music. He is great at 'Name that Tune' and has few genres \n"
		" that he dislikes. The quirkiest music he enjoys is KPOP or Koreon Pop and even keeps up with the latest songs. \n"
		" Some of his current favorite Kpop bands are SNSD, Red Velvet, Sistar, Shinee, f(x), and Twice.\n\n\n";
	hitEnter2();
	return;
}

//6TH PARTNER QUIRK - ERIC'S INTRO												//#38

void ericsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t      \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "ERIC'S ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337         ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " \1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
}

//6TH PARTNER QUIRK #1		Eric's Quirks										//#39

void ericsQuirks1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Eric's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "First Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Eric hates the mall, plain and simple. He disagrees with the level of advertising and fake potrayal\n"
		" everywhere you look. Eric feels as though everyone is there to sell you something or manipulate you into\n"
		" buying something you dont necessarily need.\n\n\n";
	hitEnter2();
	return;
}

//6TH PARTNER QUIRK #2		- Eric's Quirks										//#41

void ericsQuirks2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "Eric's ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "Second Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Eric likes to spend his time researching random topics or questions when he is procrastinating.\n"
		" He'll usually search wikipedia or other sources when something comes to mind. He can usually fill hours\n"
		" of time doing this when bored, but can be bad when wasting time.\n\n\n";

	hitEnter2();
	return;
}

//DANIEL'S LOGO of an Aircraft with D and M initials on the tail				//#43


//HIT ENTER MESSAGE 1														//#44


//FAREWELL ENDING MESSAGE														//#45

void farewell()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\t\t              Thank You ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << userName;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " for Visiting\n";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << "\n\t\t\t\t Daniel's ";
	SetConsoleTextAttribute(consoleHANDLE, 10); cout << "Quirky ";
	SetConsoleTextAttribute(consoleHANDLE, 13); cout << "Program!\n\n\n\n\n";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\t\t\t######       ##      ##     ########       ###"
		<< "\n\t\t\t##   ##	      ##    ##      ##             ###"
		<< "\n\t\t\t##   ##        ##  ##       ##             ###"
		<< "\n\t\t\t##   ##         ####        ##             ###"
		<< "\n\t\t\t######           ##         ########       ###"
		<< "\n\t\t\t##   ##          ##         ##             ##"
		<< "\n\t\t\t##   ##          ##         ##             ##"
		<< "\n\t\t\t##   ##          ##         ##             "
		<< "\n\t\t\t######           ##         ########       ##";

	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\t";
	system("pause");										// Will Wait for user to hit any key to exit
}