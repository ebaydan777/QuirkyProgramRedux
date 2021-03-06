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
***		Class Meeting Time		:	    	MW 9:35 � 12:45				***
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
***   	view Daniels' airplane logo, JP's Waves logo wih his initials	***
***		of his first and last name, Mohamed's Octopus logo, and			***
***		Johnny's happy face logo with his initials of his first and		***
***		last name and last initials. There are 12 quirks posted			***
***		in total. With each group member doing three including			***
***		themselves.													    ***                                  
***                                                                     ***
***                                                         			***
***************************************************************************
***************************************************************************
***                                                         			***
***                        			CREDITS					            ***
***																		***
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
***																		***		
***						   CUSTOM DEFINED FUNCTIONS						***										
***						 												***
***		welcome();														***
***		hitEnter1();													***
***		hitEnter2();													***
***		hitEnter3();													***
***		hitEnter4();													***
***		hitEnter5();													***
***		johnnysLogo();													***
***		danielsLogo();													***
***		mohamedsLogo();													***
***		jpsLogo();														***
***		login();														***
***		burpBack(string userName);										***
***		lotteryNumber(string userName);									***
***		burpLot(string userName, int lotNum);							***
***		johnnysQuirksIntro();											***
***		johnnysQuirk();													***
***		allisonsQuirk();												***
***		seansQuirk();													***
***		danielsQuirksIntro();											***
***		danielsQuirk();													***
***		alexsQuirk();													***
***		georgesQuirk();													***
***		mohamedsQuirksIntro();											***
***		mohamedsQuirk1();												***
***		mohamedsQuirk2();												***
***		mohamedsQuirk3();												***
***		jpsQuirksIntro();												***
***		jpsQuirk();														***
***		toddsQuirk();													***
***		ericsQuirk();													***
***		farewell();														***
***																		***
**************************************************************************/


#include <iostream>		//Required for cin and cout
#include <string>		//Required for string variables
#include <windows.h>	//Required for Handle, BACKGROUND_ &
//FOREGROUND_ consts, SetConsoleTextAttribute	
#include <mmstream.h>	//Required for PlaySound Feature

#pragma comment(lib, "winmm.lib")	


using namespace std;	//Standard Naming Conventions



//FUNCTIONS WERE DONE BY JOHNNY NGUYEN AND DANIEL MARIS

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
//This is a void function with no parameters

void johnnysLogo();
//This is a void function with no parameters

void danielsLogo();
//This is a void function with no parameters

void mohamedsLogo();
//This is a void function with no parameters

void jpsLogo();
//This is a void function with no parameters

//Non-void function with no parameters
string login();
//DESCRIPTION: Prompt user to hit the enter key to continue running program 

//Void function with parameters
void   burpBack(string userName);
//DESCRIPTION: Prompt user to hit the enter key to continue running program

//Non-void function with parameters
int lotteryNumber(string userName);
//DESCRIPTION: Prompt user to hit the enter key to continue running program 

//Void function with parameters
void   burpLot(string userName, int lotNum);
//DESCRIPTION: Prompt user to hit the enter key to continue running program		

void johnnysQuirksIntro();
//This is a void function with no parameters

void johnnysQuirk();
//This is a void function with no parameters

void allisonsQuirk();
//This is a void function with no parameters

void seansQuirk();
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



//MICHAELANGELO WAS DONE BY DANIEL MARIS:

///////////////////////////////////////////////////////////////////////////
//				CONSTANTS DECLARATIONS AND DEFINITIONS					 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//																		 //
	const string       JOHNNYS_NAME = "JOHNNYs";					  	 //
	const string       DANIELS_NAME = "DANIELs";						 //
	const string       MOHAMEDS_NAME = "MOHAMEDs";						 //
	const string       JPS_NAME = "JPs";								 //
	const string	   ALLISONS_NAME = "ALLISONs";						 //
	const string	   SEANS_NAME = "SEANs";							 //
	const string	   ALEXS_NAME = "ALEXs";							 //
	const string	   GEORGES_NAME = "GEORGEs";						 //
	const string	   TODDS_NAME = "TODDs";							 //	
	const string	   ERICS_NAME = "ERICs";							 //
