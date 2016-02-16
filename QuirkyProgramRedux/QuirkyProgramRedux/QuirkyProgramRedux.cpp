/**************************************************************************
***************************************************************************
***************************************************************************
***                                                         			***
***                   		ID INFORMATION                         		***
***                                                         			***
***		Programmers				:			Mohamed Ahmed, Daniel Maris ***
***											JP Sandhu, Johnny Nguyen	***
***		Assignment #		 	:   		TA #1.2Q					***
***		Assignment Name			:	    	Quirky Programming Redux	***
***		Course # and Title		:	    	CISC 192 - C++				***
***		Class Meeting Time		:	    	MW 9:35 – 12:45				***
***		Instructor				:	    	Professor Forman 			***
***		Hours			   		:			13							***
***		Difficulty				:	    	5							***
***		Completion Date			:	    	02/15/2016  				***
***		Project Name			:  	    	QuirkyProgramRedux			***
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

void hitEnter4();
//This is a void function with no parameters

void hitEnter5();

void johnnysLogo();
//This is a void function with no parameters

void danielsLogo();
//This is a void function with no parameters

void mohamedsLogo();
//This is a void function with no parameters

void jpsLogo();
//This is a void function with no parameters

//void PromptLogin();
//This is a void function with no parameters

//void EchoName();
//This is a void function with no parameters

void johnnysQuirksIntro();
//This is a void function with no parameters

void johnnysQuirk();
//This is a void function with no parameters

void allisonsQuirk();
//This is a void function with no parameters

void johnnysQuirk2();
//This is a void function with no parameters

void danielsQuirksIntro();
//This is a void function with no parameters

void danielsQuirk();
//This is a void function with no parameters

void alexsQuirk();
//This is a void function with no parameters

void georgesQuirk();
//This is a void function with no parameters

void mohamedsQuirksIntro();
//This is a void function with no parameters

void mohamedsQuirk1();
//This is a void function with no parameters

void mohamedsQuirk2();
//This is a void function with no parameters

void mohamedsQuirk3();
//This is a void function with no parameters

void jpsQuirksIntro();
//This is a void function with no parameters

void jpsQuirk();
//This is a void function with no parameters

void toddsQuirk();
//This is a void function with no parameters

void ericsQuirk();
//This is a void function with no parameters

void farewell();
//This is a void function with no parameters


///////////////////////////////////////////////////////////////////////////
//				CONSTANTS DECLARATIONS AND DEFINITIONS					 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//																		 //
const string       JOHNNYS_NAME = "JOHNNYs";							 //
const string       DANIELS_NAME = "DANIELs";							 //
const string       MOHAMEDS_NAME = "MOHAMEDs";							 //
const string       JPS_NAME = "JPs";									 //
const string	   ALLISONS_NAME = "ALLISONs";							 //
const string	   ALEXS_NAME = "ALEXs";								 //
const string	   GEORGES_NAME = "GEORGEs";							 //
const string	   TODDS_NAME = "TODDs";								 //	
const string	   ERICS_NAME = "ERICs";								 //
//																		 //
//																		 //
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		Using HANDLE with predefined RGB colors							 //
	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);				 //
																		 //
	string userName;				//Login Name Defined				 //
//																		 //
///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////
//				 OTHER SELF-NOTES INCLUDED FROM HANDOUTS				 //
///////////////////////////////////////////////////////////////////////////	
//																		 //
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


int main()

{

PlaySound(TEXT("topgun.wav"), 0, SND_ASYNC);	 //Play song until end of this program.

	welcome();						// WELCOME MESSAGE FOLLOWED BY INDIVIDUAL LOGO'S FROM THE GROUP

	johnnysQuirksIntro();			// JOHNNY, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	danielsQuirksIntro();			// DANIEL, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	mohamedsQuirksIntro();			// MOHAMED, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	jpsQuirksIntro();				// JP, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	farewell();						// INDIVIDUAL LOGO'S FROM THE GROUP FOLLOWED BY FAREWELL MESSAGE

	return 0;

}

// WELCOME MESSAGE																								//#1
void welcome()
{
	// WELCOME MESSAGE HERE:
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\n\n\n\n\n\t\tWELCOME TO ";        //Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JOHNNYS_NAME;						//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << ", ";								//Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << DANIELS_NAME;						//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << ", ";								//Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << MOHAMEDS_NAME;						//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " & ";								//Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JPS_NAME;							//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 10); cout << " QUIRKY";							//Set color attribute to # 10 color GREEN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 13); cout << " PROGRAM!\n\n";					//Set color attribute to # 12 color RED + INTENSITY
	hitEnter1();

	// WELCOME LOGOS FROM ENTIRE TIME ARE PLACED HERE AS FOLLOWS:
	johnnysLogo();
	danielsLogo();
	mohamedsLogo();
	jpsLogo();

	return;
}


// HIT ENTER MESSAGE 1						-THIS IS BEGINNING AND END HIT ENTER								//#2

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


// HIT ENTER MESSAGE	2					-THIS IS USED FOR DANIELS QUIRKS									//#3

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


// HIT ENTER MESSAGE 3						-THIS IS USED FOR JOHNNYS QUIRKS										//#4

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


// HIT ENTER MESSAGE 4						-THIS IS USED FOR MOHAMEDS QUIRKS										//#5

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


// HIT ENTER MESSAGE 5						-THIS IS USED FOR JPS QUIRKS											//#6

void hitEnter5()
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


// Johnny's Logo of a smiley face with Johnny's first and last initials												//#7
void johnnysLogo()
{

	SetConsoleTextAttribute(consoleHANDLE, 14);  //Color: Intensity + Yellow
	cout << "\t\t\t\t  \333\333\333\333\333\333\333\333\333\333\n"
		<< "\t\t\t        \333\333          \333\333\n"
		<< "\t\t\t      \333\333              \333\333\n"
		<< "\t\t\t    \333\333                  \333\333\n"
		<< "\t\t\t  \333\333                      \333\333\n"
		<< "\t\t        \333\333                          \333\333\n"
		<< "\t\t      \333\333         \333\333        \333\333         \333\333\n"
		<< "\t\t      \333\333         \333\333        \333\333         \333\333\n"
		<< "\t\t      \333\333                              \333\333\n"
		<< "\t\t      \333\333                              \333\333\n"
		<< "\t\t      \333\333                              \333\333\n"
		<< "\t\t      \333\333                              \333\333\n"
		<< "\t\t      \333\333                              \333\333\n"
		<< "\t\t      \333\333       \333\333            \333\333       \333\333\n"
		<< "\t\t        \333\333       \333\333        \333\333       \333\333\n"
		<< "\t\t\t  \333\333       \333\333\333\333\333\333\333\333       \333\333\n"
		<< "\t\t\t    \333\333                  \333\333\n"
		<< "\t\t\t      \333\333              \333\333\n"
		<< "\t\t\t        \333\333          \333\333\n"
		<< "\t\t\t\t  \333\333\333\333\333\333\333\333\333\333           \333\333\333\333\333\333\333\333\333\333  \333\333\333\333    \333\333\n"
		<< "\t\t\t\t\t\t\t   \333\333      \333\333 \333\333   \333\333\n"
		<< "\t\t\t\t\t\t\t   \333\333      \333\333  \333\333  \333\333\n"
		<< "\t\t\t\t\t\t\t   \333\333      \333\333   \333\333 \333\333\n"
		<< "\t\t\t\t\t\t       \333\333  \333\333      \333\333    \333\333\333\333\n"
		<< "\t\t\t\t\t\t       \333\333\333\333\333\333      \333\333     \333\333\333";

	hitEnter1();
	return;
}

// DANIEL'S LOGO of an Aircraft with D and M initals on the tail													//#8
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

// MOHAMEDs LOGO HERE																								//#9

void mohamedsLogo()
{
	SetConsoleTextAttribute(consoleHANDLE, 4);
	cout << "\t\t\t\t\t\t\t\t\t\t                                \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333                                ";
	cout << "          \333\333                   \333\333\333\333\333\333      \333\333\333\333\333\333                   \333\333          ";
	cout << "         \333\333\333\333         \333       \333\333\333              \333\333\333       \333         \333\333\333\333         ";
	cout << "         \333  \333\333       \333\333\333     \333\333\333   \333\333      \333    \333\333\333     \333\333\333       \333\333  \333         ";
	cout << "             \333\333     \333\333\333\333\333   \333\333\333      \333    \333   \333  \333\333\333   \333\333\333\333\333     \333\333             ";
	cout << "              \333\333   \333\333   \333\333  \333\333  \333\333    \333  \333   \333    \333\333  \333\333   \333\333   \333\333              ";
	cout << "               \333\333\333\333\333     \333\333 \333    \333   \333   \333   \333     \333 \333\333     \333\333\333\333\333               ";
	cout << "                \333\333\333       \333\333\333    \333\333    \333\333   \333      \333\333\333       \333\333\333                ";
	cout << "                 \333         \333\333      \333  \333  \333 \333       \333\333         \333                 ";
	cout << "                            \333        \333    \333     \333  \333                            ";
	cout << "                            \333 \333     \333  \333\333  \333 \333\333\333 \333 \333                            ";
	cout << "                            \333 \333 \333\333 \333  \333\333\333\333  \333    \333 \333                            ";
	cout << "                            \333  \333    \333  \333\333  \333       \333                            ";
	cout << "                            \333     \333  \333    \333 \333      \333                            ";
	cout << "                 \333         \333\333   \333\333    \333  \333   \333     \333\333         \333                 ";
	cout << "                \333\333\333       \333\333\333  \333   \333   \333\333   \333      \333\333\333       \333\333\333                ";
	cout << "               \333\333\333\333\333     \333\333 \333\333    \333   \333  \333  \333     \333\333 \333\333     \333\333\333\333\333               ";
	cout << "              \333\333   \333\333   \333\333  \333\333\333   \333  \333   \333   \333\333  \333\333\333  \333\333   \333\333   \333\333              ";
	cout << "             \333\333     \333\333\333\333\333   \333\333\333  \333   \333 \333  \333    \333 \333\333\333   \333\333\333\333\333     \333\333             ";
	cout << "         \333  \333\333       \333\333\333     \333\333\333    \333   \333       \333\333\333     \333\333\333       \333\333  \333         ";
	cout << "         \333\333\333\333         \333       \333\333\333        \333     \333\333\333       \333         \333\333\333\333         ";
	cout << "          \333\333                   \333\333\333\333\333\333      \333\333\333\333\333\333                   \333\333          ";
	cout << "                                \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333                                ";
	cin.ignore();
	system("cls");
	return;
}

// JPs LOGO HERE - DESCRIBE IT																						//#10

void jpsLogo()
{
	// Color of background and Logo.
	SetConsoleTextAttribute(consoleHANDLE, 1);
	// Start of Waves
	cout << "\t                           \333\333\333\333\n";
	cout << "\t                          \333\333\333\333\333\333\n";
	cout << "\t                         \333\333\333\333\333\333\333\333\n";
	cout << "\t            \333\333\333         \333\333\333\333\333\333\333\333\333\333"
		<< "\t        \333\333\333\n";
	cout << "\t           \333\333\333\333\333       \333\333\333\333\333\333\333  \333\333"
		<< "\t       \333\333\333\333\333\n";
	cout << "\t          \333\333\333\333 \333\333     \333\333\333\333\333\333\333"
		<< "\t           \333\333\333\333 \333\333\n";
	cout << "\t         \333\333\333\333        \333\333\333\333\333\333\333\333          \333\333\333\333\n";
	cout << "\t        \333\333\333\333\333       \333\333\333\333\333\333\333\333\333\333"
		<< "\t        \333\333\333\333\333\n";
	cout << "\t       \333\333\333\333\333\333\333     \333\333\333\333\333\333\333\333\333\333\333\333"
		<< "\t      \333\333\333\333\333\333\333\n";
	cout << "\t   \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
		<< "\t\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\n";
	// START OF NAME
	cout << "\t                \333              \333    \333\n";
	cout << "\t                \333              \333    \333\n";
	cout << "\t            \333   \333              \333\333\333\333\333\333\n";
	cout << "\t            \333   \333              \333\n";
	cout << "\t            \333\333\333\333\333              \333\n\n";
	hitEnter1();
	return;

}


/*USER LOGIN SCREEN (FIRST NAME)																					//#11

SetConsoleTextAttribute(consoleHANDLE, 11);
cout << "\n\n\n\n\tPlease Login With Your First Name: ";
SetConsoleTextAttribute(consoleHANDLE, 12); cin >> userName;		//using String Variable for Name.

//ECHO BACK USERNAME IN #11																							//#12

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



// JOHNNY'S QUIRK INTRO MESSAGE																						//#13

void johnnysQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t       \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << JOHNNYS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337\337          ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n";
	system("pause");
	system("cls");

	// QUIRKS USED FOR JOHNNY:
	johnnysQuirk();
	allisonsQuirk();
	johnnysQuirk2();
}

// JOHNNY'S QUIRK 																									//#14

void johnnysQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JOHNNYS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n I am a partnered Twitch Streamer and usually stream on some weekday nights.\n"
		<< " I randomly taught myself how to use some aircrafts avionics and teach others ages 17-65 on how to use them.\n"
		<< " Also, I learned last year that I encouraged a 60-year-old to get his private pilot license, and passed.\n\n\n";
	hitEnter3();
	return;
}

// ALLISON'S QUIRKS																									//#15

void allisonsQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << ALLISONS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n She likes eating her food in a particular order from food she likes the least to food she like the most.\n"
		" she start by eating a small amount of everything on her plate and rating it in her head. She slowly works around \n"
		" her plate eating her least favorite items. Allison eventually finishes her plate eating her favorite thing last.\n\n\n";
	hitEnter3();
	return;
}

// JOHNNY'S QUIRK #2																								//#16

void johnnysQuirk2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JOHNNYS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n I am a partnered Twitch Streamer and usually stream on some weekday nights.\n"
		<< " I randomly taught myself how to use some aircrafts avionics and teach others ages 17-65 on how to use them.\n"
		<< " Also, I learned last year that I encouraged a 60-year-old to get his private pilot license, and passed.\n\n\n";
	hitEnter3();
	return;
}


// DANIEL'S QUIRK INTRO MESSAGE																						//#17
void danielsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t       \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << DANIELS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337\337\337\337\337          ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");

	// QUIRKS USED FOR DANIEL:
	danielsQuirk();
	alexsQuirk();
	georgesQuirk();
}

// DANIEL'S QUIRK																									//#18

void danielsQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << DANIELS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n I am a partnered Twitch Streamer and usually stream on some weekday nights.\n"
		<< " I randomly taught myself how to use some aircrafts avionics and teach others ages 17-65 on how to use them.\n"
		<< " Also, I learned last year that I encouraged a 60-year-old to get his private pilot license, and passed.\n\n\n";
	hitEnter2();
	return;
}
// ALEX'S QUIRK																										//#19

void alexsQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << ALEXS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Alex has a tendency to be an active sleeper. He is one to toss and turn, talk and even \n"
		" yell in his sleep. He has even slept walk before! \n"
		" There is even an instance in High School that he took an order during his sleep for Subway, where he worked.\n\n\n";
	hitEnter2();
	return;
}

// GEORGE'S QUIRKS																									//#20

void georgesQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << GEORGES_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n George likes to play online computer games. His favorites are World of Warcraft, Diablo 3 & \n"
		" Heroes of the Storm. He dislikes playing by himself so he make sure a friend joins him when he's actively online.\n"
		" He realizes how much time he wastes when play alone, but friends help forget and just enjoy the game!\n\n\n";
	hitEnter2();
	return;
}


// MOHAMED'S QUIRK INTRO MESSAGE																					//#21

void mohamedsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t       \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << MOHAMEDS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " QUIRKS! ";
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

	// QUIRKS USED FOR MOHAMED:
	mohamedsQuirk1();
	mohamedsQuirk2();
	mohamedsQuirk3();
}

// MOHAMED'S QUIRKS #1																								//#22

void mohamedsQuirk1()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << MOHAMEDS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Alex has a tendency to be an active sleeper. He is one to toss and turn, talk and even \n"
		" yell in his sleep. He has even slept walk before! \n"
		" There is even an instance in High School that he took an order during his sleep for Subway, where he worked.\n\n\n";
	hitEnter4();
	return;
}

// MOHAMED'S QUIRKS #2																								//#23

void mohamedsQuirk2()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << MOHAMEDS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n George likes to play online computer games. His favorites are World of Warcraft, Diablo 3 & \n"
		" Heroes of the Storm. He dislikes playing by himself so he make sure a friend joins him when he's actively online.\n"
		" He realizes how much time he wastes when play alone, but friends help forget and just enjoy the game!\n\n\n";
	hitEnter4();
	return;
}

// MOHAMED'S QUIRKS #3																								//#24

void mohamedsQuirk3()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << MOHAMEDS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n George likes to play online computer games. His favorites are World of Warcraft, Diablo 3 & \n"
		" Heroes of the Storm. He dislikes playing by himself so he make sure a friend joins him when he's actively online.\n"
		" He realizes how much time he wastes when play alone, but friends help forget and just enjoy the game!\n\n\n";
	hitEnter4();
	return;
}


// JP'S QUIRK INTRO MESSAGE																							//#25

void jpsQuirksIntro()
{
	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1" << "\t\t\t    \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << JPS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << " QUIRKS!   ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "             \337\337\337           ";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 75); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");

	// QUIRKS USED FOR JP:
	jpsQuirk();
	toddsQuirk();
	ericsQuirk();
}

// JP'S QUIRK																										//#26

void jpsQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JPS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n JP used to hate slurpees until a short time ago \n"
		" His mind changed about slurpees when his parents open their own 7-11 store, now he loves them!\n"
		" His favorite flavor is Blue Raspberry but Cherry is a close second.\n\n\n";
	hitEnter5();
	return;
}

// TODD'S QUIRK																										//#27

void toddsQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << TODDS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n At one point, Todd used to raise pigeons!\n"
		" His favorite pigeon in particular is the Birmingham Roller.\n"
		" This pigeon is famous for their ability to do backflips mid-air!\n\n\n";
	hitEnter5();
	return;
}

// ERIC'S QUIRKS																									//#28

void ericsQuirk()
{
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << ERICS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 11);
	cout << "\n\n\n Eric hates the mall, plain and simple. He disagrees with the level of advertising and fake potrayal\n"
		" everywhere you look. Eric feels as though everyone is there to sell you something or manipulate you into\n"
		" buying something you dont necessarily need.\n\n\n";
	hitEnter5();
	return;
}


// FAREWELL ENDING MESSAGE																							//#29

void farewell()
{
	// FAREWELL LOGOS FROM ENTIRE GROUP ARE PLACED IN THIS FAREWELL FUNCTION:
	johnnysLogo();
	danielsLogo();
	mohamedsLogo();
	jpsLogo();

	// FAREWELL MESSAGE:
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\t\t                  Thank You ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << userName;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " for Visiting\n\n";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\t\t       ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JOHNNYS_NAME;						//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << ", ";								//Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << DANIELS_NAME;						//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << ", ";								//Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << MOHAMEDS_NAME;						//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " & ";								//Set color attribute to # 12 color RED + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JPS_NAME;							//Set color attribute to # 11 color CYAN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 10); cout << " QUIRKY";							//Set color attribute to # 10 color GREEN + INTENSITY
	SetConsoleTextAttribute(consoleHANDLE, 13); cout << " PROGRAM!\n\n\n\n";					//Set color attribute to # 12 color RED + INTENSIT
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