//																		 //
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

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		Using HANDLE with predefined RGB colors							 //
	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);				 //
																		 //
	string userName;				//Login Name Defined				 //
	int lotNum;						//Lottery Numbers Winning Number	 //
//																		 //
///////////////////////////////////////////////////////////////////////////

// MUSIC GOES HERE:
	PlaySound(TEXT("topgun.wav"), 0, SND_ASYNC);	 //Play song until end of this program.


// BEGIN MAIN HERE:

	welcome();							// WELCOME MESSAGE FOLLOWED BY INDIVIDUAL LOGO'S FROM THE GROUP

	userName = login();					// LOGIN SCREEN WHERE USER LOGINS TO LOTTERY NUMBER QUESTION

	burpBack(userName);					// THIS BURPS BACK USERS NAME PREVIOUSLY ENTERED IN LOGIN

	lotNum = lotteryNumber(userName);	// LOTTERY NUMBER USED BY USER ENTERING NAME

	burpLot(userName, lotNum);			// THIS BURPS BACK THE REAL LOTTERY NUMBER AFTER USERS CHOICE MADE

	johnnysQuirksIntro();				// JOHNNY, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	danielsQuirksIntro();				// DANIEL, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	mohamedsQuirksIntro();				// MOHAMED, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	jpsQuirksIntro();					// JP, START OF INTRO PLUS SELF QUIRK PLUS TWO OTHERS QUIRKS!

	farewell();							// INDIVIDUAL LOGO'S FROM THE GROUP FOLLOWED BY FAREWELL MESSAGE

	return 0;

}

// WELCOME MESSAGE																		//#1

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			welcome											 //
//		DESCRIPTION:	Displays the Welcome message followed by all 4	 //
//						team members logos before continuing on.		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void welcome()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			hitEnter1										 //
//		DESCRIPTION:	This specific Hit Enter button corresponds to	 //
//						the welcome and farewell portion of the program. //
//																		 //
///////////////////////////////////////////////////////////////////////////

void hitEnter1()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			hitEnter2										 //
//		DESCRIPTION:	This specific Hit Enter button corresponds to	 //
//						Daniel's section and quirks provided.			 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void hitEnter2()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			hitEnter3										 //
//		DESCRIPTION:	This specific Hit Enter button corresponds to	 //
//						Johnny's section and quirks provided.			 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void hitEnter3()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 191); cout << "\335\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\337\336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 191); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 249); cout << "  HIT ENTER TO CONTINUE!";
	SetConsoleTextAttribute(consoleHANDLE, 191); cout << " \336\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 191); cout << "\335";
	SetConsoleTextAttribute(consoleHANDLE, 249); cout << "      \333\333\333\333\333             ";
	SetConsoleTextAttribute(consoleHANDLE, 191); cout << " \336";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 191); cout << "\335\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\334\336";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cin.ignore();
	system("cls");
}


// HIT ENTER MESSAGE 4						-THIS IS USED FOR MOHAMEDS QUIRKS										//#5

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			hitEnter4										 //
//		DESCRIPTION:	This specific Hit Enter button corresponds to	 //
//						Mohamed's section and quirks provided.			 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void hitEnter4()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	//HIT ENTER
	SetConsoleTextAttribute(consoleHANDLE, 1); Sleep(50);
	cout << "\n\n\t\t\t  \1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 2); Sleep(50);
	cout << "\t\t\t  \1 <<HIT ENTER TO CONTINUE>> \1\n\t\t\t  ";
	SetConsoleTextAttribute(consoleHANDLE, 1); Sleep(50);
	cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\n\n\t\t\t    ";
	SetConsoleTextAttribute(consoleHANDLE, 3);

	cout << __TIMESTAMP__; //SHOW TIME

						   //STOP SCREEN
	cin.ignore();
	system("cls");
}


// HIT ENTER MESSAGE 5						-THIS IS USED FOR JPS QUIRKS											//#6

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			hitEnter5										 //
//		DESCRIPTION:	This specific Hit Enter button corresponds to	 //
//						JP's section and quirks provided.				 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void hitEnter5()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////
	
	SetConsoleTextAttribute(consoleHANDLE, 11);						// Blue( +8) text
	cout << "\n\n\n\t\t\t\t          \6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\n";         //   Box around Hit enter.
	cout << "\t\t\t\t          ";
	SetConsoleTextAttribute(consoleHANDLE, 87);                     // purple background
	cout<<"\6 Hit ENTER to Continue \6\n";
	SetConsoleTextAttribute(consoleHANDLE, 11 );                    // Blue text 
	cout << "\t\t\t\t          \6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\6\n";
	cin.ignore();
	system("cls");
	
}


// Johnny's Logo of a smiley face with Johnny's first and last initials												//#7

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			johnnysLogo										 //
//		DESCRIPTION:	This function provides a Logo of Johnny's		 //
//						Initials as well as a happy face symbol.		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void johnnysLogo()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

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


///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			danielsLogo										 //
//		DESCRIPTION:	Displays a logo created by Daniel of an  		 //
//		airplane which relates to one of his quirks						 //
//																		 //
//		NOTE: Displays Logo of plane        							 //	
//																		 //
//		TIP: One of Daniels logos								     	 //
//																		 //	
///////////////////////////////////////////////////////////////////////////

// DANIEL'S LOGO of an Aircraft with D and M initals on the tail													//#8
void danielsLogo()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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


///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			mohamedsLogo									 //
//		DESCRIPTION:	Displays a logo created by Mohamed of an  		 //
//		eyeball with tentacles which relates to one of his quirks	     //
//																		 //
//		NOTE: Displays Logo of an eyeball with tentacles				 //	
//																		 //
//		TIP: One of Mohameds logos								     	 //
//																		 //	
///////////////////////////////////////////////////////////////////////////

// MOHAMEDs LOGO HERE																								//#9

void mohamedsLogo()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

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
	hitEnter1();
	return;
}

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			jpsLogo											 //
//		DESCRIPTION:	Displays a logo created by JP of waves as big    //
//		as tsunamis which relates to one of his quirks.					 //
//																		 //
//		NOTE: Displays Logo of waves        							 //	
//																		 //
//		TIP: One of JPs logos									     	 //
//																		 //	
///////////////////////////////////////////////////////////////////////////

// JPs LOGO HERE - Blue waves and black background with a black background.													//#10
//void with no parameters
void jpsLogo()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	// Color of background and Logo.
	SetConsoleTextAttribute(consoleHANDLE, 1);
	// Start of Waves
	cout << "                           \333\333\333\333\n";
	cout << "                          \333\333\333\333\333\333\n";
	cout << "                         \333\333\333\333\333\333\333\333\n";
	cout << "            \333\333\333         \333\333\333\333\333\333\333\333\333\333"
		<< "        \333\333\333\n";
	cout << "           \333\333\333\333\333       \333\333\333\333\333\333\333  \333\333"
		<< "       \333\333\333\333\333\n";
	cout << "          \333\333\333\333 \333\333     \333\333\333\333\333\333\333"
		<< "           \333\333\333\333 \333\333\n";
	cout << "         \333\333\333\333        \333\333\333\333\333\333\333\333          \333\333\333\333\n";
	cout << "        \333\333\333\333\333       \333\333\333\333\333\333\333\333\333\333"
		<< "        \333\333\333\333\333\n";
	cout << "       \333\333\333\333\333\333\333     \333\333\333\333\333\333\333\333\333\333\333\333"
		<< "      \333\333\333\333\333\333\333\n";
	cout << "   \333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333"
		<< "\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\333\n";
	// START OF NAME
	cout << "                \333              \333    \333\n";
	cout << "                \333              \333    \333\n";
	cout << "            \333   \333              \333\333\333\333\333\333\n";
	cout << "            \333   \333              \333\n";
	cout << "            \333\333\333\333\333              \333\n\n";
	hitEnter1();
	return;

}
// END OF GROUP'S LOGOS

// BEGINNING OF LOTTERY QUESTIONS SECTION: DONE BY MOHAMED


///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			Login											 //
//		DESCRIPTION:	Prompts user for their first name using a cin    //
//		statement. Uses a string variable "name" to return info to.		 //
//																		 //
//		NOTE: Prompts user and returns info   							 //	
//																		 //	
///////////////////////////////////////////////////////////////////////////

//non-void with no parameters login function
string login()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
/**/	string name;				//Name used for Lottery Question   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	// WELCOME MESSAGE TO USER:
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n\n\t\tWelcome Aboard! What's your First Name?:  ";

	// GET USERNAME
	SetConsoleTextAttribute(consoleHANDLE, 11); cin >> name;
	// CLEAR SCREEN
	cin.ignore();

	return name;
}

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			burpBack										 //
//		DESCRIPTION:	Literally burps back the information recieved    //
//		from login() using parameters and cout functions.				 //
//																		 //
//		NOTE: Prompts user and returns info   							 //	
//																		 //	
///////////////////////////////////////////////////////////////////////////

//void with call by value parameters
void burpBack(string theUserName)
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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
	//Thank You Message
	cout << "\n\n\n\n\n\n\n\n\n";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\n\n\t\tThank you ";
	//BURP BACK USERNAME
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << theUserName;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << ", Great to have you here!";
	cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	return;
}

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			LotteryNumber									 //
//		DESCRIPTION:	Prompts user for a lottery number using a cin    //
//		statement. Uses a int variable "lotNumber" to return info.       //
//																		 //
//		NOTE: Prompts user and returns info   							 //	
//																		 //	
///////////////////////////////////////////////////////////////////////////

//non-void with parameters, prompting of the lottery number
int lotteryNumber(string userName2)
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
/**/	int lotNumber;				//Lottery Number Integer by User   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	//prompting of the lottery number
	cout << "\n\n\n\n\n\n\n\n\tSo ";
	//burpback username
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << userName2;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << ", Enter what you think the Winning Lottery Number will be: ";
	//get requested lottery number
	SetConsoleTextAttribute(consoleHANDLE, 11); cin >> lotNumber;
	cin.ignore();
	return lotNumber;
}

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			burpLot											 //
//		DESCRIPTION:	Literally burps back the information recieved    //
//		from lotteryNumber() using parameters and cout functions. 		 //
//																		 //
//		NOTE: Prompts user and returns info   							 //	
//																		 //	
///////////////////////////////////////////////////////////////////////////

void burpLot(string user_Name, int lot_Num)
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\n\n\t\tGee Whiz, ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << user_Name;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " Your guess of ";
	// USERS GUESS OF LOTTERY NUMBER ENTERED
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << lot_Num;
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << " is close,\n\n\t\tbut no cigar since the Actual Winner is ";
	// REAL LOTTERY NUMBER GIVEN TO USER + 100
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << lot_Num + 100;
	SetConsoleTextAttribute(consoleHANDLE, 12);	cout << "...";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << "\n\n\n\n\n\n\n\n\n";
	system("pause");
	system("cls");
	return;
}
// END OF LOTTERY NUMBERS QUESTIONAIRE

//JOHNNY NGUYEN COMPLETED THE FOLLOWING SECTIONS : INTRO & THREE QUIRKS
// BEGINNING OF JOHNNYS INTRO AND TWO QUIRKS PLUS HIS OWN:

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//																		 //
//		NAME:			johnnysQuirksIntro								 //
//		DESCRIPTION:	Introduces user to Johnny's quirks by using a    //
//		friendly warning to tell the user that Johnny's quirks are about  //
//		to appear.														 //
//		NOTE: Prompts user and returns info   							 //	
//																		 //	
///////////////////////////////////////////////////////////////////////////

void johnnysQuirksIntro()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	cout << "\n\n\n\n\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1" << "\t\t\t       \1";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\n\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 249); cout << "  HERE COMES ";
	SetConsoleTextAttribute(consoleHANDLE, 249); cout << JOHNNYS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 249); cout << " QUIRKS!  ";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "             \337\337\337\337\337\337\337          ";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1\n";
	SetConsoleTextAttribute(consoleHANDLE, 7); cout << "\t\t\t\t";
	SetConsoleTextAttribute(consoleHANDLE, 185); cout << "\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1\1";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\n\n\n\n";
	system("pause");
	system("cls");

	// QUIRKS USED FOR JOHNNY:
	johnnysQuirk();
	allisonsQuirk();
	seansQuirk();
}

// JOHNNY'S QUIRK 

// Function definitions by J.P. Begin here

///////////////////////////////////////////////////////////////////////////          
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			johnnysQuirk					    			 //
//		DESCRIPTION:	displays johnny's quirk in a unique way.   		 //
//																		 //
///////////////////////////////////////////////////////////////////////////
																						//#14

void johnnysQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 9);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 12); cout << JOHNNYS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 9); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n I like making jokes.\n"
		<< " Laughing is fun and it keeps me from being bored.\n"
		<< " It also is a nice way to meet some new friends.\n\n\n";
	hitEnter3();
	return;
}

// ALLISON'S QUIRKS																									//#15
///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			allisonsQuirk					    			 //
//		DESCRIPTION:	displays allison's quirk in a unique way.  		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void allisonsQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 9);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 13); cout << ALLISONS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 9); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 13);
	cout << "\n\n\n She likes eating her food in a particular order from food she likes the least to food she like the most.\n"
		" she start by eating a small amount of everything on her plate and rating it in her head. She slowly works around \n"
		" her plate eating her least favorite items. Allison eventually finishes her plate eating her favorite thing last.\n\n\n";
	hitEnter3();
	return;
}

// SEAN'S QUIRK																										//#16

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			seansQuirk			    		    			 //
//		DESCRIPTION:	displays sean's quirk in a unique way.   		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void seansQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 9);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 14); cout << SEANS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 9); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 14);
	cout << "\n\n\n He likes to laugh a lot.\n"
		<< " He can pretty much laugh at anything.\n"
		<< " Maybe it is his sense of humor, or he is just weird.\n\n\n";
	hitEnter3();
	return;
}

// DANIEL MARIS COMPLETED THE FOLLOWING SECTIONS: INTRO & THREE QUIRKS
// DANIEL'S QUIRK INTRO MESSAGE																						//#17

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			danielsQuirksIntro				    			 //
//		DESCRIPTION:	Introduces Daniel's quirks in a unique way.		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void danielsQuirksIntro()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			DanielsQuirk					    			 //
//		DESCRIPTION:	displays johnnys quirk in a unique way.   		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void danielsQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			alexsQuirk		    			    			 //
//		DESCRIPTION:	displays Alex's quirk in a unique way.   		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void alexsQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			georgesQuirk					    			 //
//		DESCRIPTION:	displays George's quirk in a unique way.   		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void georgesQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

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


// MOHAMED'S QUIRK INTRO MESSAGE	'																				//#21

// Function defintions done by J.P. end here.

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			mohamedsQuirksIntro					 			 //
//		DESCRIPTION:	introduces Mohamend'a quirks in a unique way.    //
//																		 //
///////////////////////////////////////////////////////////////////////////

void mohamedsQuirksIntro()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	cout << "\n\n\n\n\n\n\n\n\n\t\t\t   Here Comes ";
	cout << MOHAMEDS_NAME;
	cout << "'s Quirks\n";

	hitEnter4();

	// QUIRKS USED FOR MOHAMED:
	mohamedsQuirk1();
	mohamedsQuirk2();
	mohamedsQuirk3();
}

// MOHAMED'S QUIRKS #1																								//#22

//Function definition by Johnny starts here

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			mohamedsQuirk1					    			 //
//		DESCRIPTION:	Displays an interesting quirk about Mohamed   	 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void mohamedsQuirk1()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 4);
	cout << "\n\n\n\n\t\t\t    "
		<< MOHAMEDS_NAME
		<< "'s First Quirk";
	cout << "\n\n\n\n\t  I like to watch Japanese anime. During high school I watched a\n\tseason of a show called Naruto "
		"3 times, having at least 220 episodes \n\tfor the first season. Adding up to a whopping 660 episodes repeated.";
	hitEnter4();
	return;
}

// MOHAMED'S QUIRKS #2																								//#23

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			mohamedsQuirk2   				    			 //
//		DESCRIPTION:	Displays an interesting Quirk about Steven  	 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void mohamedsQuirk2()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 3);
	cout << "\n\n\n\n\t\t\t   Steven's First Quirk ";
	cout << "\n\n\n\n\t He really enjoys to cycle, and regularly practices cycling when\n\t he has time to. He has rode multiple "
		"countries in a year, equaling\n\t up to 100 plus miles. He is planning on using his tax return\n\t money to buy himself a new bike.";

	hitEnter4();
	return;
}

// MOHAMED'S QUIRKS #3																								//#24

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			mohamedsQuirk3   				    			 //
//		DESCRIPTION:	Displays an interesting Quirk about Elijah  	 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void mohamedsQuirk3()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 2);
	cout << "\n\n\n\n\t\t\t   Elijah's First Quirk ";
	cout << "\n\n\n\n\t He loves to make music, usually late at night, when he can�t sleep.\n\tHe would log on to his computer and "
		"record music. He experiments\n\twith different programs to make beats while he makes his music.";
	hitEnter4();
	return;
}


// JP'S QUIRK INTRO MESSAGE																							//#25

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			jpsQuirksIntro()								 //
//		DESCRIPTION:	This gives the user a friendly warning that		 //
//						JP's Quirks are comming							 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void jpsQuirksIntro()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			jpsQuirk										 //
//		DESCRIPTION:	Displays an interesting qurik about JP			 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void jpsQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////
	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << JPS_NAME;             // Bright blue text
	SetConsoleTextAttribute(consoleHANDLE, 8); cout << " Quirk: ";            // pale purple text
	SetConsoleTextAttribute(consoleHANDLE, 3);                                // blue text
	cout << "\n\n\n JP used to hate slurpees until a short time ago \n"
		" His mind changed about slurpees when his parents open their own 7-11 store, now he loves them!\n"
		" His favorite flavor is Blue Raspberry but Cherry is a close second.\n\n\n";
	hitEnter5();
	return;
}

// TODD'S QUIRK																										//#27

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			toddsQuirk										 //
//		DESCRIPTION:	Displays an interesting qurik about Todd		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void toddsQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << TODDS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 8); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 3);
	cout << "\n\n\n At one point, Todd used to raise pigeons!\n"
		" His favorite pigeon in particular is the Birmingham Roller.\n"
		" This pigeon is famous for their ability to do backflips mid-air!\n\n\n";
	hitEnter5();
	return;
}

// ERIC'S QUIRKS																									//#28

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			ericsQuirk										 //
//		DESCRIPTION:	Displays an interesting qurik about Todd		 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void ericsQuirk()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
///////////////////////////////////////////////////////////////////////////

	SetConsoleTextAttribute(consoleHANDLE, 12);
	cout << "\n\n\n\t ";
	SetConsoleTextAttribute(consoleHANDLE, 11); cout << ERICS_NAME;
	SetConsoleTextAttribute(consoleHANDLE, 8); cout << " Quirk: ";
	SetConsoleTextAttribute(consoleHANDLE, 3);
	cout << "\n\n\n Eric hates the mall, plain and simple. He disagrees with the level of advertising and fake potrayal\n"
		" everywhere you look. Eric feels as though everyone is there to sell you something or manipulate you into\n"
		" buying something you dont necessarily need.\n\n\n";
	hitEnter5();
	return;
}


// FAREWELL ENDING MESSAGE																							//#29

///////////////////////////////////////////////////////////////////////////
//				   		 FUNCTION DEFINITIONS							 //
///////////////////////////////////////////////////////////////////////////
//		                                             					 //
//		NAME:			farewell										 //
//		DESCRIPTION:	Displays a ending farewell messege to the user	 //
//																		 //
///////////////////////////////////////////////////////////////////////////

void farewell()
{

///////////////////////////////////////////////////////////////////////////
//				   	  LOCAL VARIABLE DECLARATIONS						 //
///////////////////////////////////////////////////////////////////////////
/**/																   /**/
/**/		//Using HANDLE with predefined RGB colors				   /**/
/**/	HANDLE consoleHANDLE = GetStdHandle(STD_OUTPUT_HANDLE);		   /**/
/**/																   /**/
/**/	string userName;											   /**/
/**/																   /**/	
///////////////////////////////////////////////////////////////////////////

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
