/*
#include <iostream>  = very important library to enable the use of input-output streaming of the program

#include <conio.h>  = has a mainly purpose of using the getch function; that can be use for type evaluating

#include <windows.h>  = this is important to use the cursor position (gotoxy function), and the Text Attribute (Color)

#include <ctime>  = for seeding that can help for the mini game, and to help also the chorno library in some cases

#include <fstream> = will serve as the simple database

#include <algorithm> = needed for using the trasform to upper the name/string

#include <cstdlib> = needed for generating rand () / random number 

#include <sstream> = needed for string to integer

#define up_arrow 72		= to know the practicality variable name of the up arrow key, instead of using 72 which can be confusing at times
#define down_arrow 80 	= to know the practicality variable name of the down arrow key, instead of using 80 which can be confusing at times
#define left_arrow 75	= to know the practicality variable name of the left arrow key, instead of using 75 which can be confusing at times
#define right_arrow 77	= to know the practicality variable name of the right arrow key, instead of using 77 which can be confusing at times
#define tab 9 = for tab pressing shortcut 
#define space 32 = for space shortcut

	Reference for the SetConsoleTextAttribute for coloring 
	COLORS: 
	1.  BLUE
	2.  GREEN
	3.  CYAN
	4.  RED
	5.  MAGENTA
	6.  BROWN
	7.  LIGHTGRAY
	8.  DARKGRAY
	9.  LIGHTBLUE
	10. LIGHTGREEN
	11. LIGHTCYAN
	12. LIGHTRED
	13. LIGHTMAGENTA
	14. YELLOW
	15. WHITE
*/


#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime> 
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <sstream>

#define up_arrow 72
#define down_arrow 80
#define left_arrow 75
#define right_arrow 77
#define back_esc 27
#define tab 9
#define space 32


using namespace std;
void UI ();
void login ();
void exit ();
void loading ();
void border ();
void border_noNotice ();
void merc_name ();				// LOADING VERSION OF THE TEXT MERC BUS SYSTEM
void merc_name1 ();				// EXIT VERSION OF THE TEXT MERC BUS SYSTEM
void merc_name_default(); 		// DEFAULT VERSION OF THE TEXT MERC BUS SYSTEM
void exit_animation ();
void loading1();
void pass_user_ui ();
void mainframe ();
void showbook_pic ();
void minigame_pic ();
void book_pic ();
void ticketing ();
void manila_ui ();
void passenger_ ();
void user_register ();
void forgot_register ();
void minigame ();
void rps ();
void rng ();
void copy_noNotice ();
void box_credentials ();
void bridge ();
void historia_reiss ();

// void are used to display the INTERFACES later on, and to save lines of codes; instead by just copy pasting everytime 

int main()
{

UI (); // this is like a jump connector to the UI Function

return 0;
}

// parameter function fot SetConsoleCursorPosition
void gotoxy (int x, int y)
{
	COORD position = {x, y};
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), position);
	
	/* 
	it is efficient to use parameter function, and just by displaying the said name rather than typing, and copy pasting
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), [{corresponding x, y}]); everytime. 
	This will increase the efficiency of coding just by calling 
	the function gotoxy () and setting 2 parameters inside of it, to substitute the position of 
	x = domain
	y = range
	just like in the cartesian plate
	*/
}

// parameter function fot SetConsoleTextAttribute
void color (int x)
{
	HANDLE colour =  GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (colour, x);
	
	/* 
	it is efficient to use parameter function, and just by displaying the said name rather than typing, and copy pasting
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), [corresponding color number]); everytime. 
	This will increase the efficiency of coding just by calling 
	the function color () and setting it an integer value inside, that corresponds the color number inside of it.
	*/
}


// This is the responsible for the border design to the program. 
// As well as the notice border at the bottom, to be filled in with texts later on
void border ()
{
	
	
	color (15);
	for (int side_border1 = 0; side_border1 < 43;  side_border1++)
	{
		gotoxy (5, side_border1);
	    cout << char (219);
		// this is responsible for the left border
	}
	
	for (int side_border2 = 0; side_border2 < 43;  side_border2++)
	{
		gotoxy (118, side_border2);
	    cout << char (219);
		
		// this is responsible for the right border
	}
	
	for (int top_border = 5; top_border < 118; top_border++)
	{
		gotoxy (top_border, 0);
	    cout << char (219);
		
		// this is responsible for the top border
	}
	
	for (int bot_border = 5; bot_border < 119; bot_border++)
	{
		gotoxy (bot_border, 43);
	    cout << char (219);
		
		// this is responsible for the bottom border
	}
	


	color (14);
	
	for (int notice_top_border = 9; notice_top_border < 114; notice_top_border++)
	{
		gotoxy (notice_top_border, 33);
	    cout << char (205);
		
		// this is responsible for the top notice border
	}
	
	for (int notice_bot_border = 9; notice_bot_border < 114; notice_bot_border++)
	{
		gotoxy (notice_bot_border, 41);
	    cout << char (205);
		
		// this is responsible for the bot notice border
	}
	
	
	for (int side_border1 = 34; side_border1 < 41; side_border1++)
	{
		gotoxy (8, side_border1);
    	cout << char (186);
		// this is responsible for the left notice border
		
		gotoxy (8,33);
    	cout << char (201);
    	
    	gotoxy (8,41);
    	cout << char (200);
	}
	

	
	for (int side_border2 = 32; side_border2 < 39; side_border2++)
	{
		gotoxy (114, side_border2+2);
	     cout << char (186);
		// this is responsible for the right notice border
		
		gotoxy (114,33);
    	cout << char (187);
		
		gotoxy (114,41);
    	cout << char (188);
		
	}
	
	color(15);
	gotoxy(45,35);
	cout << "I  N  S  T  R  U  C  T  I  O  N  S  ";
	
	gotoxy(85,35);
	cout << "C R E D E N T I A L S:  ";
	
	gotoxy(85,38);
	cout << "Press + Forgot Password ";
	
	gotoxy(85,40);
	cout << "Press tab for Registration " ;
	
	gotoxy(11,35);
	cout << " R E T U R N   O P T I O N:" ;
	
	gotoxy(11,38);
	cout << "ESC - To go back/ Undo " ;
	
	gotoxy(11,40);
	cout << "UP/DOWN/RIGHT/LEFT - movements ";
	

	
	color(15);
		
	for (int side_border2 = 34; side_border2 < 41; side_border2++)
	{
		gotoxy (82, side_border2);
	    cout << char (186);
		
		// this is responsible for the right notice border
	}
	
	for (int side_border2 = 34; side_border2 < 41; side_border2++)
	{
		gotoxy (42, side_border2);
    	cout << char (186);
		
		// this is responsible for the right notice border
	}
	
		for (int notice_top_border = 75;notice_top_border < 106;notice_top_border++)
	{
		gotoxy (notice_top_border+8, 37);
     	cout << char (205);
		// this is responsible for the top notice border
	}
	
	
		for (int i= 1;i <=73;i++)
	{
		gotoxy (8+i,37);
	    cout << char (205);
		
		// this is responsible for the top notice border
	}
	
	






	
	
}


// Main Interface of the program
void UI ()
{
	// it conducts the display of the default MERC BUS SYSTEM text
	color (6);
	merc_name_default ();
	
	
	
	pass_user_ui ();
	
	// to display again the border with just calling the function to display it
	color (3);
	border ();

	int bus_struc = 223;
	color (9);
	gotoxy (7, 10);
	for (int i = 1; i<= 72; i++)
	{
		cout << char (bus_struc);
	}
	gotoxy (7, 11);
	for (int i = 1; i<= 73; i++)
	{
		cout << char (bus_struc);
	}
	gotoxy (7, 12);
	for (int i = 1; i<= 73; i++)
	{
		cout << char (bus_struc);
	}
	//end of roof
	int clr_handles = 3;
	int clr_front = 11;
	color (clr_handles);
	gotoxy (7, 13);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (7, 14);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (7, 15);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (7, 16);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (7, 17);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	/* end of middle */
	int mid = 9;
	int front_mid = 9;
	
	gotoxy (7, 18);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	
	gotoxy (7, 19);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	
	gotoxy (7, 20);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	
	gotoxy (7, 21);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (7, 22);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	color (4);
	cout << char (bus_struc);
	
	color (front_mid);	
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (7, 23);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (7, 24);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (7, 25);
    cout << char (bus_struc) << char (bus_struc) ;
	color (4);
	cout << char (bus_struc) << char (bus_struc) ;
	
	for (int i = 1; i<=55;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	//beginning of tires
	int wheels = 8;
	gotoxy (7, 26);
	for (int i = 1; i <= 9; i++)
	{
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 9; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	
	for (int i = 1; i <= 29; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	
	for (int i = 1; i <= 9; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	
	for (int i = 1; i <= 19; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	
	
	
	gotoxy (7, 27);
	for (int i = 1; i <= 8; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 27; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
		for (int i = 1; i <= 18; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	

	gotoxy (7, 28);
		for (int i = 1; i <= 8; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 27; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
		for (int i = 1; i <= 18; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}

	
	//rump wheels
	color (wheels);
	gotoxy (7, 29);
	
	cout << "        " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "                           " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	
	gotoxy (7, 30);
	cout << "        " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "                           " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	

	gotoxy (7, 31);
	cout << "         "  << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc)<< "                             "  << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	
	
	color (15);
	for (int i = 7; i <= 116; i++)
	{
		gotoxy (i, 32);
		printf ("%c", 223);
	}
	
 
 
 
	

	//jump the process to the login function		
	login ();
	
}

// responsible if the user wants to register
void user_register ()
{
	system ("cls");
	border_noNotice ();

       
	int hold_x = 30;
	int hold_y = 3;
	color (11);
	
	gotoxy (hold_x, hold_y);
	cout << " _____   ______  _____  _______  _____  _______  ______  _____  ";
	gotoxy (hold_x, hold_y+1);
	cout << "(_____) (______)(_____)(_______)(_____)(__ _ __)(______)(_____) ";
	gotoxy (hold_x, hold_y+2);
	cout << "(_)__(_)(_)__  (_)  ___   (_)  (_)___     (_)   (_)__   (_)__(_)";
	gotoxy (hold_x, hold_y+3);
	cout << "(_____) (____) (_) (___)  (_)    (___)_   (_)   (____)  (_____) ";
	gotoxy (hold_x, hold_y+4);
	cout << "( ) ( ) (_)____(_)___(_)__(_)__  ____(_)  (_)   (_)____ ( ) ( ) ";
	gotoxy (hold_x, hold_y+5);
	cout << "(_)  (_)(______)(_____)(_______)(_____)   (_)   (______)(_)  (_)";                                                         

  


    	for (int boxside1 = 0; boxside1 <= 18; boxside1 ++)
	{
		gotoxy (96, 12+boxside1);
		cout << char (222);

	}
	

	
	   for (int boxside2 = 0; boxside2 <= 18; boxside2 ++)
	{
		gotoxy (27, 12+boxside2);
		cout << char (222);

	}
	    gotoxy(96,11);
    	cout << char (223);
	
    	gotoxy(96,31);
    	cout << char (220);
	
    	for (int boxbottom = 0; boxbottom <= 69; boxbottom ++)
	{
		gotoxy (boxbottom+27, 32);
		cout << char (220);

	}
	
	    for (int boxtop = 18; boxtop <= 87; boxtop ++)
	{
		gotoxy (boxtop+9, 10);
    	cout << char (220);
	}
	
        gotoxy(27,11);
    	cout << char (223);
	
    	gotoxy(27,31);
    	cout << char (220);
	
        	color(7);
        	// border warning  and notice
            	gotoxy(14,37);
	            cout << char (192);
	
            	gotoxy(14,33);
            	cout << char (218);
	
               	for (int ta=0; ta<3; ta++)
               {
              	gotoxy(14,34+ta);
              	cout << char (179);
               }

            	for (int ta=0; ta<94;ta++)
               {
            	gotoxy(15+ta,33);
             	cout << char (2500);
               }

            	for (int ta=0; ta<94;ta++)
               {
               	gotoxy(15+ta,37);
             	cout << char (2500);
               }
            
			    // right bords
 
            	gotoxy(109,33);
            	cout << char (191);
	
            	gotoxy(109,37);
            	cout << char (217);
	
            	for (int aa=0; aa<3; aa++)
               {
            	gotoxy(109,34+aa);
             	cout << char (179);
               }

	             for (int ta=0; ta<94;ta++)
               { 
            	gotoxy(15+ta,35);
	            cout << char (2500);
               }

                 // notice 
               	gotoxy(14,42);
	            cout << char (192);
	
	            gotoxy(14,38);
	            cout << char (218);
	
             	for (int ta=0; ta<3; ta++)
                {
             	gotoxy(14,39+ta);
             	cout << char (179);
                }

             	for (int ta=0; ta<94;ta++)
                {
             	gotoxy(15+ta,38);
	            cout << char (2500);
                }

	            for (int ta=0; ta<94;ta++)
                {
             	gotoxy(15+ta,42);
             	cout << char (2500);
                } 
                
			     // right bords
     
             	gotoxy(109,38);
            	cout << char (191);
	
             	gotoxy(109,42);
            	cout << char (217);
	
             	for (int aa=0; aa<3; aa++)
                {
	            gotoxy(109,39+aa);
             	cout << char (179);
                }


             	for (int ta=0; ta<94;ta++)
                {
	            gotoxy(15+ta,40);
	            cout << char (2500);
                }


                gotoxy (50, 2);
                cout << "Press ESC : To go back";
 
 
	gotoxy (15, 34);
	color (10);
	cout << "[WARNING]: ";
	color (15);
	gotoxy (16, 36);
	cout << "The Existing User Credentials & Reservation will be deleted if you try to register a new one.";
	
	gotoxy (15, 39);
	color (10);
	cout << "[NOTICE]: ";
	color (15);
	gotoxy (16, 41);
	cout << "Username & Password can only hold to a maximum of 15 characters. ";
	
	
	char pass [15];
	char temp; // holder for the pass [16] to take in
	char showpass [1]; // takes a y/Y/n/N char value from the user to decide to show the password or not
	
	int i = 0; // use this as a counter and as a reference statement for the for loop to be always true
	int x = 0; // same with above
	

	char user [15];
	char temp2; // holder for the user [16] to take in. Also to easily print out the characters while typing in real time
	
	gotoxy (50, 12);
	color (6);
	
	cout << "Enter Your Credentials";
	
	// box for credentials
	gotoxy(49,13);
	cout << char (200);
	
	gotoxy(49,11);
	cout << char (201);
	
	gotoxy(49,12);
	cout << char (186);
	
	gotoxy(72,11);
	cout << char (187);
	
	gotoxy(72,13);
	cout << char (188);
	
	gotoxy(72,12);
	cout << char (186);
	
	for (int i=0; i<22;i++)
	{
	gotoxy(50+i,11);
	cout << char (205);	
	}
	
	for (int i=0; i<22;i++)
	{
	gotoxy(50+i,13);
	cout << char (205);	
	}
		
	// username box
	gotoxy(55,16);
	cout << char (192);	
	
	gotoxy(55,14);
	cout << char (218);
	
	gotoxy(74,14);
	cout << char (191);
		
	gotoxy(74,16);
	cout << char (217);
		
	gotoxy(74,15);
	cout << char (179);
	
	for (int i=0; i<18;i++)
	{
	gotoxy(56+i,14);
	cout << char (2500);	
	}
	
	for (int i=0; i<18;i++)
	{
	gotoxy(56+i,16);
	cout << char (2500);	
	}
	
		
		
		gotoxy (42, 15);
		color (11);
		cout << "USERNAME: ";
				
			color(6);
			gotoxy(55,15);
    	    cout << char (179);
    	    
		color (15);
		                                                                                                 
		for (x = 0;;)
		{
			
			
				temp2 = getch ();
			
			
			if (temp2 >= 'a' && temp2 <= 'z' || temp2 >= 'A' && temp2 <= 'Z' ||temp2 >= '0' && temp2 <= '9')
			{
				user [x] = temp2;
				cout << temp2; //it's better to use cout getch rather getche, to avoid non-refreshant screen 
				x++;
			
				user [x] = '\0';
			}
			
			if (temp2 == back_esc)
			{
				system ("cls");
				UI ();
			}
			
			if (temp2 == tab)
			{
				user_register ();
			}
			
			if (temp2 == '\b'&& x >= 1)
			{
				cout << "\b \b";
				x--;
				user [x] = '\0';
			}
			
			if (temp2 == '\r' && x >= 1)
			{
				user [x] = '\0';
				goto break_user;
			}
			
			if (x >= 16)
			{
				cout << "\b \b";
				x--;
				user [x] = '\0';
				
			}
		}
		
		break_user:
		
        // password  box 
           color(6);
             gotoxy(55,19);
           	 cout << char (192);

           	 gotoxy(55,17);
	         cout << char (218);
	
           	 gotoxy(74,17);
	         cout << char (191);
	       
	 		gotoxy(74-19,18);
	         cout << char (179);
	         
	         gotoxy(74,19);
	         cout << char (217);
	
	    	 gotoxy(74,18);
    	     cout << char (179);
	
		     for (int it=0; it<18; it++)
	        {
	         gotoxy(56+it,17);
	         cout << char (2500);
	        }
	
	
	        for (int it=0; it<18; it++)
  	        {
	        gotoxy(56+it,19);
	        cout << char (2500);	
  	        }		

		gotoxy (42,18);
		color (11);
		cout << "PASSWORD: ";
		
		       
		           gotoxy(56,18);
    	           
    	           
		color (15);
		
		for (i = 0;;)
		{
			temp = down_arrow;
			
				temp = getch ();
			
			
				if (temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' || temp >= '0' && temp <= '9')
				{
					pass [i] = temp;
					cout << "*";
					i++;
					pass [i] = '\0';
				}
				
				if (temp == '\b' && i >= 1)
				{
					cout << "\b \b";
					pass [i] = '\0';
					i--;
				}
				
				if (temp == back_esc)
				{
					system ("cls");
					user_register ();
				}
				
				if (temp == '\r' && i >= 1)
				{
					pass [i] = '\0';
					goto break_pass;
				}
				
				if (i >= 16)
				{
					cout << "\b \b";
					pass [i] = '\0';
					i--;
				}
		}
		break_pass:
		
		
		here_again:
			
				// LINE 
		          color(11);
	                for(int bb=0;bb<68;bb++)
	                {
	  	            gotoxy (28+bb,21);
		            cout << char (223);
					} 
		
		color(15);			
					
		gotoxy (66, 21);
		cout << "";
		gotoxy (33, 23);
		cout << "Show password? (y/n): ";
		while (temp != 'y' && temp != 'Y' && temp != 'n' && temp != 'N' && temp != back_esc)
		{
			temp = getch ();
		}
		
		cout << temp;

		if (temp == back_esc)
		{
			system ("cls");
			user_register ();
		}
		if (temp == 'y' || temp == 'Y')
		{
				gotoxy (65, 23);
				cout << "You Entered: " << pass;
		}
		fstream register_user;
		fstream register_pass;
		register_pass.open("register_pass.txt", ios :: out | ios :: in);
		string check_pass;
		register_pass >> check_pass;
		
		register_user.open("register_user.txt", ios :: out | ios :: in);
		string check_user;
		register_user >> check_user;
		
		if (check_user == user && check_pass == pass)
		{
			    // LINE 
		          color(11);
	                for(int bb=0;bb<68;bb++)
	                {
	  	            gotoxy (28+bb,25);
		            cout << char (223);
					} 
			  
				gotoxy (29, 27);
				color (12);
				cout << "[THIS CREDENTIALS IS EXISTING ALREADY, NO NEED TO REGISTER AGAIN]";
				gotoxy (44, 29);
				color (14);
				system ("pause");
				system ("cls");
				UI ();
		}
		
		char word1 [26];
		back:
			
			    // LINE 
		          color(11);
	                for(int bb=0;bb<68;bb++)
	                {
	  	            gotoxy (28+bb,26);
		            cout << char (223);
					} 
		
		color(9);			
		gotoxy (32, 27);
		cout << "[SECURITY QUESTION]:";
		gotoxy (31, 29);
		cout << " What's your favourite word?: ";
		
		
		for (i = 0;;)
		{
			temp = down_arrow;
		
				temp = getch ();
			
			
				if (temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z')
				{
					word1 [i] = temp;
					cout << temp;
					i++;
				}
				
				if (temp == '\b' && i >= 1)
				{
					cout << "\b \b";
					i--;
				}
				
				if (temp == back_esc)
				{
					system ("cls");
					user_register ();
				}
				
				if (temp == '\r' && i >= 1)
				{
					word1 [i] = '\0';
					goto break_sq;
				}
				
				if (i >= 26)
				{
				    
					
					
					gotoxy (35, 31);
					color (12);
					cout << "MAX CHARACTER FOR SECURITY QUESTION WORD IS [25] ONLY";
					gotoxy (87, 29);
					cout << "\b \b";
					color (15);
					i--;
				
				}
		}
		break_sq:
		
		
		fstream sq;
		sq.open("sq.txt", ios :: out | ios :: in | ios :: trunc);
		
		sq << word1 << endl;
		sq.close();
		
		gotoxy (47, 25);
		color (10);
		cout << "[USER SUCCESSFULLY CREATED]";
		
		register_user.close();
		register_user.open("register_user.txt", ios :: out | ios :: in | ios :: trunc);
		register_user << user << endl;
		register_user.close();
		
		
		register_pass.close ();
		register_pass.open("register_pass.txt", ios :: out | ios :: in | ios :: trunc);
		register_pass << pass << endl;
		register_pass.close();
		
	fstream name_passenger ("name_passenger.txt", ios :: out | ios :: in | ios :: trunc);
	fstream age ("age.txt", ios :: out | ios :: in | ios :: trunc);
	fstream location ("location.txt", ios :: out | ios :: in | ios :: trunc);
	fstream pas_class ("class.txt", ios :: out | ios :: in | ios :: trunc);
	fstream trip ("trip.txt", ios :: out | ios :: in | ios :: trunc);
	fstream total ("total.txt", ios :: out | ios :: in | ios :: trunc);
	fstream status ("status.txt", ios :: out | ios :: in | ios :: trunc);
		
	fstream want_cmp ("want_cmp.txt", ios :: out | ios :: in | ios :: trunc);
	fstream cmp ("cmp.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream want_ins ("want_ins.txt", ios :: out | ios :: in | ios :: trunc);
	fstream insu ("insu.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream DF ("DF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream disc ("disc.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream VF ("VF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream VAT ("VAT.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream i_total ("i_total.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream cl_charge  ("cl_charge.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream GF  ("GF.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream grp_discount  ("grp_discount.txt", ios :: out | ios :: in | ios :: trunc);
	
		fstream paid ("paid.txt", ios :: out | ios :: in | ios :: trunc);

	 
	fstream change ("change.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream num_passengers ("num_passengers.txt", ios :: out | ios :: in | ios :: trunc);
	fstream minor_count ("minor_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream senior_count ("senior_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream adult_count ("adult_count.txt", ios :: out | ios :: in | ios :: trunc);
	
	name_passenger.close ();
	age.close ();
	location.close ();
	pas_class.close ();
	trip.close ();
	total.close ();
	status.close ();
	
	Sleep (1500);
		
	system ("cls");
	UI ();
}


// if user wants to recover their credentials
void forgot_register ()
{
	back:
	system ("cls");
    border_noNotice ();
	
	fstream sq;
	sq.open("sq.txt");
	

	int hold_x = 15;
	int hold_y = 3;
	char word [32];
	string holder;
	
	color (11);
	
	gotoxy (hold_x, hold_y);
	cout << "   ___    _____   ______  _____   ______  _     _  _______  _______   _____   _       _____  ";
	gotoxy (hold_x, hold_y+1);
	cout << " _(___)_ (_____) (______)(_____) (______)(_)   (_)(__ _ __)(_______) (_____) (_)     (_____) ";
	gotoxy (hold_x, hold_y+2);
	cout << "(_)   (_)(_)__(_)(_)__   (_)  (_)(_)__   (__)_ (_)   (_)      (_)   (_)___(_)(_)    (_)___   ";
	gotoxy (hold_x, hold_y+3);
	cout << "(_)    _ (_____) (____)  (_)  (_)(____)  (_)(_)(_)   (_)      (_)   (_______)(_)      (___)_ ";
	gotoxy (hold_x, hold_y+4);
	cout << "(_)___(_)( ) ( ) (_)____ (_)__(_)(_)____ (_)  (__)   (_)    __(_)__ (_)   (_)(_)____  ____(_)";
	gotoxy (hold_x, hold_y+5);
	cout << "  (___)  (_)  (_)(______)(_____) (______)(_)   (_)   (_)   (_______)(_)   (_)(______)(_____) ";                                                         


    // border for security questions
     
    color(11);
    
    gotoxy (90, 13);
	cout<< char (223);
	 
	gotoxy (90, 31);
	cout<< char (220);
	
	gotoxy (25 ,31);
	cout << char (220);
	 
	for (int boxside1 = 14; boxside1 <= 33; boxside1 ++)
	{
		gotoxy (90, boxside1-3);
	    cout<< char (223);

	}
	
		gotoxy (25 ,13);
		cout << char (223);
		
		
	for (int boxside2 = 12; boxside2 <= 31; boxside2 ++)
	{
		gotoxy (25, boxside2-1);
		cout << char (223);

	}
	
	for (int boxbottom = 15; boxbottom <= 80; boxbottom ++)
	{
		gotoxy (boxbottom+10, 32);
	    cout<< char (223);

	}
	
	for (int boxtop = 25; boxtop <= 90; boxtop ++)
	{
		gotoxy (boxtop, 10);
		cout<< char (220);
	}
	
	color(15);
	gotoxy (50, 2);
    cout << "Press ESC : To go back";
    
    
    color(10);
    gotoxy (50, 35);
    cout << "[REMINDER]";
    
    color(15);
    gotoxy (30, 37);
    cout << "Remember your favorite word that you entered,"; 
    gotoxy (30, 38);
    cout << "so this program can help you to remember your password  ";
    gotoxy (30, 39);
    cout << "and also your username.  ";

     // bord reminder
   
    color(14);
	
	gotoxy(29,41);
	cout << char (200);

	gotoxy(29,34);
	cout << char (201);
	
	for (int ff=0; ff<6; ff++)
	{	
	gotoxy(29,35+ff);
	cout << char (186);
    }  
            
    for (int ffs=0; ffs<6; ffs++)
	{        
	gotoxy(85,35+ffs);
	cout << char (186);
    }
	
	gotoxy(85,34);
	cout << char (187);
	
	gotoxy(85,41);
	cout << char (188);
	
	for (int debs = 0; debs<55; debs++)
	{
	gotoxy(30+debs,41);
	cout << char (205);	
	}
	
	for (int debs = 0; debs<55; debs++)
	{
	gotoxy(30+debs,34);
	cout << char (205);	
	}
	
	// line after reminder 
	for (int debsss = 0; debsss<55; debsss++)
	{
	gotoxy(30+debsss,36);
	cout << char (205);	
	}
	 
	color (15);
	gotoxy (52, 13);
	cout << "SECURITY QUESTION";
	      	
	
	color(14);
	// bord sec
	 gotoxy(51,14);
	cout << char (200);

	gotoxy(51,12);
	cout << char (201);
	
	gotoxy(51,13);
	cout << char (186);
	
	gotoxy(70,13);
	cout << char (186);
	
	gotoxy(70,12);
	cout << char (187);
	
	gotoxy(70,14);
	cout << char (188);
	
	for (int debs = 0; debs<18; debs++)
	{
	gotoxy(52+debs,12);
	cout << char (205);
		
	}
	
	for (int debs = 0; debs<18; debs++)
	{
	gotoxy(52+debs,14);
	cout << char (205);
		
	}
	
	 
		color(15);
		// bord word
		
		gotoxy(44,19);
     	cout << char (192);

     	gotoxy(44,18);
	    cout << char (179);
	   
	    gotoxy(44,17);
	    cout << char (218);
	   
	   // right 
	    gotoxy(77,19);
     	cout << char (217);
	   
	 
	    gotoxy(77,18);
     	cout << char (179);
     	
     	gotoxy(77,17);
	    cout << char (191);
	   
	   
	  	for (int debs = 0; debs<32; debs++)
	   {
	    gotoxy(45+debs,19);
	    cout << char (2500);	
	   }
	
	    for (int debs = 0; debs<32; debs++)
	   {
	    gotoxy(45+debs,17);
	    cout << char (2500);	
	   }
		
		gotoxy (32, 16);
		cout << "Whats's your favourite word? " <<endl;
		gotoxy(45,18);
		
		for (int i = 0;;)
		{
			char temp = down_arrow;
			
		
					temp = getch ();
			
		
			
				if (temp == '\b' && i >= 1)
				{
					cout << "\b \b";
					i--;
				}
				
				if (temp == back_esc)
				{
					system ("cls");
					UI ();
				}
				
				if (temp == '\r' && i >= 1)
				{
					word [i] = '\0';
					goto break_fr;
				}
				
				if (temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z')
				{
					word [i] = temp;
					cout << word[i];
					i++;
				}
				if (i >= 26)
				{
					cout << "\b \b";
					gotoxy (32, 20);
					color (11);
					cout << "[MAX CAPACITY IS 25 CHARACTERS]";
					gotoxy (61+26, 18);
					color (15);
					i--;
					gotoxy(70,18);
				
					
				}
		}
		break_fr:
	
		sq >> holder;
	
	fstream register_user;
	fstream register_pass;
	
	register_user.open("register_user.txt");
	register_pass.open("register_pass.txt");
	
	string for_user;
	register_user >> for_user;

	string for_pass;
	register_pass >> for_pass;
	
	if (word == holder)
	{
		gotoxy (30, 23);
		cout << "Username is:       " << for_user;
		       
			   gotoxy(48,23);
    	       cout << char (179);
    	  
    	  	  // border in username
	
	    gotoxy(48,22);
        cout << char (218);
     
     
	    gotoxy(48,24);
        cout << char (192);
     
        gotoxy(74,22);
        cout << char (191);
     
        gotoxy(74,24);
        cout << char (217);
     
        gotoxy(74,23);
        cout << char (179);
     
     
        for (int debs1 = 0; debs1<25; debs1++)
	   {
	    gotoxy(49+debs1,22);
	    cout << char (2500);	
	   }
	
	    for (int debs1 = 0; debs1<25; debs1++)
	   {
	    gotoxy(49+debs1,24);
	    cout << char (2500);	
	   }
		
		
		
		
		
		
		
		gotoxy (30, 26);
	    cout << "Pass is :          " << for_pass;
	            
				gotoxy(48,26);
    	        cout << char (179);
    	  	
	    // border for pass
	   gotoxy(48,25);
       cout << char (218);
     
	   gotoxy(48,27);
       cout << char (192);
     
       gotoxy(74,25);
       cout << char (191);
     
       gotoxy(74,27);
       cout << char (217);
     
       gotoxy(74,26);
       cout << char (179);
     
     
       for (int debs1 = 0; debs1<25; debs1++)
	  {
	   gotoxy(49+debs1,25);
	   cout << char (2500);	
  	  }
	
	   for (int debs1 = 0; debs1<25; debs1++)
	 {
	  gotoxy(49+debs1,27);
	  cout << char (2500);	
	 }
	
    	  
    	 // lines before press any key
    	 color(11);
		  	
			   for (int debss1 = 0; debss1<64; debss1++)
         	{
	         gotoxy(26+debss1,29);
         	 cout << char (223);
	        }
			
			
		color(15);	  
		gotoxy (30, 30);
		system ("pause");
		system ("cls");
		UI ();
	}
	
	if (word != holder)
	{
	    color(12);
		gotoxy (32, 23);
		cout << "Wrong guess, please try again";
		Sleep (500);
		color(15);
		forgot_register ();
	
		
	}

}


// back-end program responsible for the user login
void login ()
{
	// this is where the user puts the credentials to officiaally log-in to the bus system
	
	/*
	The Maximum value thaat can be input for the both Username & Password are 15 characters, this is to prevent the border buffer
	*/
	
	char pass [16];
	char temp; // holder for the pass [16] to take in
	char showpass [1]; // takes a y/Y/n/N char value from the user to decide to show the password or not
	
	int i = 0; // use this as a counter and as a reference statement for the for loop to be always true
	int x = 0; // same with above
	
	// the correct credentials the user must have to input 
	
	string guess_pass ;
	string guess_user ;
	
	fstream register_user;
	register_user.open("register_user.txt");
	register_user >> guess_user;
	
	fstream register_pass;
	register_pass.open("register_pass.txt");
	register_pass >> guess_pass;
	
	

	char user [16];
	char temp2; // holder for the user [16] to take in. Also to easily print out the characters while typing in real time
	
	gotoxy (89, 13);
	color (6);	
	cout << "Enter Your Credentials";
	
	color(14);
	// line befor username / border 
	for (int bord=0; bord<32; bord++)
	{
	gotoxy(84+bord,14);
	cout << char (205);	
	}
	
	
	        color(15);
	    	// username box
			gotoxy(95,18);
         	cout << char (192);
    
 	        gotoxy(95,16);
	        cout << char (218);
	       
        	gotoxy(112,16);
         	cout << char (191);
         	
         	gotoxy(112,18);
	        cout << char (217);
	       
	       	gotoxy(112,17);
	        cout << char (179);
        
        
			for (int degs=0; degs<16; degs++)
         	{
        	gotoxy(96+degs,16);
           	cout << char (2500);	
	        }
	 	    
	 	    for (int degs=0; degs<16; degs++)
         	{
        	gotoxy(96+degs,18);
           	cout << char (2500);	
	        }
	    
		
		gotoxy (86, 17);
		color (11);
		cout << "USERNAME:   ";
		     
			 color(7);
	         gotoxy(95,17);
             cout << char (179);
			    
		color (15);
		                                                                                                                                    
		for (x = 0;;)
		{
			/*
			This is a loop process, instead of using a simple cin/getline (cin); we use this
			do we have a better control for the input of the user
			
			SUMMARY OF THIS LOOP PROCESS
			* If the user has entered a character value, ranging from a-z/A-Z/0-9 then its data will be stored the
			temporary holder. Then we cout the letter that haas been entered. if the user entered a backspace, 
			it must have a value of the controller of the data [x] equal or greater to one, recognizing that the user 
			already input a character; 
			then the last data will be deleted using the x as a controller of the data entered per value of the 15 maximum 
			characters.
			
			* If the user decided to press enter, then we will process a [\0] termination of a character input,
			that will symbolizes the finish entry of the user. Then we will use a jump statement, specifically the 'goto' 
			to break the loop and to manually know where is the great position, a goto must go there.
			*/
			temp2 = down_arrow;
			
			
				temp2 = getch ();
			
			
			
			if (temp2 >= 'a' && temp2 <= 'z' || temp2 >= 'A' && temp2 <= 'Z' ||temp2 >= '0' && temp2 <= '9')
			{
				cout << temp2; //it's better to use cout getch rather getche, to avoid non-refreshant screen 
				user [x] = temp2;
				x++;
			}
			
			if (temp2 == tab)
			{
				user_register ();
			}
			
			if (temp2 == '+')
			{
				forgot_register ();
			}
			
			if (temp2 == '\b'&& x >= 1)
			{
				cout << "\b \b";
				x--;
			}
			
			if (temp2 == '\r' && x >= 1)
			{
				user [x] = '\0';
				goto break_user;
			}
			
			if (x >= 16)
			{
				cout << "\b \b";
				x--;
				
			}
		}
		
		break_user:
		
			// password box
			gotoxy(95,21);
         	cout << char (192);
    
 	        gotoxy(95,19);
	        cout << char (218);
	       
        	gotoxy(112,19);
         	cout << char (191);
         	
         	gotoxy(112,21);
	        cout << char (217);
	     
	        gotoxy(112,20);
            cout << char (179);
        
			for (int degs=0; degs<16; degs++)
         	{
        	gotoxy(96+degs,21);
           	cout << char (2500);	
	        }
	 	    
	 	    for (int degs=0; degs<16; degs++)
         	{
        	gotoxy(96+degs,19);
           	cout << char (2500);	
	        }
	       		
				
			
		gotoxy (86, 20);
		color (11);
		cout << "PASSWORD: ";
		
		     color(7);
	         gotoxy(95,20);
             cout << char (179);
		
		color (15);
	
		for (i = 0;;)
		{
				temp = down_arrow;
		
				temp = getch ();
			
			
				if (temp >= 'a' && temp <= 'z' || temp >= 'A' && temp <= 'Z' || temp >= '0' && temp <= '9')
				{
					pass [i] = temp;
					cout << "*";
					i++;
				}
				
				if (temp == back_esc)
				{
					system ("cls");
					UI ();
				}
				
				if (temp == '+')
				{
				forgot_register ();
				}
				
				if (temp == '\b' && i >= 1)
				{
					cout << "\b \b";
					i--;
				}
				
				if (temp == '\r' && i >= 1)
				{
					pass [i] = '\0';
					goto break_pass;
				}
				
				if (temp == tab)
				{
					system ("cls");
					user_register ();
				}
				
				if (i >= 16)
				{
					cout << "\b \b";
					i--;
				}
		}
		break_pass:
		
		gotoxy (86, 22);
		cout << "Show password? (y/n): ";
		i = 0;
		
		while (temp != 'y' && temp != 'Y' && temp != 'n' && temp != 'N' && temp != back_esc && temp != tab && temp != '+')
		{
			temp = getch ();
		}
		
		cout << temp;
		if (temp == back_esc)
		{
			system ("cls");
			UI ();
		}
		if (temp == tab)
		{
			system ("cls");
			user_register ();
		}
		if (temp == '+')
		{
			system ("cls");
			forgot_register ();
		}
		if (temp == 'y' || temp == 'Y')
		{
				gotoxy (87, 24);
				cout << "You Entered: " << pass;
		}
	
		
	
		if (user == guess_user && pass == guess_pass)
		{
			color(15);
			// lines in acces granted
			for (int hh=0; hh<32; hh++)
			{
			gotoxy (84+hh, 25);
			cout << char (205);
	     	} 
	     	
			
			gotoxy (93, 26);
			color (3);
			cout << "ACCESS GRANTED";
			gotoxy (90, 27);
			color (15);
			cout << "= WELCOME PASSENGER =";


		for (x = 7; x <= 43; x += 2)
			{
				
				int bus_struc = 223;
	color (9);
	gotoxy (x, 10);
	for (int i = 1; i<= 72; i++)
	{
		cout << char (bus_struc);
	}
	gotoxy (x, 11);
	for (int i = 1; i<= 73; i++)
	{
		cout << char (bus_struc);
	}
	gotoxy (x, 12);
	for (int i = 1; i<= 73; i++)
	{
		cout << char (bus_struc);
	}
	//end of roof
	int clr_handles = 3;
	int clr_front = 11;
	color (clr_handles);
	gotoxy (x, 13);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (x, 14);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (x, 15);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (x, 16);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	color (clr_handles);
	gotoxy (x, 17);
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "    " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << "    "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << char (bus_struc) << "     "  << char (bus_struc) << "     " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "   ";
	cout << char (bus_struc) << char (bus_struc);
	color (clr_front);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	/* end of middle */
	int mid = 9;
	int front_mid = 9;
	
	gotoxy (x, 18);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	
	gotoxy (x, 19);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	
	gotoxy (x, 20);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	
	gotoxy (x, 21);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (x, 22);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	color (4);
	cout << char (bus_struc);
	
	color (front_mid);	
	cout << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (x, 23);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (x, 24);
	for (int i = 1; i<=59;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	gotoxy (x, 25);
    cout << char (bus_struc) << char (bus_struc) ;
	color (4);
	cout << char (bus_struc) << char (bus_struc) ;
	
	for (int i = 1; i<=55;  i++)
	{
		color (mid);
		cout << char (bus_struc);
	}
	
	cout << "   " << char (bus_struc) << char (bus_struc);
	color (front_mid);
	cout << "   " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) ;
	
	//beginning of tires
	int wheels = 8;
	gotoxy (x, 26);
	for (int i = 1; i <= 9; i++)
	{
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 9; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	
	for (int i = 1; i <= 29; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	
	for (int i = 1; i <= 9; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	
	for (int i = 1; i <= 19; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	
	
	
	gotoxy (x, 27);
	for (int i = 1; i <= 8; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 27; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
		for (int i = 1; i <= 18; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	

	gotoxy (x, 28);
		for (int i = 1; i <= 8; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 27; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}
	for (int i = 1; i <= 11; i++)
	{
		color (wheels);
		cout << char (bus_struc);
	}
		for (int i = 1; i <= 18; i++)
	{
		color (front_mid);
		cout << char (bus_struc);
	}

	
	//rump wheels
	color (wheels);
	gotoxy (x, 29);
	
	cout << "        " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "                           " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	
	gotoxy (x, 30);
	cout << "        " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << "                           " << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	

	gotoxy (x, 31);
	cout << "         "  << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc)<< "                             "  << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc) << char (bus_struc);
	
	
	
			gotoxy (x-1, 10);
			cout << " ";
			gotoxy (x-1, 11);
			cout << " ";
			gotoxy (x-1, 12);
			cout << " ";
			gotoxy (x-1, 13);
			cout << " ";
			gotoxy (x-1, 14);
			cout << " ";
			gotoxy (x-1, 15);
			cout << " ";
			gotoxy (x-1, 16);
			cout << " ";
			gotoxy (x-1, 17);
			cout << " ";
			gotoxy (x-1, 18);
			cout << " ";
			gotoxy (x-1, 19);
			cout << " ";
			gotoxy (x-1, 20);
			cout << " ";
			gotoxy (x-1, 21);
			cout << " ";
			gotoxy (x-1, 22);
			cout << " ";
			gotoxy (x-1, 23);
			cout << " ";
			gotoxy (x-1, 24);
			cout << " ";
			gotoxy (x-1, 25);
			cout << " ";
			gotoxy (x-1, 26);
			cout << " ";
			gotoxy (x-1, 27);
			cout << " ";
			gotoxy (x-1, 28);
			cout << " ";
			gotoxy (x-1, 29);
			cout << " ";
			gotoxy (x-1, 30);
			cout << " ";
			gotoxy (x-1, 31);
			cout << " ";
			
			gotoxy (x-2, 10);
			cout << " ";
			gotoxy (x-2, 11);
			cout << " ";
			gotoxy (x-2, 12);
			cout << " ";
			gotoxy (x-2, 13);
			cout << " ";
			gotoxy (x-2, 14);
			cout << " ";
			gotoxy (x-2, 15);
			cout << " ";
			gotoxy (x-2, 16);
			cout << " ";
			gotoxy (x-2, 17);
			cout << " ";
			gotoxy (x-2, 18);
			cout << " ";
			gotoxy (x-2, 19);
			cout << " ";
			gotoxy (x-2, 20);
			cout << " ";
			gotoxy (x-2, 21);
			cout << " ";
			gotoxy (x-2, 22);
			cout << " ";
			gotoxy (x-2, 23);
			cout << " ";
			gotoxy (x-2, 24);
			cout << " ";
			gotoxy (x-2, 25);
			cout << " ";
			gotoxy (x-2, 26);
			cout << " ";
			gotoxy (x-2, 27);
			cout << " ";
			gotoxy (x-2, 28);
			cout << " ";
			gotoxy (x-2, 29);
			cout << " ";
			gotoxy (x-2, 30);
			cout << " ";
			gotoxy (x-2, 31);
			cout << " ";
			
			border ();
			gotoxy (7, 32);
			}
		
			loading (); // If they are granted to have an access, then the loading will commence to start the main program
		}
		else
		{	
			// they have an option to try again if they got a denied access
		
			char again;
			
			
			// lines in acces denied
			
			for (int hh=0; hh<32; hh++)
			{
			gotoxy (84+hh, 25);
			cout << char (205);
	     	} 
			
			
			gotoxy (93, 26);
			color (4);
			cout << "ACCESS DENIED";
			gotoxy (84, 27);
			color (15);
			cout << "(No Such Credentials Have Found)";
			gotoxy (92, 28);
			cout << "TRY AGAIN? (y/n): ";
			while (again != back_esc && again != 'y' && again != 'Y' && again != 'n' && again != 'N' && again != tab && again != '+')
			{
				again = getch ();
			}

			
			if (again == tab)
			{
				system ("cls");
				user_register ();
			}
			
			if (again == '+')
			{
				system ("cls");
				forgot_register ();
			}
				
			switch (again)
			{
				case 'y': case 'Y': case back_esc:
					system ("cls");
					main (); // if entered yes, then they will come back from the start of the UI
					
					break;
					
				case 'n': case 'N': 
					exit_animation (); // If no, then the animation for exit will commence
					break;
			}
		}
	

}


// if the user don't want to enter again, they will be directed to exit.
void exit ()
{
	system ("cls");
	
	color (6);
	border_noNotice ();
	color (10);

	int x = 219;
	
	
		//merc name
	gotoxy (7, 27);
	cout << "  __   __  ______ _____    ___       _____  _     _  _____";      
	gotoxy (7, 28);
	cout << " (__)_(__)(______(_____) _(___)_    (_____)(_)   (_)(_____)";    
	gotoxy (7, 29);
	cout << "(_) (_) (_(_)__  (_)__(_(_)   (_)   (_)__(_(_)   (_(_)___";      
	gotoxy (7, 30);
	cout << "(_) (_) (_(____) (_____)(_)    _    (_____)(_)   (_) (___)_";     
	gotoxy (7, 31);
	cout << "(_)     (_(_)____( ) ( )(_)___(_)   (_)__(_(_)___(_) ____(_)";   
	gotoxy (7, 32);
	cout << "(_)     (_(______(_)  (_) (___)     (_____) (_____) (_____)";    
	
	
	
	
	
	
	
	
	//flag
	
	color(7);
	
	for(int l=0; l<16; l++)
	{
	 gotoxy(89,12+l);
	 cout << char (219);		
	}
	
	//yellow 
	
	color(6);
	
	for(int l=0; l<2; l++)
	{
	 gotoxy(90+l,12);
	 cout << char (219);		
	}
	
	
	for(int l=0; l<2; l++)
	{
	 gotoxy(97+l,15);
	 cout << char (219);		
	}
	
		for(int l=0; l<2; l++)
	{
	 gotoxy(92+l,15);
	 cout << char (219);		
	}
	
	for(int l=0; l<2; l++)
	{
	 gotoxy(90+l,18);
	 cout << char (219);		
	}
	
	
	
	// white
	color(15);
	
	for(int l=0; l<1; l++)
	{
	 gotoxy(92+l,12);
	 cout << char (219);		
	}
	
	for(int l=0; l<5; l++)
	{
	 gotoxy(90+l,13);
	 cout << char (219);		
	}
	
	for(int l=0; l<7; l++)
	{
	 gotoxy(90+l,14);
	 cout << char (219);		
	}
	
	for(int l=0; l<2; l++)
	{
	 gotoxy(90+l,15);
	 cout << char (219);		
	}
	
	for(int l=0; l<3; l++)
	{
	 gotoxy(94+l,15);
	 cout << char (219);		
	}
	
	
	for(int l=0; l<7; l++)
	{
	 gotoxy(90+l,16);
	 cout << char (219);		
	}
	
	
	for(int l=0; l<5; l++)
	{
	 gotoxy(90+l,17);
	 cout << char (219);		
	}
	
    	for(int l=0; l<1; l++)
	{
	 gotoxy(92+l,18);
	 cout << char (219);		
	}
	
	// blue
	color(1);
	
	for(int l=0; l<20; l++)
	{
	 gotoxy(93+l,12);
	 cout << char (219);		
	}
	
	for(int l=0; l<18; l++)
	{
	 gotoxy(95+l,13);
	 cout << char (219);		
	}
	
	for(int l=0; l<16; l++)
	{
	 gotoxy(97+l,14);
	 cout << char (219);		
	}
	
	for(int l=0; l<14; l++)
	{
	 gotoxy(99+l,15);
	 cout << char (219);		
	}
	
	// red 
	color(4);
	for(int l=0; l<16; l++)
	{
	 gotoxy(97+l,16);
	 cout << char (219);		
	}
	
	for(int l=0; l<18; l++)
	{
	 gotoxy(95+l,17);
	 cout << char (219);		
	}
	
		for(int l=0; l<20; l++)
	{
	 gotoxy(93+l,18);
	 cout << char (219);		
	}
	
	
	// hair
    color(11);
    for (int i=0;i<=1; i++)
	{
		gotoxy (74,23+i);
		cout << char (219);
		
	}
	
    for (int i=0;i<=5; i++)
	{
		gotoxy (75+i,23);
		cout << char (219);

	}
	
     for (int i=0;i<=1; i++)
	{
		gotoxy (81,23+i);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (82+i,23);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (82+i,24);
		cout << char (219);

	}
     
    for (int i=0;i<=1; i++)
	{
		gotoxy (83+i,25);
		cout << char (219);

	}
  
    // face 
    color(6);
    for (int i=0;i<=5; i++)
	{
		gotoxy (75+i,24);
		cout << char (219);

	}
    
    for (int i=0;i<=8; i++)
	{
		gotoxy (74+i,25);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (74,25+i);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (78+i,26);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (78+i,27);
		cout << char (219);

	}
	
	 for (int i=0;i<=1; i++)
	{
		gotoxy (84,26+i);
		cout << char (219);

	}
	
	
	 for (int i=0;i<=4; i++)
	{
		gotoxy (77+i,28);
		cout << char (219);

	}
	
	color(12);
	for (int i=0;i<=2; i++)
	{
		gotoxy (74+i,28);
		cout << char (219);

	}
	
	
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (82+i,28);
		cout << char (219);

	}

	
	// eyebrow
	color(8);
	for (int i=0;i<=2; i++)
	{
		gotoxy (75+i,26);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (81+i,26);
		cout << char (219);

	}
	
	// eyes 
	color(15);
	for (int i=0;i<=1; i++)
	{
		gotoxy (75+i,27);
		cout << char (219);

	}
	
	for (int i=0;i<=1; i++)
	{
		gotoxy (82+i,27);
		cout << char (219);

	}
	
    color(4);
		for (int i=0;i<=0; i++)
	{
		gotoxy (77+i,27);
		cout << char (219);

	}
	
		for (int i=0;i<=0; i++)
	{
		gotoxy (81+i,27);
		cout << char (219);

	}
	
	// body 
	color(11);
	for(int i=0; i<6; i++)
	{
		gotoxy (71+i,29);
		cout << char (219);	
	}
  
	for(int i=0; i<8; i++)
	{
		gotoxy (70+i,30);
		cout << char (219);	
	}

    for(int i=0; i<8; i++)
	{
		gotoxy (70+i,31);
		cout << char (219);	
	}
	
	  for(int i=0; i<3; i++)
	{
		gotoxy (75+i,32);
		cout << char (219);	
	}
     
     for(int i=0; i<4; i++)
	{
		gotoxy (82+i,29);
		cout << char (219);	
	}
	
	  for(int i=0; i<10; i++)
	{
		gotoxy (81+i,30);
		cout << char (219);	
	}

     for(int i=0; i<10; i++)
	{
		gotoxy (81+i,31);
		cout << char (219);	
	}
	
	  for(int i=0; i<5; i++)
	{
		gotoxy (81+i,32);
		cout << char (219);	
	}
	
	
	color(6);
	 for(int i=0; i<5; i++)
	{
		gotoxy (86+i,29);
		cout << char (219);	
	}
	
	 for(int i=0; i<5; i++)
	{
		gotoxy (86+i,28);
		cout << char (219);	
	}
	
	

 
    color(6);
    
     for(int i=0; i<5; i++)
	{
		gotoxy (70+i,32);
		cout << char (219);	
	}
	

	color(14);
     for(int i=0; i<5; i++)
	{
		gotoxy (77+i,29);
		cout << char (219);	
	}
	
	for(int i=0; i<3; i++)
	{
		gotoxy (78+i,30);
		cout << char (219);	
	}
    
    	for(int i=0; i<3; i++)
	{
		gotoxy (78+i,31);
		cout << char (219);	
	}

    	for(int i=0; i<3; i++)
	{
		gotoxy (78+i,32);
		cout << char (219);	
	}
        
	
	
	
	
	
	// thanks for
	
	color (11);
	gotoxy (10, 3);
	cout << " _______  _     _   _____   _     _  _    _  _____     \t ______  _____   _____  ";
	gotoxy (10, 4);
	cout << "(__ _ __)(_)   (_) (_____) (_)   (_)(_)  (_)(_____)    \t(______)(_____) (_____) ";
	gotoxy (10, 5);
	cout << "   (_)   (_)___(_)(_)___(_)(__)_ (_)(_)_(_)(_)___      \t(_)__  (_)   (_)(_)__(_)";
	gotoxy (10, 6);
	cout << "   (_)   (_______)(_______)(_)(_)(_)(____)   (___)_    \t(____) (_)   (_)(_____) ";
	gotoxy (10, 7);
	cout << "   (_)   (_)   (_)(_)   (_)(_)  (__)(_) (_)  ____(_)   \t(_)    (_)___(_)( ) ( ) ";
	gotoxy (10, 8);
	cout << "   (_)   (_)   (_)(_)   (_)(_)   (_)(_)  (_)(_____)    \t(_)     (_____) (_)  (_)";
	
	
	//VISITING
	gotoxy (10, 15);
	cout << " _     _  _______  _____  _______  _______  _______  _     _   _____  ";
	gotoxy (10, 16);
	cout << "(_)   (_)(_______)(_____)(_______)(__ _ __)(_______)(_)   (_) (_____) ";
	gotoxy (10, 17);
	cout << "(_)   (_)   (_)  (_)___     (_)      (_)      (_)   (__)_ (_)(_)  ___ ";
	gotoxy (10, 18);
	cout << "(_)   (_)   (_)    (___)_   (_)      (_)      (_)   (_)(_)(_)(_) (___)";
	gotoxy (10, 19);
	cout << " (_)_(_)  __(_)__  ____(_)__(_)__    (_)    __(_)__ (_)  (__)(_)___(_)";
	gotoxy (10, 20);
	cout << "  (___)  (_______)(_____)(_______)   (_)   (_______)(_)   (_) (_____) ";



     
    // borders for names 
     gotoxy(43,35);
     cout << char (201);
     
     gotoxy(43,41);
     cout << char (200);
     
     gotoxy(64,35);
     cout << char (187);
     
     gotoxy(64,41);
     cout << char (188);
     
     for (int n=0; n<5; n++)
     {
     	gotoxy(43,36+n);
        cout << char (186);
	 }
	 
	 for (int n=0; n<5; n++)
     {
     	gotoxy(64,36+n);
        cout << char (186);
	 }
	 
	 
	  for (int n=0; n<20; n++)
     {
     	gotoxy(44+n,35);
        cout << char (205);
	 }
	 
	   for (int n=0; n<20; n++)
     {
     	gotoxy(44+n,41);
        cout << char (205);
	 }
	 
	 for (int n=0; n<20; n++)
     {
     	gotoxy(44+n,37);
        cout << char (205);
	 }
	 

	//madebygroup1
	color (14);
	gotoxy (44, 36);
	cout << "Created By: ";
	gotoxy (44, 38);
	cout << "Barcos, Jim Aerol S.";
	gotoxy (44, 39);
	cout << "Igat, Beverly B.";
	gotoxy (44, 40);
	cout << "Tongo, Mark P.";
	gotoxy (0,0);
	
	for (int i = 0;;)
	{
		char u_return = getch ();
		if (u_return == back_esc)
		{
			system ("cls");
			UI ();
		}
	}
	
}

// UI of loading
void loading ()
{
	// THE LOADING ANIMATION
	// we use clear screen and some for loop value gotoxxy to simulate the moving
	int x;
	int again = 1;
	int struc = 222;
	
	system ("cls");
	color (15);
	border_noNotice ();
	color (13);
	loading1 ();
	color (6);
	
	int holder_x = 9;
/*
         _____   _       ______   _____    _____   ______     _       _   _____   _______  _______            
        (_____) (_)     (______) (_____)  (_____) (______)   (_)  _  (_) (_____) (_______)(__ _ __)           
 ______ (_)__(_)(_)     (_)__   (_)___(_)(_)___   (_)__      (_) (_) (_)(_)___(_)   (_)      (_)    ______ 
(______)(_____) (_)     (____)  (_______)  (___)_ (____)     (_) (_) (_)(_______)   (_)      (_)   (______)
        (_)     (_)____ (_)____ (_)   (_)  ____(_)(_)____    (_)_(_)_(_)(_)   (_) __(_)__    (_)              
        (_)     (______)(______)(_)   (_) (_____) (______)    (__) (__) (_)   (_)(_______)   (_)              
           */
	gotoxy (holder_x,1);
	cout << "          _____   _       ______   _____    _____   ______     _       _   _____   _______  _______        ";
	gotoxy (holder_x,2);
	cout << "         (_____) (_)     (______) (_____)  (_____) (______)   (_)  _  (_) (_____) (_______)(__ _ __)       ";
	gotoxy (holder_x,3);
	cout << " ______  (_)__(_)(_)     (_)__   (_)___(_)(_)___   (_)__      (_) (_) (_)(_)___(_)   (_)      (_)   ______ ";
	gotoxy (holder_x,4);
	cout << "(______) (_____) (_)     (____)  (_______)  (___)_ (____)     (_) (_) (_)(_______)   (_)      (_)  (______)";
	gotoxy (holder_x,5);
	cout << "         (_)     (_)____ (_)____ (_)   (_)  ____(_)(_)____    (_)_(_)_(_)(_)   (_) __(_)__    (_)          ";
	gotoxy (holder_x,6);
	cout << "         (_)     (______)(______)(_)   (_) (_____) (______)    (__) (__) (_)   (_)(_______)   (_)          ";

	
		while (again != 2)
		{
		int i = 1;
	
		for (x = 12; x <= 40; x += 3)
		{
			Sleep (50); // 0.005 seconds
			color (i);
			gotoxy (x, 10);
			cout << "101010101010101010101010101010101010101010101010101010101010101010101010";
			gotoxy (x, 11);
			cout << "0010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 12);
			cout << "1010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 13);
			cout << "010*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 14);
			cout << "110*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 15);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 16);
			cout << "110*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 17);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 18);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 19);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 20);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 21);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 22);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   0101  01";
			gotoxy (x, 23);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 24);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 25);
			cout << "01  1010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 26);
			cout << "110101010*********10101010101010101010101010101*********1010101010101010101";
			gotoxy (x, 27);
			cout << "01010101***********110101010101010101010101010***********010101010101010101";
			gotoxy (x, 28);
			cout << "11010101***********010101010101010101010101010***********010101010101010101";
			gotoxy (x, 29);
			cout << "        ***********                           ***********\n";
			gotoxy (x, 30);
			cout << "        ***********                           ***********";
			gotoxy (x, 31);
			cout << "         *********                             *********";
			gotoxy (7, 32);
			i++;
			
			// loading stars
			color (i+1);
			gotoxy (27, 34);
			gotoxy (27, 34);
		
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 35);
			
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 36);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (21, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 38);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 39);
				for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (27, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			
			gotoxy (98, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 35);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			gotoxy (94, 36);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (92, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (94, 38);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 39);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (98, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			// border
			//null trace
			gotoxy (x-3, 10);
			cout << " ";
			gotoxy (x-3, 11);
			cout << " ";
			gotoxy (x-3, 12);
			cout << " ";
			gotoxy (x-3, 13);
			cout << " ";
			gotoxy (x-3, 14);
			cout << " ";
			gotoxy (x-3, 15);
			cout << " ";
			gotoxy (x-3, 16);
			cout << " ";
			gotoxy (x-3, 17);
			cout << " ";
			gotoxy (x-3, 18);
			cout << " ";
			gotoxy (x-3, 19);
			cout << " ";
			gotoxy (x-3, 20);
			cout << " ";
			gotoxy (x-3, 21);
			cout << " ";
			gotoxy (x-3, 22);
			cout << " ";
			gotoxy (x-3, 23);
			cout << " ";
			gotoxy (x-3, 24);
			cout << " ";
			gotoxy (x-3, 25);
			cout << " ";
			gotoxy (x-3, 26);
			cout << " ";
			gotoxy (x-3, 27);
			cout << " ";
			gotoxy (x-3, 28);
			cout << " ";
			gotoxy (x-3, 29);
			cout << " ";
			gotoxy (x-3, 30);
			cout << " ";
			gotoxy (x-3, 31);
			cout << " ";
			
			gotoxy (x-2, 10);
			cout << " ";
			gotoxy (x-2, 11);
			cout << " ";
			gotoxy (x-2, 12);
			cout << " ";
			gotoxy (x-2, 13);
			cout << " ";
			gotoxy (x-2, 14);
			cout << " ";
			gotoxy (x-2, 15);
			cout << " ";
			gotoxy (x-2, 16);
			cout << " ";
			gotoxy (x-2, 17);
			cout << " ";
			gotoxy (x-2, 18);
			cout << " ";
			gotoxy (x-2, 19);
			cout << " ";
			gotoxy (x-2, 20);
			cout << " ";
			gotoxy (x-2, 21);
			cout << " ";
			gotoxy (x-2, 22);
			cout << " ";
			gotoxy (x-2, 23);
			cout << " ";
			gotoxy (x-2, 24);
			cout << " ";
			gotoxy (x-2, 25);
			cout << " ";
			gotoxy (x-2, 26);
			cout << " ";
			gotoxy (x-2, 27);
			cout << " ";
			gotoxy (x-2, 28);
			cout << " ";
			gotoxy (x-2, 29);
			cout << " ";
			gotoxy (x-2, 30);
			cout << " ";
			gotoxy (x-2, 31);
			cout << " ";
			
			gotoxy (x-1, 10);
			cout << " ";
			gotoxy (x-1, 11);
			cout << " ";
			gotoxy (x-1, 12);
			cout << " ";
			gotoxy (x-1, 13);
			cout << " ";
			gotoxy (x-1, 14);
			cout << " ";
			gotoxy (x-1, 15);
			cout << " ";
			gotoxy (x-1, 16);
			cout << " ";
			gotoxy (x-1, 17);
			cout << " ";
			gotoxy (x-1, 18);
			cout << " ";
			gotoxy (x-1, 19);
			cout << " ";
			gotoxy (x-1, 20);
			cout << " ";
			gotoxy (x-1, 21);
			cout << " ";
			gotoxy (x-1, 22);
			cout << " ";
			gotoxy (x-1, 23);
			cout << " ";
			gotoxy (x-1, 24);
			cout << " ";
			gotoxy (x-1, 25);
			cout << " ";
			gotoxy (x-1, 26);
			cout << " ";
			gotoxy (x-1, 27);
			cout << " ";
			gotoxy (x-1, 28);
			cout << " ";
			gotoxy (x-1, 29);
			cout << " ";
			gotoxy (x-1, 30);
			cout << " ";
			gotoxy (x-1, 31);
			cout << " ";
			
			
		}
		 i = 1;
		 int z = 118;
		 int wheels = 100;
		for (x = 40; x >= 12; x -= 3)
		{
		
			Sleep (50);
			color (i);
			gotoxy (x, 10);
			cout << "101010101010101010101010101010101010101010101010101010101010101010101010";
			gotoxy (x, 11);
			cout << "0010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 12);
			cout << "1010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 13);
			cout << "010*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 14);
			cout << "110*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 15);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 16);
			cout << "110*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 17);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 18);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 19);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 20);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 21);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 22);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   0101  01";
			gotoxy (x, 23);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 24);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 25);
			cout << "01  1010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 26);
			cout << "110101010*********10101010101010101010101010101*********1010101010101010101";
			gotoxy (x, 27);
			cout << "01010101***********110101010101010101010101010***********010101010101010101";
			gotoxy (x, 28);
			cout << "11010101***********010101010101010101010101010***********010101010101010101";
			gotoxy (x, 29);
			cout << "        ***********                           ***********\n";
			gotoxy (x, 30);
			cout << "        ***********                           ***********";
			gotoxy (x, 31);
			cout << "         *********                             *********";
			gotoxy (7, 32);
			i++;
			
			color (i+1);
			gotoxy (27, 34);
	
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 35);
			
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 36);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (21, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 38);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 39);
				for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (27, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			
			gotoxy (98, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 35);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			gotoxy (94, 36);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (92, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (94, 38);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 39);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (98, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (z-6, 10);
			cout << " ";
			
			gotoxy (z-5, 10);
			cout << " ";
			gotoxy (z-5, 11);
			cout << " ";
			gotoxy (z-5, 12);
			cout << " ";
			gotoxy (z-5, 13);
			cout << " ";
			gotoxy (z-5, 14);
			cout << " ";
			
			gotoxy (z-4, 10);
			cout << " ";
			gotoxy (z-4, 11);
			cout << " ";
			gotoxy (z-4, 12);
			cout << " ";
			gotoxy (z-4, 13);
			cout << " ";
			gotoxy (z-4, 14);
			cout << " ";
			gotoxy (z-4, 15);
			cout << " ";
			gotoxy (z-4, 16);
			cout << " ";
			gotoxy (z-4, 17);
			cout << " ";
			
			gotoxy (z-3, 10);
			cout << " ";
			gotoxy (z-3, 11);
			cout << " ";
			gotoxy (z-3, 12);
			cout << " ";
			gotoxy (z-3, 13);
			cout << " ";
			gotoxy (z-3, 14);
			cout << " ";
			gotoxy (z-3, 15);
			cout << " ";
			gotoxy (z-3, 16);
			cout << " ";
			gotoxy (z-3, 17);
			cout << " ";
			gotoxy (z-3, 18);
			cout << " ";
			gotoxy (z-3, 19);
			cout << " ";
			gotoxy (z-3, 20);
			cout << " ";
			gotoxy (z-3, 21);
			cout << " ";
			gotoxy (z-3, 22);
			cout << " ";
			gotoxy (z-3, 23);
			cout << " ";
			gotoxy (z-3, 24);
			cout << " ";
			gotoxy (z-3, 25);
			cout << " ";
			gotoxy (z-3, 26);
			cout << " ";
			gotoxy (z-3, 27);
			cout << " ";
			gotoxy (z-3, 28);
			cout << " ";
			gotoxy (z-3, 29);
			cout << " ";
			gotoxy (z-3, 30);
			cout << " ";
			gotoxy (z-3, 31);
			cout << " ";
			
			gotoxy (z-2, 10);
			cout << " ";
			gotoxy (z-2, 11);
			cout << " ";
			gotoxy (z-2, 12);
			cout << " ";
			gotoxy (z-2, 13);
			cout << " ";
			gotoxy (z-2, 14);
			cout << " ";
			gotoxy (z-2, 15);
			cout << " ";
			gotoxy (z-2, 16);
			cout << " ";
			gotoxy (z-2, 17);
			cout << " ";
			gotoxy (z-2, 18);
			cout << " ";
			gotoxy (z-2, 19);
			cout << " ";
			gotoxy (z-2, 20);
			cout << " ";
			gotoxy (z-2, 21);
			cout << " ";
			gotoxy (z-2, 22);
			cout << " ";
			gotoxy (z-2, 23);
			cout << " ";
			gotoxy (z-2, 24);
			cout << " ";
			gotoxy (z-2, 25);
			cout << " ";
			gotoxy (z-2, 26);
			cout << " ";
			gotoxy (z-2, 27);
			cout << " ";
			gotoxy (z-2, 28);
			cout << " ";
			gotoxy (z-2, 29);
			cout << " ";
			gotoxy (z-2, 30);
			cout << " ";
			gotoxy (z-2, 31);
			cout << " ";
			
			gotoxy (z-1, 10);
			cout << " ";
			gotoxy (z-1, 11);
			cout << " ";
			gotoxy (z-1, 12);
			cout << " ";
			gotoxy (z-1, 13);
			cout << " ";
			gotoxy (z-1, 14);
			cout << " ";
			gotoxy (z-1, 15);
			cout << " ";
			gotoxy (z-1, 16);
			cout << " ";
			gotoxy (z-1, 17);
			cout << " ";
			gotoxy (z-1, 18);
			cout << " ";
			gotoxy (z-1, 19);
			cout << " ";
			gotoxy (z-1, 20);
			cout << " ";
			gotoxy (z-1, 21);
			cout << " ";
			gotoxy (z-1, 22);
			cout << " ";
			gotoxy (z-1, 23);
			cout << " ";
			gotoxy (z-1, 24);
			cout << " ";
			gotoxy (z-1, 25);
			cout << " ";
			gotoxy (z-1, 26);
			cout << " ";
			gotoxy (z-1, 27);
			cout << " ";
			gotoxy (z-1, 28);
			cout << " ";
			gotoxy (z-1, 29);
			cout << " ";
			gotoxy (z-1, 30);
			cout << " ";
			gotoxy (z-1, 31);
			cout << " ";
			
			gotoxy (wheels-1, 29);
			cout << " ";
			gotoxy (wheels-1, 30);
			cout << " ";
			gotoxy (wheels-1, 31);
			cout << " ";
			
			gotoxy (wheels+1, 29);
			cout << " ";
			gotoxy (wheels+1, 30);
			cout << " ";
			gotoxy (wheels+1, 31);
			cout << " ";
			
			gotoxy (wheels-2, 31);
			cout << " ";
			
			gotoxy (wheels, 29);
			cout << " ";
			gotoxy (wheels, 30);
			cout << " ";
			gotoxy (wheels, 31);
			cout << " ";

			
			
			wheels -=3;
			z-=3;
			
	
		}
		again ++;
		
	}
		int i = 1;
		
		for (x = 12; x <= 28; x += 3)
		{
			Sleep (50);
			color (i+1);
			gotoxy (x, 10);
			cout << "101010101010101010101010101010101010101010101010101010101010101010101010";
			gotoxy (x, 11);
			cout << "0010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 12);
			cout << "1010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 13);
			cout << "010*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 14);
			cout << "110*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 15);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 16);
			cout << "110*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 17);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 18);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 19);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 20);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 21);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 22);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   0101  01";
			gotoxy (x, 23);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 24);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 25);
			cout << "01  1010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 26);
			cout << "110101010*********10101010101010101010101010101*********1010101010101010101";
			gotoxy (x, 27);
			cout << "01010101***********110101010101010101010101010***********010101010101010101";
			gotoxy (x, 28);
			cout << "11010101***********010101010101010101010101010***********010101010101010101";
			gotoxy (x, 29);
			cout << "        ***********                           ***********\n";
			gotoxy (x, 30);
			cout << "        ***********                           ***********";
			gotoxy (x, 31);
			cout << "         *********                             *********";
			gotoxy (x, 32);
			i++;
			
			color (i+1);
			gotoxy (27, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 35);
			
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 36);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (21, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 38);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 39);
				for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (27, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			
			gotoxy (98, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 35);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			gotoxy (94, 36);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (92, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (94, 38);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 39);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (98, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (x-3, 10);
			cout << " ";
			gotoxy (x-3, 11);
			cout << " ";
			gotoxy (x-3, 12);
			cout << " ";
			gotoxy (x-3, 13);
			cout << " ";
			gotoxy (x-3, 14);
			cout << " ";
			gotoxy (x-3, 15);
			cout << " ";
			gotoxy (x-3, 16);
			cout << " ";
			gotoxy (x-3, 17);
			cout << " ";
			gotoxy (x-3, 18);
			cout << " ";
			gotoxy (x-3, 19);
			cout << " ";
			gotoxy (x-3, 20);
			cout << " ";
			gotoxy (x-3, 21);
			cout << " ";
			gotoxy (x-3, 22);
			cout << " ";
			gotoxy (x-3, 23);
			cout << " ";
			gotoxy (x-3, 24);
			cout << " ";
			gotoxy (x-3, 25);
			cout << " ";
			gotoxy (x-3, 26);
			cout << " ";
			gotoxy (x-3, 27);
			cout << " ";
			gotoxy (x-3, 28);
			cout << " ";
			gotoxy (x-3, 29);
			cout << " ";
			gotoxy (x-3, 30);
			cout << " ";
			gotoxy (x-3, 31);
			cout << " ";
			
			gotoxy (x-2, 10);
			cout << " ";
			gotoxy (x-2, 11);
			cout << " ";
			gotoxy (x-2, 12);
			cout << " ";
			gotoxy (x-2, 13);
			cout << " ";
			gotoxy (x-2, 14);
			cout << " ";
			gotoxy (x-2, 15);
			cout << " ";
			gotoxy (x-2, 16);
			cout << " ";
			gotoxy (x-2, 17);
			cout << " ";
			gotoxy (x-2, 18);
			cout << " ";
			gotoxy (x-2, 19);
			cout << " ";
			gotoxy (x-2, 20);
			cout << " ";
			gotoxy (x-2, 21);
			cout << " ";
			gotoxy (x-2, 22);
			cout << " ";
			gotoxy (x-2, 23);
			cout << " ";
			gotoxy (x-2, 24);
			cout << " ";
			gotoxy (x-2, 25);
			cout << " ";
			gotoxy (x-2, 26);
			cout << " ";
			gotoxy (x-2, 27);
			cout << " ";
			gotoxy (x-2, 28);
			cout << " ";
			gotoxy (x-2, 29);
			cout << " ";
			gotoxy (x-2, 30);
			cout << " ";
			gotoxy (x-2, 31);
			cout << " ";
			
			gotoxy (x-1, 10);
			cout << " ";
			gotoxy (x-1, 11);
			cout << " ";
			gotoxy (x-1, 12);
			cout << " ";
			gotoxy (x-1, 13);
			cout << " ";
			gotoxy (x-1, 14);
			cout << " ";
			gotoxy (x-1, 15);
			cout << " ";
			gotoxy (x-1, 16);
			cout << " ";
			gotoxy (x-1, 17);
			cout << " ";
			gotoxy (x-1, 18);
			cout << " ";
			gotoxy (x-1, 19);
			cout << " ";
			gotoxy (x-1, 20);
			cout << " ";
			gotoxy (x-1, 21);
			cout << " ";
			gotoxy (x-1, 22);
			cout << " ";
			gotoxy (x-1, 23);
			cout << " ";
			gotoxy (x-1, 24);
			cout << " ";
			gotoxy (x-1, 25);
			cout << " ";
			gotoxy (x-1, 26);
			cout << " ";
			gotoxy (x-1, 27);
			cout << " ";
			gotoxy (x-1, 28);
			cout << " ";
			gotoxy (x-1, 29);
			cout << " ";
			gotoxy (x-1, 30);
			cout << " ";
			gotoxy (x-1, 31);
			cout << " ";
		}
	
	


		

		
			
			char check = 'g';
			gotoxy (32, 8);
			color (11);
			cout << ">>> [P R E S S    S P A C E    T O    C O N T I N U E] <<<";
			gotoxy (0,0);
			while (check != space)
			{
				check = getch ();
				
			}
	mainframe ();
	
	
}

// Duplicate of loading
void copy_loading ()
{
		// THE LOADING ANIMATION
	// we use clear screen and some for loop value gotoxxy to simulate the moving
	int x;
	int again = 1;
	int struc = 222;
	
	system ("cls");
	color (14);
	merc_name_default ();
	color (4);
	border_noNotice ();
	color (15);
	loading1 ();
	color (6);

	
		while (again != 3)
		{
		int i = 1;
	
		for (x = 12; x <= 40; x += 3)
		{
			Sleep (50);
			color (i);
			gotoxy (x, 10);
			cout << "101010101010101010101010101010101010101010101010101010101010101010101010";
			gotoxy (x, 11);
			cout << "0010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 12);
			cout << "1010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 13);
			cout << "010*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 14);
			cout << "110*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 15);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 16);
			cout << "110*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 17);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 18);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 19);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 20);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 21);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 22);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   0101  01";
			gotoxy (x, 23);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 24);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 25);
			cout << "01  1010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 26);
			cout << "110101010*********10101010101010101010101010101*********1010101010101010101";
			gotoxy (x, 27);
			cout << "01010101***********110101010101010101010101010***********010101010101010101";
			gotoxy (x, 28);
			cout << "11010101***********010101010101010101010101010***********010101010101010101";
			gotoxy (x, 29);
			cout << "        ***********                           ***********\n";
			gotoxy (x, 30);
			cout << "        ***********                           ***********";
			gotoxy (x, 31);
			cout << "         *********                             *********";
			gotoxy (7, 32);
			i++;
			
			// loading stars
			color (i+1);
			gotoxy (27, 34);
			gotoxy (27, 34);
		
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 35);
			
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 36);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (21, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 38);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 39);
				for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (27, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			
			gotoxy (98, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 35);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			gotoxy (94, 36);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (92, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (94, 38);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 39);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (98, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			// border
			//null trace
			gotoxy (x-3, 10);
			cout << " ";
			gotoxy (x-3, 11);
			cout << " ";
			gotoxy (x-3, 12);
			cout << " ";
			gotoxy (x-3, 13);
			cout << " ";
			gotoxy (x-3, 14);
			cout << " ";
			gotoxy (x-3, 15);
			cout << " ";
			gotoxy (x-3, 16);
			cout << " ";
			gotoxy (x-3, 17);
			cout << " ";
			gotoxy (x-3, 18);
			cout << " ";
			gotoxy (x-3, 19);
			cout << " ";
			gotoxy (x-3, 20);
			cout << " ";
			gotoxy (x-3, 21);
			cout << " ";
			gotoxy (x-3, 22);
			cout << " ";
			gotoxy (x-3, 23);
			cout << " ";
			gotoxy (x-3, 24);
			cout << " ";
			gotoxy (x-3, 25);
			cout << " ";
			gotoxy (x-3, 26);
			cout << " ";
			gotoxy (x-3, 27);
			cout << " ";
			gotoxy (x-3, 28);
			cout << " ";
			gotoxy (x-3, 29);
			cout << " ";
			gotoxy (x-3, 30);
			cout << " ";
			gotoxy (x-3, 31);
			cout << " ";
			
			gotoxy (x-2, 10);
			cout << " ";
			gotoxy (x-2, 11);
			cout << " ";
			gotoxy (x-2, 12);
			cout << " ";
			gotoxy (x-2, 13);
			cout << " ";
			gotoxy (x-2, 14);
			cout << " ";
			gotoxy (x-2, 15);
			cout << " ";
			gotoxy (x-2, 16);
			cout << " ";
			gotoxy (x-2, 17);
			cout << " ";
			gotoxy (x-2, 18);
			cout << " ";
			gotoxy (x-2, 19);
			cout << " ";
			gotoxy (x-2, 20);
			cout << " ";
			gotoxy (x-2, 21);
			cout << " ";
			gotoxy (x-2, 22);
			cout << " ";
			gotoxy (x-2, 23);
			cout << " ";
			gotoxy (x-2, 24);
			cout << " ";
			gotoxy (x-2, 25);
			cout << " ";
			gotoxy (x-2, 26);
			cout << " ";
			gotoxy (x-2, 27);
			cout << " ";
			gotoxy (x-2, 28);
			cout << " ";
			gotoxy (x-2, 29);
			cout << " ";
			gotoxy (x-2, 30);
			cout << " ";
			gotoxy (x-2, 31);
			cout << " ";
			
			gotoxy (x-1, 10);
			cout << " ";
			gotoxy (x-1, 11);
			cout << " ";
			gotoxy (x-1, 12);
			cout << " ";
			gotoxy (x-1, 13);
			cout << " ";
			gotoxy (x-1, 14);
			cout << " ";
			gotoxy (x-1, 15);
			cout << " ";
			gotoxy (x-1, 16);
			cout << " ";
			gotoxy (x-1, 17);
			cout << " ";
			gotoxy (x-1, 18);
			cout << " ";
			gotoxy (x-1, 19);
			cout << " ";
			gotoxy (x-1, 20);
			cout << " ";
			gotoxy (x-1, 21);
			cout << " ";
			gotoxy (x-1, 22);
			cout << " ";
			gotoxy (x-1, 23);
			cout << " ";
			gotoxy (x-1, 24);
			cout << " ";
			gotoxy (x-1, 25);
			cout << " ";
			gotoxy (x-1, 26);
			cout << " ";
			gotoxy (x-1, 27);
			cout << " ";
			gotoxy (x-1, 28);
			cout << " ";
			gotoxy (x-1, 29);
			cout << " ";
			gotoxy (x-1, 30);
			cout << " ";
			gotoxy (x-1, 31);
			cout << " ";
			
			
		}
		 i = 1;
		 int z = 118;
		 int wheels = 100;
		for (x = 40; x >= 12; x -= 3)
		{
		
			Sleep (50);
			color (i);
			gotoxy (x, 10);
			cout << "101010101010101010101010101010101010101010101010101010101010101010101010";
			gotoxy (x, 11);
			cout << "0010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 12);
			cout << "1010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 13);
			cout << "010*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 14);
			cout << "110*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 15);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 16);
			cout << "110*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 17);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 18);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 19);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 20);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 21);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 22);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   0101  01";
			gotoxy (x, 23);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 24);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 25);
			cout << "01  1010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 26);
			cout << "110101010*********10101010101010101010101010101*********1010101010101010101";
			gotoxy (x, 27);
			cout << "01010101***********110101010101010101010101010***********010101010101010101";
			gotoxy (x, 28);
			cout << "11010101***********010101010101010101010101010***********010101010101010101";
			gotoxy (x, 29);
			cout << "        ***********                           ***********\n";
			gotoxy (x, 30);
			cout << "        ***********                           ***********";
			gotoxy (x, 31);
			cout << "         *********                             *********";
			gotoxy (7, 32);
			i++;
			
			color (i+1);
			gotoxy (27, 34);
	
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 35);
			
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 36);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (21, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 38);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 39);
				for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (27, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			
			gotoxy (98, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 35);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			gotoxy (94, 36);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (92, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (94, 38);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 39);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (98, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (z-6, 10);
			cout << " ";
			
			gotoxy (z-5, 10);
			cout << " ";
			gotoxy (z-5, 11);
			cout << " ";
			gotoxy (z-5, 12);
			cout << " ";
			gotoxy (z-5, 13);
			cout << " ";
			gotoxy (z-5, 14);
			cout << " ";
			
			gotoxy (z-4, 10);
			cout << " ";
			gotoxy (z-4, 11);
			cout << " ";
			gotoxy (z-4, 12);
			cout << " ";
			gotoxy (z-4, 13);
			cout << " ";
			gotoxy (z-4, 14);
			cout << " ";
			gotoxy (z-4, 15);
			cout << " ";
			gotoxy (z-4, 16);
			cout << " ";
			gotoxy (z-4, 17);
			cout << " ";
			
			gotoxy (z-3, 10);
			cout << " ";
			gotoxy (z-3, 11);
			cout << " ";
			gotoxy (z-3, 12);
			cout << " ";
			gotoxy (z-3, 13);
			cout << " ";
			gotoxy (z-3, 14);
			cout << " ";
			gotoxy (z-3, 15);
			cout << " ";
			gotoxy (z-3, 16);
			cout << " ";
			gotoxy (z-3, 17);
			cout << " ";
			gotoxy (z-3, 18);
			cout << " ";
			gotoxy (z-3, 19);
			cout << " ";
			gotoxy (z-3, 20);
			cout << " ";
			gotoxy (z-3, 21);
			cout << " ";
			gotoxy (z-3, 22);
			cout << " ";
			gotoxy (z-3, 23);
			cout << " ";
			gotoxy (z-3, 24);
			cout << " ";
			gotoxy (z-3, 25);
			cout << " ";
			gotoxy (z-3, 26);
			cout << " ";
			gotoxy (z-3, 27);
			cout << " ";
			gotoxy (z-3, 28);
			cout << " ";
			gotoxy (z-3, 29);
			cout << " ";
			gotoxy (z-3, 30);
			cout << " ";
			gotoxy (z-3, 31);
			cout << " ";
			
			gotoxy (z-2, 10);
			cout << " ";
			gotoxy (z-2, 11);
			cout << " ";
			gotoxy (z-2, 12);
			cout << " ";
			gotoxy (z-2, 13);
			cout << " ";
			gotoxy (z-2, 14);
			cout << " ";
			gotoxy (z-2, 15);
			cout << " ";
			gotoxy (z-2, 16);
			cout << " ";
			gotoxy (z-2, 17);
			cout << " ";
			gotoxy (z-2, 18);
			cout << " ";
			gotoxy (z-2, 19);
			cout << " ";
			gotoxy (z-2, 20);
			cout << " ";
			gotoxy (z-2, 21);
			cout << " ";
			gotoxy (z-2, 22);
			cout << " ";
			gotoxy (z-2, 23);
			cout << " ";
			gotoxy (z-2, 24);
			cout << " ";
			gotoxy (z-2, 25);
			cout << " ";
			gotoxy (z-2, 26);
			cout << " ";
			gotoxy (z-2, 27);
			cout << " ";
			gotoxy (z-2, 28);
			cout << " ";
			gotoxy (z-2, 29);
			cout << " ";
			gotoxy (z-2, 30);
			cout << " ";
			gotoxy (z-2, 31);
			cout << " ";
			
			gotoxy (z-1, 10);
			cout << " ";
			gotoxy (z-1, 11);
			cout << " ";
			gotoxy (z-1, 12);
			cout << " ";
			gotoxy (z-1, 13);
			cout << " ";
			gotoxy (z-1, 14);
			cout << " ";
			gotoxy (z-1, 15);
			cout << " ";
			gotoxy (z-1, 16);
			cout << " ";
			gotoxy (z-1, 17);
			cout << " ";
			gotoxy (z-1, 18);
			cout << " ";
			gotoxy (z-1, 19);
			cout << " ";
			gotoxy (z-1, 20);
			cout << " ";
			gotoxy (z-1, 21);
			cout << " ";
			gotoxy (z-1, 22);
			cout << " ";
			gotoxy (z-1, 23);
			cout << " ";
			gotoxy (z-1, 24);
			cout << " ";
			gotoxy (z-1, 25);
			cout << " ";
			gotoxy (z-1, 26);
			cout << " ";
			gotoxy (z-1, 27);
			cout << " ";
			gotoxy (z-1, 28);
			cout << " ";
			gotoxy (z-1, 29);
			cout << " ";
			gotoxy (z-1, 30);
			cout << " ";
			gotoxy (z-1, 31);
			cout << " ";
			
			gotoxy (wheels-1, 29);
			cout << " ";
			gotoxy (wheels-1, 30);
			cout << " ";
			gotoxy (wheels-1, 31);
			cout << " ";
			
			gotoxy (wheels+1, 29);
			cout << " ";
			gotoxy (wheels+1, 30);
			cout << " ";
			gotoxy (wheels+1, 31);
			cout << " ";
			
			gotoxy (wheels-2, 31);
			cout << " ";
			
			gotoxy (wheels, 29);
			cout << " ";
			gotoxy (wheels, 30);
			cout << " ";
			gotoxy (wheels, 31);
			cout << " ";

			
			
			wheels -=3;
			z-=3;
			
	
		}
		again ++;
		
	}
		int i = 1;
		
		for (x = 12; x <= 28; x += 3)
		{
			Sleep (50);
			color (i+1);
			gotoxy (x, 10);
			cout << "101010101010101010101010101010101010101010101010101010101010101010101010";
			gotoxy (x, 11);
			cout << "0010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 12);
			cout << "1010101010101010101010101010101010101010101010101010101010101010101010101";
			gotoxy (x, 13);
			cout << "010*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 14);
			cout << "110*    01     01     01    01     01     01     0     0101   01   010101";
			gotoxy (x, 15);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 16);
			cout << "110*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 17);
			cout << "010*    01     01     01    01     01     01     0     0101   01   0101010";
			gotoxy (x, 18);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 19);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 20);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 21);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 22);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   0101  01";
			gotoxy (x, 23);
			cout << "00101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 24);
			cout << "10101010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 25);
			cout << "01  1010101010101010101010101010101010101010101010101010101   01   01010101";
			gotoxy (x, 26);
			cout << "110101010*********10101010101010101010101010101*********1010101010101010101";
			gotoxy (x, 27);
			cout << "01010101***********110101010101010101010101010***********010101010101010101";
			gotoxy (x, 28);
			cout << "11010101***********010101010101010101010101010***********010101010101010101";
			gotoxy (x, 29);
			cout << "        ***********                           ***********\n";
			gotoxy (x, 30);
			cout << "        ***********                           ***********";
			gotoxy (x, 31);
			cout << "         *********                             *********";
			gotoxy (x, 32);
			i++;
			
			color (i+1);
			gotoxy (27, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 35);
			
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 36);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (21, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (23, 38);
				for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (25, 39);
				for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (27, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			
			gotoxy (98, 34);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 35);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			gotoxy (94, 36);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (92, 37);
			for (int i = 1; i <= 14; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (94, 38);
			for (int i = 1; i <= 10; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (96, 39);
			for (int i = 1; i <= 6; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (98, 40);
			for (int i = 1; i <= 2; i++)
			{
				cout << char (struc);
			}
			
			gotoxy (x-3, 10);
			cout << " ";
			gotoxy (x-3, 11);
			cout << " ";
			gotoxy (x-3, 12);
			cout << " ";
			gotoxy (x-3, 13);
			cout << " ";
			gotoxy (x-3, 14);
			cout << " ";
			gotoxy (x-3, 15);
			cout << " ";
			gotoxy (x-3, 16);
			cout << " ";
			gotoxy (x-3, 17);
			cout << " ";
			gotoxy (x-3, 18);
			cout << " ";
			gotoxy (x-3, 19);
			cout << " ";
			gotoxy (x-3, 20);
			cout << " ";
			gotoxy (x-3, 21);
			cout << " ";
			gotoxy (x-3, 22);
			cout << " ";
			gotoxy (x-3, 23);
			cout << " ";
			gotoxy (x-3, 24);
			cout << " ";
			gotoxy (x-3, 25);
			cout << " ";
			gotoxy (x-3, 26);
			cout << " ";
			gotoxy (x-3, 27);
			cout << " ";
			gotoxy (x-3, 28);
			cout << " ";
			gotoxy (x-3, 29);
			cout << " ";
			gotoxy (x-3, 30);
			cout << " ";
			gotoxy (x-3, 31);
			cout << " ";
			
			gotoxy (x-2, 10);
			cout << " ";
			gotoxy (x-2, 11);
			cout << " ";
			gotoxy (x-2, 12);
			cout << " ";
			gotoxy (x-2, 13);
			cout << " ";
			gotoxy (x-2, 14);
			cout << " ";
			gotoxy (x-2, 15);
			cout << " ";
			gotoxy (x-2, 16);
			cout << " ";
			gotoxy (x-2, 17);
			cout << " ";
			gotoxy (x-2, 18);
			cout << " ";
			gotoxy (x-2, 19);
			cout << " ";
			gotoxy (x-2, 20);
			cout << " ";
			gotoxy (x-2, 21);
			cout << " ";
			gotoxy (x-2, 22);
			cout << " ";
			gotoxy (x-2, 23);
			cout << " ";
			gotoxy (x-2, 24);
			cout << " ";
			gotoxy (x-2, 25);
			cout << " ";
			gotoxy (x-2, 26);
			cout << " ";
			gotoxy (x-2, 27);
			cout << " ";
			gotoxy (x-2, 28);
			cout << " ";
			gotoxy (x-2, 29);
			cout << " ";
			gotoxy (x-2, 30);
			cout << " ";
			gotoxy (x-2, 31);
			cout << " ";
			
			gotoxy (x-1, 10);
			cout << " ";
			gotoxy (x-1, 11);
			cout << " ";
			gotoxy (x-1, 12);
			cout << " ";
			gotoxy (x-1, 13);
			cout << " ";
			gotoxy (x-1, 14);
			cout << " ";
			gotoxy (x-1, 15);
			cout << " ";
			gotoxy (x-1, 16);
			cout << " ";
			gotoxy (x-1, 17);
			cout << " ";
			gotoxy (x-1, 18);
			cout << " ";
			gotoxy (x-1, 19);
			cout << " ";
			gotoxy (x-1, 20);
			cout << " ";
			gotoxy (x-1, 21);
			cout << " ";
			gotoxy (x-1, 22);
			cout << " ";
			gotoxy (x-1, 23);
			cout << " ";
			gotoxy (x-1, 24);
			cout << " ";
			gotoxy (x-1, 25);
			cout << " ";
			gotoxy (x-1, 26);
			cout << " ";
			gotoxy (x-1, 27);
			cout << " ";
			gotoxy (x-1, 28);
			cout << " ";
			gotoxy (x-1, 29);
			cout << " ";
			gotoxy (x-1, 30);
			cout << " ";
			gotoxy (x-1, 31);
			cout << " ";
		}
	
	
	

		
	
}

	
// UI text of MERC BUS SYSTEM	
void merc_name_default ()
{
		int x = 219;

		gotoxy (12, 2);
		cout << char (x) << "    " << char (x)/*end of M */ << "  " << char (x) <<  char (x) << char (x) << char (x)/* END OF E */ << "  " <<  char (x) <<  char (x) << char (x) << char (x) /*END OF R*/ << "    " << char (x) <<  char (x) << char (x) << char (x) /* END OF C */ << "   \t" <<  char (x) <<  char (x) << char (x) << char (x) /* end of b*/ << "   " << char (x) << char (x) << "  " << char (x) /*end of U*/ << "   " <<   char (x) <<  char (x) << char (x) << char (x) /* end of bus*/ << "  \t " << char (x) <<  char (x) << char (x) << char (x)/* end of s*/ << "  " << char (x) << char (x) << "   " << char (x) /* end of y*/ << "   " <<  char (x) <<  char (x) << char (x) << char (x) /* end of s*/ << "  " << char (x) <<  char (x) << char (x) << char (x) << char (x) << char (x) /*end of t*/ << "  " << char (x) <<  char (x) << char (x) << char (x) /* end of e */ << "  " << char (x) << "    " << char (x)/*end of system*/;
		gotoxy (12, 3); 
		cout << char (x) << char (x) << "  " << char (x) << char (x) /* end of M*/ << "  " << char (x) << char (x) << "    " /*end of e */ << char (x) << char (x) << "  " << char (x) /* end of r*/ << "  " << char (x) << char (x) << char (x)  <<" " << char (x) /* end of merc */ << "  \t" << char (x) << char (x) << "  " << char (x) /* end of b */ << "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "  " << char (x) << char (x) /* end of bus*/ << "    \t"<< char (x) << char (x) /* end of s*/ << "     " << char (x) << char (x) << "   " << char (x) /*end of y*/ << "  " << char (x) << char (x) /* end of s*/ << "       " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/ << "    "<< char (x) << char (x) << "  " << char (x) << char (x) /*end of system */;
		gotoxy (12, 4);
		cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of M*/ << "  " << char (x) << char (x) << "    " /*end of e */  << char (x) << char (x) << "  " << char (x) /* end of r*/ << "  " << char (x) << char (x)   /* end of merc */ << "     \t" << char (x) << char (x) << "  " << char (x) /*end of b*/ << "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "  " << char (x) << char (x) << char (x) /* end of bus*/ << "  \t"  << char (x) << char (x) << char (x) /* end of s*/ << "     " << char (x)  << "  " << char (x) /*end of y*/ << "   " << char (x) << char (x) << char (x) /* end of s*/ << "      " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/ << "    "<< char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of system */;
		gotoxy (12, 5);
		cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of M*/ << "  " << char (x) <<  char (x) << char (x) << char (x)/* END OF E */ << "  " << char (x) <<  char (x) << char (x) << char (x)/* END OF r */<< "   " << char (x)<< char (x) /* end of merc*/ << "     \t" << char (x) << char (x) << char (x) << char (x) /*end of b*/ << "   " << char (x) << char (x) << "  " << char (x) /*end of u*/ << "   " << char (x) << char (x) << char (x) /* end of bus*/<< "  \t"  << " " << char (x) << char (x) << char (x) /* end of s*/<< "     " << char (x) << char (x) /*end of y*/ << "     " << char (x) << char (x) << char (x) /* end of s*/ << "     " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) << char (x) << char (x) /* end of e*/<< "  "<< char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of system */;
		gotoxy (12, 6);
		cout << char (x) << " " << char (x) << " " << char (x) << char (x) /* end of m*/ <<  "  " << char (x) << char (x)  /*end of e*/ << "    " << char (x) << char (x) << " " << char (x)/* end of r*/ << "   " << char (x) << char (x) /*end of merc */ << "     \t" << char (x) << char (x) << "  " << char (x) /*end of b*/<< "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "    " << char (x) << char (x) << char (x) /* end of bus*/ << "  \t"  << "  " << char (x) << char (x) << char (x) /* end of s*/ << "    " << char (x) << char (x) /*end of y*/ << "      " << char (x) << char (x) << char (x) /* end of s*/ << "    " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/<< "    "<< char (x) << " " << char (x) << " " << char (x) << char (x) /*end of system */;
		gotoxy (12, 7);
		cout << char (x) << " " << char (x) << " " << char (x) << char (x) /* end of m*/ <<  "  " << char (x) << char (x)  /*end of e*/ << "    " << char (x) << char (x) << "  " << char (x)/* end of r*/ << "  " <<  char (x) << char (x) << char (x) /* END OF MERC */<< "     \t" << char (x) << char (x) << "  " << char (x) /*end of b*/<< "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "     " << char (x) << char (x)  /* end of bus*/<< "  \t"  << "   " << char (x) << char (x)  /* end of s*/ << "    " << char (x) << char (x) /*end of y*/ << "       "  << char (x) << char (x) /* end of s*/ << "    " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/<< "    "<< char (x) << " " << char (x) << " " << char (x) << char (x) /*end of system */;
		gotoxy (12, 8);
		cout << char (x) << "   " << char (x) << char (x) /* end of m*/<<  "  " << char (x) << char (x) << char (x) << char (x)  /*end of e*/ << "  " << char (x) << char (x) << "   " << char (x)/* end of r*/<< "  " <<  char (x) << char (x) << char (x) << char (x) /* END OF MERC */<< "     \t" << char (x) << char (x) << char (x) << char (x) /*end of b*/ << "    " << char (x) << char (x) << char (x) /*end of U*/<< "   " << char (x) << char (x) << char (x) << char (x) /* end of bus*/ << "  \t"  << char (x) << char (x) << char (x) << char (x) /* end of s*/ << "     " << char (x) << char (x) /*end of y*/ << "    " << char (x) << char (x) << char (x) << char (x)/* end of s*/ << "     " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) << char (x) << char (x) /* end of e*/<< "  "<< char (x) << "   " << char (x) << char (x) /*end of system */;
	}


// MERC BUS EXIT ANIMATION
void exit_animation ()
{
		Sleep (20);
		system ("cls");
		border ();
		int y= 1;
		int x = 219;
		for (int i = 1; i <= 27; i+=7)
		{
		Sleep (100);
		color (y);
		
		
		gotoxy (12, 1+i);
		cout << char (x) << "    " << char (x)/*end of M */ << "  " << char (x) <<  char (x) << char (x) << char (x)/* END OF E */ << "  " <<  char (x) <<  char (x) << char (x) << char (x) /*END OF R*/ << "    " << char (x) <<  char (x) << char (x) << char (x) /* END OF C */ << "   \t" <<  char (x) <<  char (x) << char (x) << char (x) /* end of b*/ << "   " << char (x) << char (x) << "  " << char (x) /*end of U*/ << "   " <<   char (x) <<  char (x) << char (x) << char (x) /* end of bus*/ << "  \t " << char (x) <<  char (x) << char (x) << char (x)/* end of s*/ << "  " << char (x) << char (x) << "   " << char (x) /* end of y*/ << "   " <<  char (x) <<  char (x) << char (x) << char (x) /* end of s*/ << "  " << char (x) <<  char (x) << char (x) << char (x) << char (x) << char (x) /*end of t*/ << "  " << char (x) <<  char (x) << char (x) << char (x) /* end of e */ << "  " << char (x) << "    " << char (x)/*end of system*/;
		gotoxy (12, 2+i); 
		cout << char (x) << char (x) << "  " << char (x) << char (x) /* end of M*/ << "  " << char (x) << char (x) << "    " /*end of e */ << char (x) << char (x) << "  " << char (x) /* end of r*/ << "  " << char (x) << char (x) << char (x)  <<" " << char (x) /* end of merc */ << "  \t" << char (x) << char (x) << "  " << char (x) /* end of b */ << "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "  " << char (x) << char (x) /* end of bus*/ << "    \t"<< char (x) << char (x) /* end of s*/ << "     " << char (x) << char (x) << "   " << char (x) /*end of y*/ << "  " << char (x) << char (x) /* end of s*/ << "       " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/ << "    "<< char (x) << char (x) << "  " << char (x) << char (x) /*end of system */;
		gotoxy (12, 3+i);
		cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of M*/ << "  " << char (x) << char (x) << "    " /*end of e */  << char (x) << char (x) << "  " << char (x) /* end of r*/ << "  " << char (x) << char (x)   /* end of merc */ << "     \t" << char (x) << char (x) << "  " << char (x) /*end of b*/ << "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "  " << char (x) << char (x) << char (x) /* end of bus*/ << "  \t"  << char (x) << char (x) << char (x) /* end of s*/ << "     " << char (x)  << "  " << char (x) /*end of y*/ << "   " << char (x) << char (x) << char (x) /* end of s*/ << "      " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/ << "    "<< char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of system */;
		gotoxy (12, 4+i);
		cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of M*/ << "  " << char (x) <<  char (x) << char (x) << char (x)/* END OF E */ << "  " << char (x) <<  char (x) << char (x) << char (x)/* END OF r */<< "   " << char (x)<< char (x) /* end of merc*/ << "     \t" << char (x) << char (x) << char (x) << char (x) /*end of b*/ << "   " << char (x) << char (x) << "  " << char (x) /*end of u*/ << "   " << char (x) << char (x) << char (x) /* end of bus*/<< "  \t"  << " " << char (x) << char (x) << char (x) /* end of s*/<< "     " << char (x) << char (x) /*end of y*/ << "     " << char (x) << char (x) << char (x) /* end of s*/ << "     " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) << char (x) << char (x) /* end of e*/<< "  "<< char (x) << char (x) << char (x) << char (x) << char (x) << char (x) /*end of system */;
		gotoxy (12, 5+i);
		cout << char (x) << " " << char (x) << " " << char (x) << char (x) /* end of m*/ <<  "  " << char (x) << char (x)  /*end of e*/ << "    " << char (x) << char (x) << " " << char (x)/* end of r*/ << "   " << char (x) << char (x) /*end of merc */ << "     \t" << char (x) << char (x) << "  " << char (x) /*end of b*/<< "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "    " << char (x) << char (x) << char (x) /* end of bus*/ << "  \t"  << "  " << char (x) << char (x) << char (x) /* end of s*/ << "    " << char (x) << char (x) /*end of y*/ << "      " << char (x) << char (x) << char (x) /* end of s*/ << "    " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/<< "    "<< char (x) << " " << char (x) << " " << char (x) << char (x) /*end of system */;
		gotoxy (12, 6+i);
		cout << char (x) << " " << char (x) << " " << char (x) << char (x) /* end of m*/ <<  "  " << char (x) << char (x)  /*end of e*/ << "    " << char (x) << char (x) << "  " << char (x)/* end of r*/ << "  " <<  char (x) << char (x) << char (x) /* END OF MERC */<< "     \t" << char (x) << char (x) << "  " << char (x) /*end of b*/<< "  " << char (x) << char (x) << "  " << char (x) /*end of u*/<< "     " << char (x) << char (x)  /* end of bus*/<< "  \t"  << "   " << char (x) << char (x)  /* end of s*/ << "    " << char (x) << char (x) /*end of y*/ << "       "  << char (x) << char (x) /* end of s*/ << "    " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) /* end of e*/<< "    "<< char (x) << " " << char (x) << " " << char (x) << char (x) /*end of system */;
		gotoxy (12, 7+i);
		cout << char (x) << "   " << char (x) << char (x) /* end of m*/<<  "  " << char (x) << char (x) << char (x) << char (x)  /*end of e*/ << "  " << char (x) << char (x) << "   " << char (x)/* end of r*/<< "  " <<  char (x) << char (x) << char (x) << char (x) /* END OF MERC */<< "     \t" << char (x) << char (x) << char (x) << char (x) /*end of b*/ << "    " << char (x) << char (x) << char (x) /*end of U*/<< "   " << char (x) << char (x) << char (x) << char (x) /* end of bus*/ << "  \t"  << char (x) << char (x) << char (x) << char (x) /* end of s*/ << "     " << char (x) << char (x) /*end of y*/ << "    " << char (x) << char (x) << char (x) << char (x)/* end of s*/ << "     " << char (x) << char (x) /* end of t*/ << "    " << char (x) << char (x) << char (x) << char (x) /* end of e*/<< "  "<< char (x) << "   " << char (x) << char (x) /*end of system */;
	

	
		y++;
		}
		exit ();
		
	}
	

// TEXT OF LOADING AND THE STARS
void loading1()
{
		color (1);
		int x = 220;

		
		gotoxy (42, 34);
		cout << char (x) << char (x) << "      " /*end of l*/  << char (x) << char (x) /*end of o*/ << "    " << char (x) << char (x) /*end of a*/ << "   " << char (x) << char (x) << char (x) << char (x) /*end of D*/ << "  " << char (x) << char (x) << char (x) << char (x) /* end of I*/ << " " << char (x) << "   " << char (x) /*end of n*/ << "  " << char (x) << char (x) << char (x) << char (x) /* end of loading */;
		gotoxy (42, 35);
		cout << char (x) << char (x) << "    " /*end of l*/  << char (x) << char (x) << "  " << char (x)/*end of o*/ << "   " << char (x) << char (x) /*end of a*/ << "   " << char (x) << char (x) << " "<< char (x) << char (x) /*end of D*/ << "  " << char (x) << char (x)/*end of i*/ << "  " << char (x) << char (x) << "  " << char (x) /*end of n*/ << " " << char (x) << char (x) << char (x) /* end of loading */;
		gotoxy (42, 36);
		cout << char (x) << char (x) << "    " /*end of l*/  << char (x) << char (x) << "  " << char (x)/*end of o*/ << "  " << char (x) << " " << char (x) << char (x) /*end of a*/<< "  " << char (x) << char (x) << "  "<< char (x)  /*end of D*/ << "  " << char (x) << char (x)/*end of i*/<< "  " << char (x) << char (x) << char (x) << " " << char (x) /*end of n*/ << " " << char (x) << char (x)  /* end of loading */;
		gotoxy (42, 37);
		cout << char (x) << char (x) << "    " /*end of l*/  << char (x) << char (x) << "  " << char (x)/*end of o*/<< "  " << char (x) << " " << char (x) << char (x) /*end of a*/<< "  " << char (x) << char (x) << "  "<< char (x)  /*end of D*/ << "  " << char (x) << char (x)/*end of i*/<< "  " << char (x) << char (x) << char (x) << char (x) << char (x) /*end of n*/<< " " << char (x) << char (x) << " " << char (x) << char (x) /* end of loading */;
		gotoxy (42, 38);
		cout << char (x) << char (x) << "    " /*end of l*/  << char (x) << char (x) << "  " << char (x)/*end of o*/<< " " << char (x) << char (x) << char (x)<< char (x) << char (x) << char (x) /*end of a*/<< " " << char (x) << char (x) << "  "<< char (x)  /*end of D*/ << "  " << char (x) << char (x)/*end of i*/ << "  " << char (x) << " " <<  char (x) << char (x) << char (x) /*end of n*/<< " " << char (x) << char (x) << "  " << char (x) /* end of loading */;
		gotoxy (42, 39);
		cout << char (x) << char (x) << "    " /*end of l*/  << char (x) << char (x) << "  " << char (x)/*end of o*/<< " " << char (x) << "   " << char (x) << char (x) /*end of a*/<< " " << char (x) << char (x) << " "<< char (x) << char (x) /*end of D*/ << "  " << char (x) << char (x)/*end of i*/<< "  " << char (x) << "  " <<  char (x)  << char (x) /*end of n*/<< " " << char (x) << char (x)<< char (x) << " " << char (x) /* end of loading */;
		gotoxy (42, 40); 
		cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) <<  "  " /*end of l*/ << char (x) << char (x) /*end of o*/ << "  " << char (x) << "   " << char (x) << char (x) /*end of a*/ << " " << char (x) << char (x) << char (x) << char (x) /*end of D*/<< "  " << char (x) << char (x) << char (x) << char (x) /* end of I*/<< " " << char (x) << "   " << char (x) /*end of n*/<< "  " << char (x) << char (x) << char (x) << char (x) /* end of loading */;
		
		color (9);
		gotoxy (13, 33);
		for (int i = 1; i <= 100; i++)
		{
			cout << char (219); // top border
		}
		
		for (int i = 34; i <= 40; i++)
		{
			gotoxy (12, i);
			cout << char (219); // left border
		}
		
		for (int i = 34; i <= 40; i++)
		{
			gotoxy (113, i);
			cout << char (219); //  right border
		}
		
		gotoxy (13, 41);
			for (int i = 1; i <= 100; i++)
		{
			cout << char (219); // bot border
		}
}


// UI PART OF THE LOGIN
void pass_user_ui ()
{
	color(10);
	
	
	//In charge of the green border for the USERNAME & PASSWORD at the front interface
	for (int boxside1 = 14; boxside1 <= 30; boxside1 ++)
	{
		gotoxy (83, boxside1-2);
    	cout << char (221);

	}
	
	for (int boxside2 = 14; boxside2 <= 30; boxside2 ++)
	{
	    gotoxy (116, boxside2-2);
	    cout << char (222);

	}
	
	for (int boxbottom = 0; boxbottom <= 33; boxbottom ++)
	{
	    gotoxy (83+boxbottom, 29);
	    cout << char (223);

	}
	
	for (int boxtop = 0; boxtop <= 33; boxtop ++)
	{
		gotoxy (83+boxtop, 11);
		cout << char (220);
	}
	

	
}


// THIS IS THE MAIN PROGRAM THAT CHOOSES THE USER: TOUR, HISTORY,  MINIGAMES
void mainframe ()
{
	int loop = 1;
	
	for (loop = 1;;)
	{
	loop_back:
	system ("cls");
	color (6);
	merc_name_default ();

	border ();
	char s;
	int x = 219;
	
	color (15);
	// arrow right
		gotoxy (110, 15);
		cout << char(x);
		gotoxy (110, 16);
		cout << char(x) << char(x);
		gotoxy (110, 17);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (110, 18);
		cout << char(x) << char(x) << char(x) << char(x) << char(x) << char(x);
		gotoxy (110, 19);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (110, 20);
		cout << char(x) << char(x);
		gotoxy (110, 21);
		cout << char(x);
	
	//arrow left
		gotoxy (13, 15);
		cout << char(x);
		gotoxy (12, 16);
		cout << char(x) << char(x);
		gotoxy (10, 17);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (8, 18);
		cout << char(x) << char(x) << char(x) << char(x) << char(x) << char(x);
		gotoxy (10, 19);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (12, 20);
		cout << char(x) << char(x);
		gotoxy (13, 21);
		cout << char(x);
		gotoxy (0, 43);
	
		if (loop <= 0)
		{
			loop = 3;
		}
		
		if (loop >= 4)
		{
			loop = 1;
		}
		
		if (loop == 1)
		{
			book_pic ();
		}
		if (loop == 2)
		{
			showbook_pic ();
		}
		if (loop == 3)
		{
			minigame_pic ();
		}
		
		gotoxy (0,0);
		s = 'x';
		while (s != left_arrow && s != right_arrow && s != '\r' && s != back_esc && s != '+' && s != tab)
		{
			s = getch ();
		}
		
		
		
		
		if (s == left_arrow)
		{
		color (10);
		gotoxy (13, 15);
		cout << char(x);
		gotoxy (12, 16);
		cout << char(x) << char(x);
		gotoxy (10, 17);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (8, 18);
		cout << char(x) << char(x) << char(x) << char(x) << char(x) << char(x);
		gotoxy (10, 19);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (12, 20);
		cout << char(x) << char(x);
		gotoxy (13, 21);
		cout << char(x);
		loop --;
		Sleep (100);
		goto loop_back;
		
		}
		
		if (s == right_arrow)
		{
		color (10);
		gotoxy (110, 15);
		cout << char(x);
		gotoxy (110, 16);
		cout << char(x) << char(x);
		gotoxy (110, 17);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (110, 18);
		cout << char(x) << char(x) << char(x) << char(x) << char(x) << char(x);
		gotoxy (110, 19);
		cout << char(x) << char(x) << char(x) << char(x);
		gotoxy (110, 20);
		cout << char(x) << char(x);
		gotoxy (110, 21);
		cout << char(x);
		loop ++;
		Sleep (100);
		goto loop_back;
		
		}
		
		if (s == '\r')
		{
			
			goto exit_loop;
		}
		
		if (s == '+')
		{
			system ("cls");
			forgot_register ();
		}
		
		if (s == tab)
		{
			system ("cls");
			user_register ();
		}
		
		if (s == back_esc)
		{
			system ("cls");
			main ();
		}
		
	}
	
	exit_loop:
	if (loop == 1)
	{
		manila_ui ();
	}
	if (loop == 2)
	{
		bridge ();
	}
	if (loop == 3)
	{
		minigame ();
	}

}

// UI OF TOUR AS EARTH FOR BOOKING
void book_pic ()
{
	// EARTH BORDER
	int x = 219;
	color (15);
	gotoxy (52, 11);
	for (int i = 1; i <= 18; i++)
	{
		cout << char (x);
	}	
	gotoxy (50, 12);
	cout << char(x) << char(x); // simula sa 52 + 11 ung first
	gotoxy (70, 12);
	cout << char(x) << char(x);
	
	gotoxy (49, 13);
	cout << char(x) << char(x); // 51 + 18
	gotoxy (71, 13);
	cout << char(x) << char(x);
	
	gotoxy (48, 14);
	cout << char(x) << char(x); // 51 + 18 // 49 + 20
	gotoxy (72, 14);
	cout << char(x) << char(x);
	
	gotoxy (47, 15);
	cout << char(x) << char(x); // 48 + 22
	gotoxy (73, 15);
	cout << char(x) << char(x);
	
	
	gotoxy (46, 16);
	cout << char(x) << char(x); // 48 + 24
	gotoxy (74, 16);
	cout << char(x) << char(x);
	
	gotoxy (46, 17);
	cout << char(x) << char(x); // 48 + 24
	gotoxy (74, 17);
	cout << char(x) << char(x);
	
	gotoxy (46, 18);
	cout << char(x) << char(x); // 48 + 24
	gotoxy (74, 18);
	cout << char(x) << char(x);
	
	gotoxy (46, 19);
	cout << char(x) << char(x); // 48 + 24
	gotoxy (74, 19);
	cout << char(x) << char(x);
	
	

	gotoxy (47, 20);
	cout << char (x) << char (x); // 48 + 22
	gotoxy (73, 20);
	cout << char (x) << char (x); // 48 + 22
	
	gotoxy (48, 21);
	cout << char (x) << char (x); // 48 + 22
	gotoxy (72, 21);
	cout << char (x) << char (x); // 48 + 22
	
	gotoxy (49, 22);
	cout << char (x) << char (x); // 48 + 22
	gotoxy (71, 22);
	cout << char (x) << char (x); // 48 + 22
	
	gotoxy (50, 23);
	cout << char (x) << char (x); // 48 + 22
	gotoxy (70, 23);
	cout << char (x) << char (x); // 48 + 22
	
	gotoxy (52, 24);
	for (int i = 1; i <= 18; i++)
	{
		cout << char (x);
	}
	
	// WATER
	color (1);
	gotoxy (52, 12);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (51, 13);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (50, 14);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (49, 15);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (48, 16);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (71, 16);
	cout << char (x) << char (x) << char (x);
	
	gotoxy (48, 17);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (70, 17);
	cout << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (48, 18);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (68, 18);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (48, 19);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (66, 19);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	

	gotoxy (49, 20);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (66, 20);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (50, 21);
	cout << char (x) << char (x) << char (x) << char (x) << char (x)  << char (x)  << char (x) << char (x);
	
	gotoxy (67, 21);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	

	gotoxy (51, 22); 
	cout << char (x) << char (x) << char (x) << char (x) << char (x)  << char (x)  << char (x) << char (x);
	
	gotoxy (64, 22); 
	cout << char (x) << char (x) << char (x) << char (x) << char (x)  << char (x) << char (x);
	
	gotoxy (52, 23); 
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (64, 23); 
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	// BOUND_LAND
	color (2);
	gotoxy (59, 12);
	cout << char (x) << char (x);
	
	gotoxy (58, 13);
	cout << char (x) << char (x);
	
	gotoxy (57, 14);
	cout << char (x) << char (x);
	
	gotoxy (56, 15);
	cout << char (x) << char (x);
	gotoxy (71, 15);
	cout << char (x) << char (x);
	
	gotoxy (54, 16);
	cout << char (x) << char (x);
	gotoxy (67, 16);
	cout << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (54, 17);
	cout << char (x) << char (x);
	gotoxy (66, 17);
	cout << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (54, 18);
	cout << char (x) << char (x) << char (x) << char (x) ;
	gotoxy (65, 18);
	cout << char (x) << char (x) << char (x) ;
	
	gotoxy (55, 19);
	cout << char (x) << char (x) << char (x) << char (x) ;
	gotoxy (63, 19);
	cout << char (x) << char (x) << char (x)  ;
	
	gotoxy (58, 20);
	cout << char (x) << char (x) << char (x)  ;
	gotoxy (63, 20);
	cout << char (x) << char (x) << char (x)  ;
	
	gotoxy (58, 21);
	cout << char (x) << char (x)  ;
	gotoxy (63, 21);
	cout << char (x) << char (x) << char (x) << char (x) ;
	
	gotoxy (59, 22);
	cout << char (x) << char (x)  ;
	gotoxy (64, 22);
	cout << char (x) << char (x) << char (x)  ;
	
	gotoxy (60, 23);
	cout << char (x) << char (x) << char (x) << char (x) << char (x);
	
	// LAND
	color (2);
	gotoxy (61, 12);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (60, 13);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (59, 14);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (58, 15);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (56, 16);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x)  << char (x) << char (x) << char (x);
	
	gotoxy (56, 17);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (58, 18);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (59, 19);
	cout << char (x) << char (x) << char (x) << char (x) << char (x) << char (x) << char (x);	
	
	gotoxy (61, 20);
	cout << char (x) << char (x) << char (x);
	
	gotoxy (60, 21);
	cout << char (x) << char (x) << char (x) << char (x);
	
	gotoxy (61, 22);
	cout << char (x) << char (x) << char (x) << char (x);
	
	//tour_text
	
	/*
 _______  _____   _     _  _____  
(__ _ __)(_____) (_)   (_)(_____) 
   (_)  (_)   (_)(_)   (_)(_)__(_)
   (_)  (_)   (_)(_)   (_)(_____) 
   (_)  (_)___(_)(_)___(_)( ) ( ) 
   (_)   (_____)  (_____) (_)  (_)
	*/
	int let = 219;
	color (11);
	gotoxy (44, 26);
	cout << " _______  _____   _     _  _____  ";
	
	gotoxy (44, 27);
	cout << "(__ _ __)(_____) (_)   (_)(_____) ";
	
	gotoxy (44, 28);
	cout << "   (_)  (_)   (_)(_)   (_)(_)__(_)";
	
	gotoxy (44, 29);
	cout << "   (_)  (_)   (_)(_)   (_)(_____) ";
	
	gotoxy (44, 30);
	cout << "   (_)  (_)___(_)(_)___(_)( ) ( ) ";
	
	gotoxy (44, 31);
	cout << "   (_)   (_____)  (_____) (_)  (_)";
	
}

// UI OF HISTORY AS MAGNIFYING GLASS FOR HISTORY SEARCH
void showbook_pic ()
{
	int struc=219;          


// magnify

int plus_x = 47;
int plus_y = 2;

//outline 
color(4);
gotoxy(6+plus_x,11 + plus_y);
for(int i=1; i<=9;i++)
{

cout<<char(struc);
}

gotoxy(3+plus_x,12+ plus_y);
for(int i=1; i<=3;i++)
{

cout<<char(struc);
}

gotoxy(14+plus_x,12+ plus_y);
for(int i=1; i<=3;i++)
{

cout<<char(struc);
}

gotoxy(2+plus_x,13+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(16+plus_x,13+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(2+plus_x,14+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(17+plus_x,14+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(2+plus_x,15+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(16+plus_x,15+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(3+plus_x,16+ plus_y);
for(int i=1; i<=3;i++)
{

cout<<char(struc);
}

gotoxy(10+plus_x,16+ plus_y);
for(int i=1; i<=8;i++)
{

cout<<char(struc);
}

gotoxy(5+plus_x,17+ plus_y);
for(int i=1; i<=9;i++)
{

cout<<char(struc);
}

gotoxy(16+plus_x,17+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(18+plus_x,16+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}


color(3);
gotoxy(18+plus_x,17+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(11);
gotoxy(20+plus_x,17+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(11);
gotoxy(18+plus_x,18+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(3);
gotoxy(20+plus_x,18+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(11);
gotoxy(22+plus_x,18+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(11);
gotoxy(20+plus_x,19+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(3);
gotoxy(22+plus_x,19+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(11);
gotoxy(24+plus_x,19+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

color(11);
gotoxy(22+plus_x,20+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

//// inside
color(7);

gotoxy(6+plus_x,12+ plus_y);
for(int i=1; i<=8;i++)
{

cout<<char(struc);
}


gotoxy(4+plus_x,13+ plus_y);
for(int i=1; i<=12;i++)
{

cout<<char(struc);
}


gotoxy(3+plus_x,14+ plus_y);
for(int i=1; i<=14;i++)
{

cout<<char(struc);
}


gotoxy(4+plus_x,15+ plus_y);
for(int i=1; i<=12;i++)
{

cout<<char(struc);
}


gotoxy(6+plus_x,16+ plus_y);
for(int i=1; i<=8;i++)
{

cout<<char(struc);
}

color (11);

	gotoxy (34, 26);
	cout << " _     _  _______  _____  _______  _____   _____  _     _ ";
	
	gotoxy (34, 27);
	cout << "(_)   (_)(_______)(_____)(__ _ __)(_____) (_____)(_)   (_)";
	
	gotoxy (34, 28);
	cout << "(_)___(_)   (_)  (_)___     (_)  (_)   (_)(_)__(_)(_)_(_) ";
	
	gotoxy (34, 29);
	cout << "(_______)   (_)    (___)_   (_)  (_)   (_)(_____)   (_)  ";
	
	gotoxy (34, 30);
	cout << "(_)   (_) __(_)__  ____(_)  (_)  (_)___(_)( ) ( )   (_)   ";
	
	gotoxy (34, 31);
	cout << "(_)   (_)(_______)(_____)   (_)   (_____) (_)  (_)  (_)   ";
}

// UI OF JOYSTICK AS MINIGAME
void minigame_pic ()
{
	
	int struc=219;          




int plus_x = 46;
int plus_y = -16;

	/////// borderss sa gilid 
color(1);


gotoxy(14 + plus_x,28 + plus_y);
for(int i=1; i<=5;i++)
{

cout<<char(struc);
}


gotoxy(18+ plus_x,29+ plus_y);   
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(14+ plus_x,31+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(18+ plus_x,31+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
} 

gotoxy(14+ plus_x,32+ plus_y);
for(int i=1; i<=5;i++)
{

cout<<char(struc);
} 

color (9);
gotoxy(9+ plus_x,33+ plus_y);                             
for(int i=1; i<=14;i++)
{

cout<<char(struc);
} 

gotoxy(8+ plus_x,34+ plus_y); 
for(int i=1; i<=3;i++)
{

cout<<char(struc);
} 

gotoxy(19+ plus_x,34+ plus_y); 
for(int i=1; i<=5;i++)
{

cout<<char(struc);
} 

gotoxy(7+ plus_x,35+ plus_y);
for(int i=1; i<=3;i++)
{

cout<<char(struc);
} 

gotoxy(12+ plus_x,34+ plus_y);
for(int i=1; i<=5;i++)
{

cout<<char(struc);
} 


gotoxy(13+ plus_x,35+ plus_y);
for(int i=1; i<=2;i++)
{

cout<<char(struc);
} 

gotoxy(6+ plus_x,36+ plus_y); 
for(int i=1; i<=5;i++)
{

cout<<char(struc);
} 

gotoxy(12+ plus_x,36+ plus_y); 
for(int i=1; i<=4;i++)
{

cout<<char(struc);
} 

gotoxy(20+ plus_x,35+ plus_y); 
for(int i=1; i<=3;i++)
{

cout<<char(struc);
}

gotoxy(19+ plus_x,36+ plus_y); 
for(int i=1; i<=5;i++)
{

cout<<char(struc);
}

gotoxy(7+ plus_x,37+ plus_y);
for(int i=1; i<=6;i++)
{

cout<<char(struc);
}

gotoxy(18+ plus_x,37+ plus_y);
for(int i=1; i<=6;i++)
{

cout<<char(struc);
}

color(1);
// borders
gotoxy(14+ plus_x,29+ plus_y);   
for(int i=1; i<=1;i++)
{
cout<<char(struc);
}

gotoxy(13+ plus_x,30+ plus_y);  
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(18+ plus_x,30+ plus_y);  
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

// middle 

color(14);

gotoxy(15+ plus_x,29+ plus_y);   
for(int i=1; i<=3;i++)
{

cout<<char(struc);
}

gotoxy(14+ plus_x,30+ plus_y);  
for(int i=1; i<=4;i++)
{

cout<<char(struc);
}

gotoxy(15+ plus_x,31+ plus_y);
for(int i=1; i<=3;i++)
{

cout<<char(struc);
} 

gotoxy(15+ plus_x,34+ plus_y); 
for(int i=1; i<=3;i++)
{

cout<<char(struc);
} 

gotoxy(14+ plus_x,35+ plus_y); 
for(int i=1; i<=5;i++)
{

cout<<char(struc);
} 

gotoxy(15+ plus_x,36+ plus_y); 
for(int i=1; i<=3;i++)
{

cout<<char(struc);
} 


color(11);
gotoxy(11+ plus_x,35+ plus_y); 
for(int i=1; i<=1;i++)
{

cout<<char(struc);
} 

gotoxy(10+ plus_x,36+ plus_y); 
for(int i=1; i<=1;i++)
{

cout<<char(struc);
} 

gotoxy(12+ plus_x,36+ plus_y); 
for(int i=1; i<=1;i++)
{

cout<<char(struc);
} 

color(7);
gotoxy(11+ plus_x,36+ plus_y); 
for(int i=1; i<=1;i++)
{

cout<<char(struc);
} 



color(11);
gotoxy(11+ plus_x,37+ plus_y); 
for(int i=1; i<=1;i++)
{

cout<<char(struc);
} 

color(9);
gotoxy(11+ plus_x,34+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(10+ plus_x,35+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(12+ plus_x,35+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(18+ plus_x,34+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(19+ plus_x,35+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}

gotoxy(18+ plus_x,36+ plus_y);
for(int i=1; i<=1;i++)
{

cout<<char(struc);
}



color(1);
gotoxy(9+ plus_x,33+ plus_y);                             
for(int i=1; i<=6;i++)
{

cout<<char(struc);
} 

gotoxy(8+ plus_x,34+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
} 

gotoxy(7+ plus_x,35+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
} 

gotoxy(6+ plus_x,36+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
} 

gotoxy(7+ plus_x,37+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
} 


gotoxy(18+ plus_x,33+ plus_y);                             
for(int i=1; i<=5;i++)
{

cout<<char(struc);
}

gotoxy(22+ plus_x,34+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(22+ plus_x,35+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(23+ plus_x,36+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}

gotoxy(22+ plus_x,37+ plus_y);                             
for(int i=1; i<=2;i++)
{

cout<<char(struc);
}
color (1);
gotoxy(7+ plus_x,37+ plus_y);                             
for(int i=1; i<19;i++)
{

cout<<char(struc);
}
/*
  __   __   _______  _     _  _______  _____    _____    __   __   ______  _____  
 (__)_(__) (_______)(_)   (_)(_______)(_____)  (_____)  (__)_(__) (______)(_____) 
(_) (_) (_)   (_)   (__)_ (_)   (_)  (_)  ___ (_)___(_)(_) (_) (_)(_)__  (_)___   
(_) (_) (_)   (_)   (_)(_)(_)   (_)  (_) (___)(_______)(_) (_) (_)(____)   (___)_ 
(_)     (_) __(_)__ (_)  (__) __(_)__(_)___(_)(_)   (_)(_)     (_)(_)____  ____(_)
(_)     (_)(_______)(_)   (_)(_______)(_____) (_)   (_)(_)     (_)(______)(_____) 
                                                                                  
                                                                                  */
	color (11);
	gotoxy (22, 26);
	cout << "  __   __   _______  _     _  _______  _____    _____    __   __   ______  _____  ";
	
	gotoxy (22, 27);
	cout << " (__)_(__) (_______)(_)   (_)(_______)(_____)  (_____)  (__)_(__) (______)(_____) ";
	
	gotoxy (22, 28);
	cout << "(_) (_) (_)   (_)   (__)_ (_)   (_)  (_)  ___ (_)___(_)(_) (_) (_)(_)__  (_)___   ";
	
	gotoxy (22, 29);
	cout << "(_) (_) (_)   (_)   (_)(_)(_)   (_)  (_) (___)(_______)(_) (_) (_)(____)   (___)_ ";
	
	gotoxy (22, 30);
	cout << "(_)     (_) __(_)__ (_)  (__) __(_)__(_)___(_)(_)   (_)(_)     (_)(_)____  ____(_)";
	
	gotoxy (22, 31);
	cout << "(_)     (_)(_______)(_)   (_)(_______)(_____) (_)   (_)(_)     (_)(______)(_____) ";
}

// DUPLICATES BORDER BUT WITHOUT THE BOTTOM NOTICE
void border_noNotice ()
{
	color (15);
	for (int side_border1 = 0; side_border1 < 43;  side_border1++)
	{
		gotoxy (5, side_border1);
		cout << char (219); 
		
		// this is responsible for the left border
	}
	
	for (int side_border2 = 0; side_border2 < 43;  side_border2++)
	{
		gotoxy (118, side_border2);
		cout << char (219); 
		
		// this is responsible for the right border
	}
	
	for (int top_border = 5; top_border < 118; top_border++)
	{
		gotoxy (top_border, 0);
		cout << char (219); 
		
		// this is responsible for the top border
	}
	
	for (int bot_border = 5; bot_border < 119; bot_border++)
	{
		gotoxy (bot_border, 43);
		cout << char (219); 
		
		// this is responsible for the bottom border
	}
}

// COPY OF NO NOTICE BORDER
void copy_noNotice ()
{
	color (1);
	for (int side_border1 = 0; side_border1 < 43;  side_border1++)
	{
		gotoxy (5, side_border1);
		cout << char (219); 
		
		// this is responsible for the left border
	}
	
	for (int side_border2 = 0; side_border2 < 43;  side_border2++)
	{
		gotoxy (118, side_border2);
		cout << char (219); 
		
		// this is responsible for the right border
	}
	
	for (int top_border = 5; top_border < 118; top_border++)
	{
		gotoxy (top_border, 0);
		cout << char (219); 
		
		// this is responsible for the top border
	}
	
	for (int bot_border = 5; bot_border < 119; bot_border++)
	{
		gotoxy (bot_border, 43);
		cout << char (219); 
		
		// this is responsible for the bottom border
	}
}


//MANILA UI MAP, AND THE LOCATION PICKING
void manila_ui ()
{
	system ("cls");
	color(15);
	border_noNotice ();
	
	color(6);
	merc_name_default();
	color (6);
	
	
	
    int loc_cord_x = 20;
	int loc_cord_y = 16;   
	

	
          color(11);
    	// borders between map and choicing 
	      for(int i=0; i<30; i++)
     	{
		gotoxy (loc_cord_x+43, 11+i);
		cout << char (219);	
	    }
	    
	    // traffic lights 
	    color(8);
	     
		 for(int i=0; i<12; i++)
     	{
		gotoxy (51+i, 11);
		cout << char (219);	
	    }
	    
	    for(int i=0; i<12; i++)
     	{
		gotoxy (51+i, 17);
		cout << char (219);	
	    }
	      
	
	    
         for(int i=0; i<3; i++)
     	{
		gotoxy (51+i, 12);
		cout << char (219);	
	    }
	    
	     for(int i=0; i<3; i++)
     	{
		gotoxy (60+i, 12);
		cout << char (219);	
	    }
	    
	    for(int i=0; i<3; i++)
     	{
		gotoxy (51+i, 13);
		cout << char (219);	
	    }
	    
	      for(int i=0; i<4; i++)
     	{
		gotoxy (59+i, 13);
		cout << char (219);	
	    }
	    
	    
	    for(int i=0; i<3; i++)
     	{
		gotoxy (51+i, 14);
		cout << char (219);	
	    }
	    
	     for(int i=0; i<3; i++)
     	{
		gotoxy (60+i, 14);
		cout << char (219);	
	    }
	    
	    for(int i=0; i<3; i++)
     	{
		gotoxy (51+i, 15);
		cout << char (219);	
	    }
	    
	      for(int i=0; i<4; i++)
     	{
		gotoxy (59+i, 15);
		cout << char (219);	
	    }
	    
	      for(int i=0; i<3; i++)
     	{
		gotoxy (60+i, 16);
		cout << char (219);	
	    }
	    
	    for(int i=0; i<3; i++)
     	{
		gotoxy (51+i, 16);
		cout << char (219);	
	    }
	    
	      for(int i=0; i<5; i++)
     	{
		gotoxy (54+i, 13);
		cout << char (219);	
	    }
	    
	     for(int i=0; i<5; i++)
     	{
		gotoxy (54+i, 15);
		cout << char (219);	
	    }
	   
	    // red
	    color(4);
	    
         for(int i=0; i<6; i++)
     	{
		gotoxy (54+i, 12);
		cout << char (219);	
		
	    }
		
		// yellow
		color(6);
	    
         for(int i=0; i<6; i++)
     	{
		gotoxy (54+i, 14);
		cout << char (219);	
	    }
	    
	    
	     // green
		color(10);
	    
         for(int i=0; i<6; i++)
     	{
		gotoxy (54+i, 16);
		cout << char (219);	
	    }
	    
	
			color (10);
			gotoxy (72, 10);
			cout << "NOTE: ONCE YOU PICKED A LOCATION THE RECENT";
			gotoxy (70, 11);
			cout << "           HISTORY WILL BE DELETED";
			color (11);
			gotoxy (72, 10);
			cout << "NOTE:";
			color (10);
		
		gotoxy (73, 23+8);
		cout << "This Transaction will be recorded if the";
		gotoxy (72, 23+9);
		cout << "         trip is FULLY PAID only";
		color (11);
		gotoxy (89, 23+9);
		cout << "FULLY PAID";
		
		
		
		
		
		   color(15);
		// borders  for locations
	       	  
				 for (int i = 5; i < 35; i++)
	         {
		     gotoxy (74+i, 16);
	         cout << char (205);
	         }
	         
			 gotoxy (78, 16);
	         cout << char (201);
	    
	         gotoxy (78, 30);
	         cout << char (200);
	   
	         for (int i = 5; i < 18; i++)
	         {
		     gotoxy (78, 12+i);
	         cout << char (186);
	         }
              
              for (int i = 5; i < 35; i++)
	         {
		     gotoxy (74+i, 30);
	         cout << char (205);
	         } 
              
             gotoxy (108, 16);
	         cout << char (187); 
	
	         gotoxy (108, 30);
	         cout << char (188); 
	         
	         for (int i = 5; i < 18; i++)
	         {
		     gotoxy (108, 12+i);
	         cout << char (186);
	         }
	         
	         
	         // instructions
	         
	         color(3);
			 gotoxy (69, 33);
	         cout << char (218);
	    
	         gotoxy (69, 40);
	         cout << char (192);
	         
	           for (int i = 0; i < 6; i++)
	         {
		     gotoxy (69, 34+i);
	         cout << char (179);
	         }
	         
	          for (int i = 0; i < 43; i++)
	         {
		     gotoxy (70+i, 33);
	         cout << char (196);
	         }
	         
	         for (int i = 0; i < 43; i++)
	         {
		     gotoxy (70+i, 40);
	         cout << char (196);
	         }
	         
	         for (int i = 0; i < 6; i++)
	         {
		     gotoxy (113, 34+i);
	         cout << char (179);
	         }
	         
	         gotoxy (113, 33);
	         cout << char (191);
	         
	         gotoxy (113, 40);
	         cout << char (217);
	         
	         color (14);
	         gotoxy (20, 13);
	         cout << "M A N I L A: ";
	         gotoxy (33, 13);
	         cout << " T O";
	         
	         
	         // tables for manila to
	          color(4);
	          gotoxy (19, 12);
	          cout << char (201);
	         
	          gotoxy (19, 14);
	          cout << char (200);
	         
	          gotoxy (38, 12);
	          cout << char (187);
	             
	          gotoxy (38, 14);
	          cout << char (188);
	          
	          for (int line=0; line<18; line++)
	          {
	          	gotoxy (20+line, 12);
	            cout << char (205);	          	
			  }
			  
			   for (int line=0; line<18; line++)
	          {
	          	gotoxy (20+line, 14);
	            cout << char (205);	          	
			  }
			  
	         
	         color(15);
	         gotoxy (73, 35);
	         cout << "I  N  S  T  R  U  C  T  I  O  N  S  ";
	         
	          // line 
	        
	          for (int i = 0; i < 43; i++)
	         {
		     gotoxy (70+i, 36);
	         cout << char (196);
	         }
	         
	         gotoxy (72, 37);
	         cout << "Press UP/DOWN for choosing the location";
	         
	         gotoxy (72, 38);
	         cout << "Press Esc: Undo /Go back ";
	         
	         gotoxy (72, 39);
	         cout << "Press Enter to continue the process ";
	         
	         
	        
	         // location
	         gotoxy (85, 13);
	         cout << "L O C A T I O N: ";
	         
	         color(12);
	         gotoxy (84, 12);
	         cout << char (201);
	         
	         gotoxy (84, 14);
	         cout << char (200);
	         
	         gotoxy (101, 12);
	         cout << char (187);
	         
	         gotoxy (101, 14);
	         cout << char (188);
	         
	         //line
	          for (int i = 0; i < 16; i++)
	         {
		     gotoxy (85+i, 12);
	         cout << char (205);
	         }
	           for (int i = 0; i < 16; i++)
	         {
		     gotoxy (85+i, 14);
	         cout << char (205);
	         }
	         
	         // bus glass 
	          
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(20+b,23);
	         	cout << char(177);
			 }
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(20+b,24);
	         	cout << char(177);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(20+b,25);
	         	cout << char(177);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(30+b,23);
	         	cout << char(177);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(30+b,24);
	         	cout << char(177);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(30+b,25);
	         	cout << char(177);
			 }
			 
			 color(14);
			 
			  for (int b=0; b<14; b++)
	         {
	         	gotoxy(40+b,23);
	         	cout << char(177);
			 }
			 
			 for (int b=0; b<14; b++)
	         {
	         	gotoxy(40+b,24);
	         	cout << char(177);
			 }
			 
			 for (int b=0; b<14; b++)
	         {
	         	gotoxy(40+b,25);
	         	cout << char(177);
			 }
			 
			 
	         
	         // bus	         
	         color(7);
	         
	         for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,19);
	         	cout << char(219);
			 }
			 
			 color(10);
			   
			    for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,20);
	         	cout << char(219);
			 }
             
             	for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,21);
	         	cout << char(219);
			 }
	         
	         	for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,22);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(15+b,23);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(15+b,24);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(15+b,25);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,26);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,27);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<40; b++)
	         {
	         	gotoxy(15+b,28);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<28; b++)
	         {
	         	gotoxy(15+b,29);
	         	cout << char(219);
			 }
			 
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(25+b,25);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(25+b,24);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(25+b,23);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(35+b,25);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(35+b,24);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(35+b,23);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<7; b++)
	         {
	         	gotoxy(48+b,29);
	         	cout << char(219);
			 }
			 
			 // gulong
			 
			 color(8);
			   for (int b=0; b<5; b++)
	         {
	         	gotoxy(20+b,29);
	         	cout << char(219);
			 }
			  
			   for (int b=0; b<1; b++)
	         {
	         	gotoxy(18,30+b);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<1; b++)
	         {
	         	gotoxy(19,30+b);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<1; b++)
	         {
	         	gotoxy(25,30+b);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<1; b++)
	         {
	         	gotoxy(26,30+b);
	         	cout << char(219);
			 }
			 
			   for (int b=0; b<5; b++)
	         {
	         	gotoxy(20+b,31);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(43+b,29);
	         	cout << char(219);
			 }
			 
			    for (int b=0; b<1; b++)
	         {
	         	gotoxy(42,30+b);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<1; b++)
	         {
	         	gotoxy(41,30+b);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<1; b++)
	         {
	         	gotoxy(48,30+b);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<1; b++)
	         {
	         	gotoxy(49,30+b);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<5; b++)
	         {
	         	gotoxy(43+b,31);
	         	cout << char(219);
			 }
			 
			 // kalsada
			 
			 color(7);
			  for (int b=0; b<9; b++)
	         {
	         	gotoxy(6+b,28);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<9; b++)
	         {
	         	gotoxy(6+b,29);
	         	cout << char(219);
			 }
		     
		     for (int b=0; b<12; b++)
	         {
	         	gotoxy(6+b,30);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(20+b,30);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<14; b++)
	         {
	         	gotoxy(27+b,30);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<5; b++)
	         {
	         	gotoxy(43+b,30);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<2; b++)
	         {
	         	gotoxy(50+b,30);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<14; b++)
	         {
	         	gotoxy(6+b,31);
	         	cout << char(219);
			 }
			 
			 for (int b=0; b<18; b++)
	         {
	         	gotoxy(25+b,31);
	         	cout << char(219);
			 }
			 
			  for (int b=0; b<4; b++)
	         {
	         	gotoxy(48+b,31);
	         	cout << char(219);
			 }
			 
			  
			 for (int b=0; b<46; b++)
	         {
	         	gotoxy(6+b,32);
	         	cout << char(219);
			 } 
			  
			  for (int b=0; b<46; b++)
	         {
	         	gotoxy(6+b,33);
	         	cout << char(219);
			 }  
			  
	         
	
	color (14);
	int adjust = 69;
	gotoxy (loc_cord_x + adjust, loc_cord_y+2);
	cout << "1. ILOCOS";
	gotoxy (loc_cord_x + adjust, loc_cord_y+3);
	cout << "2. PAMPANGA";
	gotoxy (loc_cord_x + adjust, loc_cord_y+4);
	cout << "3. ZAMBALES";
	gotoxy (loc_cord_x + adjust, loc_cord_y+5);
	cout << "4. BAGUIO";
	gotoxy (loc_cord_x + adjust, loc_cord_y+6);
	cout << "5. APARI";
	gotoxy (loc_cord_x + adjust, loc_cord_y+7);
	cout << "6. LA UNION";
	gotoxy (loc_cord_x + adjust, loc_cord_y+8);
	cout << "7. NUEVA ECIJA";
	gotoxy (loc_cord_x + adjust, loc_cord_y+9);
	cout << "8. TUGEGARAO";
	gotoxy (loc_cord_x + adjust, loc_cord_y+10);
	cout << "9. LAOG";
	gotoxy (loc_cord_x + adjust, loc_cord_y+11);
	cout << "10. PANGASINAN";

	

	// FOR CHOICING
	
		
	int copy_number;
	int def = 1;
	back:
	char keys = 'z';				
	for (int loop = 1;;)
	{

		color (9);
			if (def == 1)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+2);
					color (12);
					cout << ">>>";
					def++;
			}
		
		loop_back:
		gotoxy (0,0);
		
		keys = 'z';
		while (keys != down_arrow && keys != up_arrow && keys != '\r' && keys != back_esc )
		{
			keys = getch ();
			
		}
		
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+2);
				color (0);
				cout << ">>>";	
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+3);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+4);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+5);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+6);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+7);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+8);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+9);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+10);
			color (0);
			cout << ">>>";
	
			gotoxy (loc_cord_x + adjust - 8, loc_cord_y+11);
			color (0);
			cout << ">>>";
		
			
		
		

		
		if (keys == down_arrow )
		{
			
			loop++;
			if (loop > 10)
			{
				loop = 1;
			}
		
			if (loop < 1)
			{
				loop = 10;
			}
			if (loop == 1)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+2);

					color (12);
					cout << ">>>";
			}
				if (loop == 2)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+3);

					color (12);
					cout << ">>>";
			}
			if (loop == 3)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+4);

					color (12);
					cout << ">>>";
			}
			if (loop == 4)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+5);

					color (12);
					cout << ">>>";
			}
			if (loop == 5)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+6);

					color (12);
					cout << ">>>";
			}
			if (loop == 6)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+7);

					color (12);
					cout << ">>>";
			}
			if (loop == 7)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+8);

					color (12);
					cout << ">>>";
			}
			if (loop == 8)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+9);

					color (12);
					cout << ">>>";
			}
			if (loop == 9)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+10);

					color (12);
					cout << ">>>";
			}
			if (loop == 10)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+11);

					color (12);
					cout << ">>>";
			}
			
				
				goto loop_back;
					
				
		}
		
		if (keys == up_arrow)
		{
			
			loop--;
			if (loop > 10)
			{
				loop = 1;
			}
		
			if (loop < 1)
			{
				loop = 10;
			}
			if (loop == 0)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+2);

					color (12);
					cout << ">>>";
			}
			if (loop == 1)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+2);

					color (12);
					cout << ">>>";
			}
				if (loop == 2)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+3);

					color (12);
					cout << ">>>";
			}
			if (loop == 3)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+4);

					color (12);
					cout << ">>>";
			}
			if (loop == 4)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+5);

					color (12);
					cout << ">>>";
			}
			if (loop == 5)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+6);

					color (12);
					cout << ">>>";
			}
			if (loop == 6)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+7);

					color (12);
					cout << ">>>";
			}
			if (loop == 7)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+8);

					color (12);
					cout << ">>>";
			}
			if (loop == 8)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+9);

					color (12);
					cout << ">>>";
			}
			if (loop == 9)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+10);

					color (12);
					cout << ">>>";
			}
			if (loop == 10)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+11);

					color (12);
					cout << ">>>";
			}
			if (loop == 11)
			{
					gotoxy (loc_cord_x + adjust - 8, loc_cord_y+11);

					color (12);
					cout << ">>>";
			}
					
		
					goto loop_back;
		
		}
			

		
		
		if (keys == '\r' && loop >= 1 && loop <= 10)
		{
			keys = '\0';
			copy_number = loop;
			
		
				goto exit_loop;
			
		}
		
		if (keys == back_esc)
		{
			system ("cls");
			mainframe ();
		}
		
	}
	
	exit_loop:
	fstream name_passenger ("name_passenger.txt", ios :: out | ios :: in | ios :: trunc);
	fstream age ("age.txt", ios :: out | ios :: in | ios :: trunc);
	fstream location ("location.txt", ios :: out | ios :: in | ios :: trunc);
	fstream pas_class ("class.txt", ios :: out | ios :: in | ios :: trunc);
	fstream trip ("trip.txt", ios :: out | ios :: in | ios :: trunc);
	fstream total ("total.txt", ios :: out | ios :: in | ios :: trunc);
	
		
	fstream want_cmp ("want_cmp.txt", ios :: out | ios :: in | ios :: trunc);
	fstream cmp ("cmp.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream want_ins ("want_ins.txt", ios :: out | ios :: in | ios :: trunc);
	fstream insu ("insu.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream DF ("DF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream disc ("disc.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream VF ("VF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream VAT ("VAT.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream i_total ("i_total.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream cl_charge  ("cl_charge.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream GF  ("GF.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream grp_discount  ("grp_discount.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream paid ("paid.txt", ios :: out | ios :: in | ios :: trunc);

	 
	fstream change ("change.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream num_passengers ("num_passengers.txt", ios :: out | ios :: in | ios :: trunc);
	fstream minor_count ("minor_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream senior_count ("senior_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream adult_count ("adult_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream status ("status.txt", ios :: out | ios :: in | ios  :: trunc);
	
	name_passenger.close ();
	age.close ();
	location.close ();
	pas_class.close ();
	trip.close ();
	total.close ();
	location.open("location.txt", ios :: out | ios :: in | ios :: trunc);
	
	switch (copy_number)
	{
		case 1:
			location << "ILOCOS" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 2:
			location << "PAMPANGA" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 3:
			location << "ZAMBALES" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 4:
			location << "BAGUIO" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 5:
			location << "APARI" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 6:
			location << "LA UNION" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 7:
			location << "NUEVA ECIJA" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 8:
			location << "TUGEGARAO" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 9:
			location << "LAOG" << endl;
			location.close();	
			ticketing ();
			break;
			
		case 10:
			location << "PANGASINAN" << endl;
			location.close();	
			ticketing ();
			break;
		
		
	}
	if (copy_number >=11 || copy_number <=0)
	{
		manila_ui ();
	}
	
}

// RESPONSIBLE FOR CLASS PICKING
void ticketing ()
{
	fstream status ("status.txt", ios :: out | ios :: in | ios :: trunc);
	//main program for booking a tour class
	system ("cls");
	color(6);
	merc_name_default();
	color(15);
	border_noNotice();
	color (6);
	fstream location;
	location.open("location.txt");
	


                                   
                                                
	color (10);
	int hold_x = 7;
	int hold_y = 7;
	
	
	
	color (10);
	gotoxy (hold_x+4, hold_y+7);
	color (14);
	
	// upper table
	for (int i = 1; i <= 103; i++)
	{
		cout << char (220);
	}
	//  lower table
	gotoxy (hold_x+4, hold_y+25);
	for (int i = 1; i <= 103; i++)
	{
		cout << char (220);
	}
	
	// left table 
	for (int i = 1; i <= 18; i++)
	{
		gotoxy (hold_x+4, 14+i);
		cout << char (219);
	}
	
	// right table 
	for (int i = 1; i <= 18; i++)
	{
		gotoxy (113, 14+i);
		cout << char (219);
	}
		
		
	// line after location:
	 for (int i = 0; i < 101; i++)
	         {
		     gotoxy (12+i,18 );
	         cout << char (223);
	         }	
	         
	// intsructions:    

	         color(3);
			 gotoxy (38, 34);
	         cout << char (201);
	    
	         gotoxy (38, 40);
	         cout << char (200);
	         
	           for (int i = 0; i < 5; i++)
	         {
		     gotoxy (38, 35+i);
	         cout << char (186);
	         }
	         
	          for (int i = 0; i < 43; i++)
	         {
		     gotoxy (39+i, 34);
	         cout << char (205);
	         }
	         
	         for (int i = 0; i < 43; i++)
	         {
		     gotoxy (39+i, 40);
	         cout << char (205);
	         }
	         
	         for (int i = 0; i < 5; i++)
	         {
		     gotoxy (82, 35+i);
	         cout << char (186);
	         }
	         
	         gotoxy (82, 34);
	         cout << char (187);
	         
	         gotoxy (82, 40);
	         cout << char (188);
	         
	         color(15);
	         gotoxy (42, 35);
	         cout << "I  N  S  T  R  U  C  T  I  O  N  S  ";    
			 
			   // line 
	        
	          for (int i = 0; i < 43; i++)
	         {
		     gotoxy (39+i, 36);
	         cout << char (205);
	         }
	         
	         gotoxy (40, 37);
	         cout << "Press Left/Right -keys for choosing";
	         
	         gotoxy (40, 38);
	         cout << "Press Esc: Undo /Go back ";
	         
	         gotoxy (40, 39);
	         cout << "Press Enter to continue the process ";
	          
			     
		
	
	gotoxy (50, 16);
	cout << "LOCATION: ";
	gotoxy (60, 16);
	string hold;

	
	while (!location.eof())
	{
		color (6);
		getline (location, hold);
		cout << hold;
	}
	location.close();

    color (15);
      // first border o
	for (int i = 1; i <= 13; i++)
	{
		gotoxy (36, 18+i);
		cout << char (220);
	}
	
	for (int i = 1; i <= 13; i++)
	{
		gotoxy (62, 18+i);
		cout << char (220);
	}
	
	for (int i = 1; i <= 13; i++)
	{
		gotoxy (88, 18+i);
		cout << char (220);
	}
	color (14);
	gotoxy (14,26);
	cout << "CLASS: ORDINARY";
	
	gotoxy (39,26);
	cout << "CLASS: A";
	
	gotoxy (65,26);
	cout << "CLASS: B";
	
	gotoxy (91, 26);
	cout << "CLASS: C";
	
	
	gotoxy (14,29-2);
	cout << "Price: ";
	
	gotoxy (39,29-2);
	cout << "Price: ";
	
	gotoxy (65,29-2);
	cout << "Price: ";
	
	gotoxy (91, 29-2);
	cout << "Price: ";
	
	location.open("location.txt");
	string compare;

		location >> compare;
	
	// PRICE DISPLAY
    if (compare == "ILOCOS")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "375 PHP";
	
		gotoxy (47,29-2);
		cout << "750 PHP";
	
		gotoxy (73,29-2);
		cout << "450 PHP";
	
		gotoxy (99, 29-2);
		cout << "425 PHP";
	}
	
	if (compare == "PAMPANGA")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "275 PHP";
	
		gotoxy (47,29-2);
		cout << "500 PHP";
	
		gotoxy (73,29-2);
		cout << "400 PHP";
	
		gotoxy (99, 29-2);
		cout << "375 PHP";
	}
	
	if (compare == "ZAMBALES")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "335 PHP";
	
		gotoxy (47,29-2);
		cout << "415 PHP";
	
		gotoxy (73,29-2);
		cout << "390 PHP";
	
		gotoxy (99, 29-2);
		cout << "350 PHP";
	}
	
	if (compare == "BAGUIO")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "350 PHP";
	
		gotoxy (47,29-2);
		cout << "585 PHP";
	
		gotoxy (73,29-2);
		cout << "485 PHP";
	
		gotoxy (99, 29-2);
		cout << "400 PHP";
	}
	
	if (compare == "APARI")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "900 PHP";
	
		gotoxy (47,29-2);
		cout << "1,300 PHP";
	
		gotoxy (73,29-2);
		cout << "975 PHP";
	
		gotoxy (99, 29-2);
		cout << "870 PHP";
	}
	
	if (compare == "LA")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "540 PHP";
	
		gotoxy (47,29-2);
		cout << "850 PHP";
	
		gotoxy (73,29-2);
		cout << "750 PHP";
	
		gotoxy (99, 29-2);
		cout << "650 PHP";
	}
	
	if (compare == "NUEVA")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "630 PHP";
	
		gotoxy (47,29-2);
		cout << "900 PHP";
	
		gotoxy (73,29-2);
		cout << "875 PHP";
	
		gotoxy (99, 29-2);
		cout << "735 PHP";
	}
	
	if (compare == "TUGEGARAO")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "520 PHP";
	
		gotoxy (47,29-2);
		cout << "850 PHP";
	
		gotoxy (73,29-2);
		cout << "750 PHP";
	
		gotoxy (99, 29-2);
		cout << "690 PHP";
	}
	
	if (compare == "LAOG")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "620 PHP";
	
		gotoxy (47,29-2);
		cout << "900 PHP";
	
		gotoxy (73,29-2);
		cout << "875 PHP";
	
		gotoxy (99, 29-2);
		cout << "735 PHP";
	}
	
	if (compare == "PANGASINAN")
    {
    	color (9);
    	gotoxy (22,29-2);
		cout << "550 PHP";
	
		gotoxy (47,29-2);
		cout << "800 PHP";
	
		gotoxy (73,29-2);
		cout << "700 PHP";
	
		gotoxy (99, 29-2);
		cout << "675 PHP";
	}
	
    location.close();
    fstream pas_class;
    pas_class.open("class.txt", ios :: out | ios :: in | ios :: trunc);
    int klase = 1;
    for (klase = 1;;)
    {
    	loop_back:
		
    		color (8);
			gotoxy (19, 19);
			cout << "  _____   ";
			gotoxy (19, 20);
			cout << " (_____)  ";
			gotoxy (18, 21);
			cout << "(_)     (_) ";
			gotoxy (18, 22);
			cout << "(_)     (_) ";
			gotoxy (18, 23);
			cout << "(_)     (_) ";
			gotoxy (19, 24);
			cout << " (_____)  ";

        
          
    		gotoxy (45, 19);
			cout << "  _____  ";
			gotoxy (45, 20);
			cout << " (_____) ";
			gotoxy (45, 21);
			cout << "(_)___(_)";
			gotoxy (45, 22);
			cout << "(_______)";
			gotoxy (45, 23);
			cout << "(_)   (_)";
			gotoxy (45, 24);
			cout << "(_)   (_)";
	

        
    		gotoxy (72, 19);
			cout << " _____  ";
			gotoxy (72, 20);
			cout << "(_____)";
			gotoxy (72, 21);
			cout << "(_)__(_)";
			gotoxy (72, 22);
			cout << "(_____) ";
			gotoxy (72, 23);
			cout << "(_)__(_)";
			gotoxy (72, 24);
			cout << "(_____) ";
    
        
    		gotoxy (96, 19);
			cout << "   ___   ";
			gotoxy (96, 20);
			cout << " _(___)_ ";
			gotoxy (96, 21);
			cout << "(_)   (_)";
			gotoxy (96, 22);
			cout << "(_)    _ ";
			gotoxy (96, 23);
			cout << "(_)___(_)";
			gotoxy (96, 24);
			cout << "  (___)  ";
			
		if (klase >= 5)
		{
			klase = 1;
		}
		
		if (klase <= 0)
		{
			klase = 4;
		}
		
		
		if (klase == 1)
		{
			color (10);
			gotoxy (19, 19);
			cout << "  _____   ";
			gotoxy (19, 20);
			cout << " (_____)  ";
			gotoxy (18, 21);
			cout << "(_)     (_) ";
			gotoxy (18, 22);
			cout << "(_)     (_) ";
			gotoxy (18, 23);
			cout << "(_)     (_) ";
			gotoxy (19, 24);
			cout << " (_____)  ";

		}
		
		if (klase == 2)
		{
			color (10);
			gotoxy (45, 19);
			cout << "  _____  ";
			gotoxy (45, 20);
			cout << " (_____) ";
			gotoxy (45, 21);
			cout << "(_)___(_)";
			gotoxy (45, 22);
			cout << "(_______)";
			gotoxy (45, 23);
			cout << "(_)   (_)";
			gotoxy (45, 24);
			cout << "(_)   (_)";

		}
		
		if (klase == 3)
		{
			color (10);
			gotoxy (72, 19);
			cout << " _____  ";
			gotoxy (72, 20);
			cout << "(_____)";
			gotoxy (72, 21);
			cout << "(_)__(_)";
			gotoxy (72, 22);
			cout << "(_____) ";
			gotoxy (72, 23);
			cout << "(_)__(_)";
			gotoxy (72, 24);
			cout << "(_____) ";

		}
		
		if (klase == 4)
		{
			color (10);
			gotoxy (96, 19);
			cout << "   ___   ";
			gotoxy (96, 20);
			cout << " _(___)_ ";
			gotoxy (96, 21);
			cout << "(_)   (_)";
			gotoxy (96, 22);
			cout << "(_)    _ ";
			gotoxy (96, 23);
			cout << "(_)___(_)";
			gotoxy (96, 24);
			cout << "  (___)  ";
		}
		
		gotoxy (0,0);
		char classes = up_arrow;
		
		while (classes != right_arrow && classes != left_arrow && classes != '\r' && classes != back_esc)
		{
			classes = getch ();
		}
    	
    	
    	if (classes == right_arrow && klase <= 4)
    	{
    		klase++;
    		
		}
		
		if (classes == left_arrow && klase >= 1)
    	{
    		klase--;
    		
		}
		
		if (classes == back_esc)
		{
			manila_ui ();
		}
		
		if (classes == '\r')
		{
			goto exit_loop;
		}
		
		
			
	}
		
		exit_loop:
		
		if (klase == 1)
		{
			pas_class << "ORDINARY" << endl;
			color (10);
			gotoxy (13,29);
			cout << "[1]= ONE WAY \n";
			gotoxy (13,30);
			cout << "[2]= TWO WAY [2x Price]\n";
			gotoxy (13,31);
			cout << "Your Input is: ";
			color (2);

			
		}
		
		if (klase == 2)
		{
			pas_class << "A" << endl;
			color (10);
			gotoxy (38,29);
			cout << "[1]= ONE WAY \n";
			gotoxy (38,30);
			cout << "[2]= TWO WAY [2x Price]\n";
			gotoxy (38,31);
			cout << "Your Input is: ";
			color (2);
		}
		
		if (klase == 3)
		{
			pas_class << "B" << endl;
			color (10);
			gotoxy (64,29);
			cout << "[1]= ONE WAY \n";
			gotoxy (64,30);
			cout << "[2]= TWO WAY [2x Price]\n";
			gotoxy (64,31);
			cout << "Your Input is: ";
			color (2);
		}
		
		if (klase == 4)
		{
			pas_class << "C" << endl;
			color (10);
			gotoxy (90,29);
			cout << "[1]= ONE WAY \n";
			gotoxy (90,30);
			cout << "[2]= TWO WAY [2x Price]\n";
			gotoxy (90,31);
			cout << "Your Input is: ";
			color (2);
		}
		
		pas_class.close();
		
		char one_or_two = up_arrow;
		char holder_trip;
		int tr = 0;
		while (one_or_two != '1' && one_or_two != '2' && one_or_two != back_esc)
		{
		
			 one_or_two = getch ();
		}
				if (one_or_two == '1' || one_or_two == '2')
				{
					holder_trip = one_or_two;
					cout << one_or_two;
					tr ++;
				}
				
				if (one_or_two == back_esc)
				{
					ticketing ();
				}

				
		
		trip_loop:
		fstream trip;
		trip.open("trip.txt", ios :: out | ios :: in | ios :: trunc);
		
		if (holder_trip == '1')
		{
			trip << "ONE WAY" << endl;;
			
		}
		
		if (holder_trip == '2')
		{
			trip << "ROUND TRIP" << endl;;
			
		}
		trip.close ();
	 	
	 	passenger_ ();
	 	
}

// RESPONSIBLE FOR VERIFYING PASSENGERS
void passenger_ ()
{
	back:
	float grp_disc = 0;
	int minor = 0;
	int adult = 0;
	int senior = 0;
	int passenger;
	float temp_charge;
	
	system ("cls");
	color (9);
	merc_name_default ();
	color (4);
	border_noNotice ();
	fstream name_passenger;
	fstream pas_class;
	fstream pas_age;
	fstream trip;
	fstream location;
	trip.open ("trip.txt");
	location.open("location.txt");
	name_passenger.open("name_passenger.txt", ios :: out | ios :: in | ios :: trunc);
	pas_class.open("class.txt");
	pas_age.open("age.txt", ios :: out | ios :: in | ios :: trunc);
	
	
	fstream want_cmp ("want_cmp.txt", ios :: out | ios :: in | ios :: trunc);
	fstream cmp ("cmp.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream want_ins ("want_ins.txt", ios :: out | ios :: in | ios :: trunc);
	fstream insu ("insu.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream DF ("DF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream disc ("disc.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream VF ("VF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream VAT ("VAT.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream i_total ("i_total.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream cl_charge  ("cl_charge.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream GF  ("GF.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream grp_discount  ("grp_discount.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream minor_count ("minor_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream senior_count ("senior_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream adult_count ("adult_count.txt", ios :: out | ios :: in | ios :: trunc);
		
	string holder;
	pas_class >> holder;
	
       // borders for instructions

	         color(3);
			 gotoxy (38, 34);
	         cout << char (201);
	    
	         gotoxy (38, 40);
	         cout << char (200);
	         
	           for (int i = 0; i < 5; i++)
	         {
		     gotoxy (38, 35+i);
	         cout << char (186);
	         }
	         
	          for (int i = 0; i < 43; i++)
	         {
		     gotoxy (39+i, 34);
	         cout << char (205);
	         }
	         
	         for (int i = 0; i < 43; i++)
	         {
		     gotoxy (39+i, 40);
	         cout << char (205);
	         }
	         
	         for (int i = 0; i < 5; i++)
	         {
		     gotoxy (82, 35+i);
	         cout << char (186);
	         }
	         
	         gotoxy (82, 34);
	         cout << char (187);
	         
	         gotoxy (82, 40);
	         cout << char (188);
	         
	         color(15);
	         gotoxy (42, 35);
	         cout << "I  N  S  T  R  U  C  T  I  O  N  S  ";    
			 
			   // line 
	        
	          for (int i = 0; i < 43; i++)
	         {
		     gotoxy (39+i, 36);
	         cout << char (205);
	         }
	         

	         gotoxy (40, 37);
	         cout << "Press Esc: Undo /Go back ";
	         
	         gotoxy (40, 38);
	         cout << "Press Enter to continue the process ";
	          
		     // borders for note
		     
			 gotoxy (11, 11);
	         cout << char (201);
		     
             gotoxy (11, 13);
	         cout << char (200);
	         
	         gotoxy (11, 12);
	         cout << char (186);
	         
	          for (int i = 0; i < 64; i++)
	         {
		     gotoxy (12+i, 11);
	         cout << char (205);
	         }
	         
	         for (int i = 0; i < 64; i++)
	         {
		     gotoxy (12+i, 13);
	         cout << char (205);
	         }
	         
	         gotoxy (76, 11);
	         cout << char (187);
             
             gotoxy (76, 13);
	         cout << char (188);
            
             gotoxy (76, 12);
	         cout << char (186);



		
	if (holder == "A" )
	{
		gotoxy (12, 12);
		color (14);
		cout << "NOTE: The Max Reservation you can do for Class A is [27]";
		

	}
	
	if (holder == "B")
	{
		gotoxy (12, 12);
		color (14);
		cout << "NOTE: The Max Reservation you can do for Class B is [35]";
	

	}
	
	if (holder == "C" )
	{
		gotoxy (12, 12);
		color (14);
		cout << "NOTE: The Max Reservation you can do for Class C is [35]";
		

	}
	
	if (holder == "ORDINARY")
	{
		gotoxy (12, 12);
		color (14);
		cout << "NOTE: The Max Reservation you can do for Class ORDINARY is [56]";
	}
	
	for (int bx = 1; bx<= 41; bx++)
	{
		gotoxy (40+bx, 17);
		cout << "=";
		
	}
	
	for (int bx = 1; bx<= 41; bx++)
	{
		gotoxy (40+bx, 25);
		cout << "=";
		
	}
	
	for (int bx = 1; bx<= 9; bx++)
	{
		gotoxy (40, 16+ bx);
		cout << char (186);
	}
	
	for (int bx = 1; bx<= 9; bx++)
	{
		gotoxy (82, 16+ bx);
		cout << char (186);
	}
	
	gotoxy (47, 21);
	color (6);
	cout << "Enter How Many Passengers: ";
	color (11);
	char stri [5];
	char temps = 'x';
	
	for (int ep = 0;;)
	{
		temps = getch ();
		
		if (temps >= '0' && temps <= '9')
		{
			cout << temps;
			stri [ep] = temps;
			ep ++;
			stri [ep] = '\0';
		}
		
		if (temps == '\b' && ep >= 1)
		{
			cout << "\b \b";
			ep --;
			stri [ep] = '\0';
		}
		
		if (temps == '\r' && ep >= 1)
		{
			temps = '\0';
			goto exit_;
		}
		
		if (temps == back_esc)
		{
			system ("cls");
			ticketing ();
		}
		
		if (ep > 2)
		{
			cout << "\b \b";
			ep --;
			stri [ep] = '\0';
		}
		
	}
	exit_:
		
		
	istringstream (stri) >> passenger;
	if (passenger <= 0)
	{
		gotoxy (53, 20);
		color (12);
		cout << "[INVALID CAPACITY]";
		Sleep (1000);
		goto back;
	}
	
	if (holder == "A" && passenger > 27)
	{
		gotoxy (53, 20);
		color (12);
		cout << "[INVALID CAPACITY]";
		Sleep (1000);
		goto back;
	}
	
	if (holder == "B" && passenger > 35)
	{
		gotoxy (53, 20);
		color (12);
		cout << "[INVALID CAPACITY]";
		Sleep (1000);
		goto back;
	}
	
	if (holder == "C" && passenger > 35)
	{
		gotoxy (53, 20);
		color (12);
		cout << "[INVALID CAPACITY]";
		Sleep (1000);
		goto back;
	}
	
	if (holder == "ORDINARY" && passenger > 56)
	{
		gotoxy (53, 20);
		color (12);
		cout << "[INVALID CAPACITY]";
		Sleep (1000);
		goto back;
	}
	fstream num_passengers ("num_passengers.txt", ios :: out | ios :: in | ios :: trunc);
	num_passengers << passenger << endl;
	num_passengers.close ();
	
	string loc;
	location >> loc;
	// ILOCOS
	if (loc == "ILOCOS" && holder == "A")
	{
		temp_charge = 750;
	}
	if (loc == "ILOCOS" && holder == "B")
	{
		temp_charge = 450;
	}
	if (loc == "ILOCOS" && holder == "C")
	{
		temp_charge = 425;
	}
	if (loc == "ILOCOS" && holder == "ORDINARY")
	{
		temp_charge = 375;
	}
	// END OF ILOCOS TEMP CHARGE
	
	// PAMPANGA
	if (loc == "PAMPANGA" && holder == "A")
	{
		temp_charge = 500;
	}
	if (loc == "PAMPANGA" && holder == "B")
	{
		temp_charge = 400;
	}
	if (loc == "PAMPANGA" && holder == "C")
	{
		temp_charge = 375;
	}
	if (loc == "PAMPANGA" && holder == "ORDINARY")
	{
		temp_charge = 275;
	}
	// END OF PAMPANGA TEMP CHARGE
	
	// ZAMBALES
	if (loc == "ZAMBALES" && holder == "A")
	{
		temp_charge = 415;
	}
	if (loc == "ZAMBALES" && holder == "B")
	{
		temp_charge = 390;
	}
	if (loc == "ZAMBALES" && holder == "C")
	{
		temp_charge = 350;
	}
	if (loc == "ZAMBALES" && holder == "ORDINARY")
	{
		temp_charge = 335;
	}
	// END OF ZAMBALES TEMP CHARGE
	
	// BAGUIO
	if (loc == "BAGUIO" && holder == "A")
	{
		temp_charge = 585;
	}
	if (loc == "BAGUIO" && holder == "B")
	{
		temp_charge = 485;
	}
	if (loc == "BAGUIO" && holder == "C")
	{
		temp_charge = 400;
	}
	if (loc == "BAGUIO" && holder == "ORDINARY")
	{
		temp_charge = 350;
	}
	// END OF BAGUIO TEMP CHARGE
	
	// APARI
	if (loc == "APARI" && holder == "A")
	{
		temp_charge = 1300;
	}
	if (loc == "APARI" && holder == "B")
	{
		temp_charge = 975;
	}
	if (loc == "APARI" && holder == "C")
	{
		temp_charge = 870;
	}
	if (loc == "APARI" && holder == "ORDINARY")
	{
		temp_charge = 900;
	}
	// END OF APARI TEMP CHARGE
	
	// LA-UNION
	if (loc == "LA" && holder == "A")
	{
		temp_charge = 850;
	}
	if (loc == "LA" && holder == "B")
	{
		temp_charge = 750;
	}
	if (loc == "LA" && holder == "C")
	{
		temp_charge = 650;
	}
	if (loc == "LA" && holder == "ORDINARY")
	{
		temp_charge = 540;
	}
	// END OF LA-UNION TEMP CHARGE
	
	// NUEVA ECIJA
	if (loc == "NUEVA" && holder == "A")
	{
		temp_charge = 900;
	}
	if (loc == "NUEVA" && holder == "B")
	{
		temp_charge = 875;
	}
	if (loc == "NUEVA" && holder == "C")
	{
		temp_charge = 735;
	}
	if (loc == "NUEVA" && holder == "ORDINARY")
	{
		temp_charge = 630;
	}
	// END OF NUEVA ECIJA TEMP CHARGE
	
	// TUGEGARAO
	if (loc == "TUGEGARAO" && holder == "A")
	{
		temp_charge = 850;
	}
	if (loc == "TUGEGARAO" && holder == "B")
	{
		temp_charge = 750;
	}
	if (loc == "TUGEGARAO" && holder == "C")
	{
		temp_charge = 690;
	}
	if (loc == "TUGEGARAO" && holder == "ORDINARY")
	{
		temp_charge = 520;
	}
	// END OF TUGEGARAO TEMP CHARGE
	
	// LAOG
	if (loc == "LAOG" && holder == "A")
	{
		temp_charge = 900;
	}
	if (loc == "LAOG" && holder == "B")
	{
		temp_charge = 875;
	}
	if (loc == "LAOG" && holder == "C")
	{
		temp_charge = 735;
	}
	if (loc == "LAOG" && holder == "ORDINARY")
	{
		temp_charge = 620;
	}
	// END OF LAOG TEMP CHARGE
	
	
	// PANGASINAN
	if (loc == "PANGASINAN" && holder == "A")
	{
		temp_charge = 800;
	}
	if (loc == "PANGASINAN" && holder == "B")
	{
		temp_charge = 700;
	}
	if (loc == "PANGASINAN" && holder == "C")
	{
		temp_charge = 675;
	}
	if (loc == "PANGASINAN" && holder == "ORDINARY")
	{
		temp_charge = 550;
	}
	// END OF PANGASINAN TEMP CHARGE
	
	string hold_trip;
	float compartment;
	float insurance;
	trip >> hold_trip;
	
	if (hold_trip == "ROUND")
	{
		temp_charge = temp_charge * 2;
	}
	
	if (holder == "ORDINARY")
	{
		compartment = 150;
		insurance = 175;
	}
	
	if (holder == "A")
	{
		compartment = 300;
		insurance = 450;
	}
	
	if (holder == "B")
	{
		compartment = 250;
		insurance = 350;
	}
	
	if (holder == "C")
	{
		compartment = 200;
		insurance = 250;
	}
	
	
	string name_holder [passenger + 1];
	int age_holder [passenger + 1];
	int x = 1;
	int r = 1;
	float compile_total = 0;
	
	for (int i = 1; i <= passenger; i++)
	{
		reset:
		float discount = 0.0;
		float vat = 0.0;
		float grp_disc = 0.0;
		system ("cls");
		copy_noNotice ();
		color (12);
		merc_name_default ();
		color (15);
		gotoxy (10, 10);
		cout << "Credentials of Passenger # " << i << endl;
		gotoxy (36, 39);
		
		color(10);
		cout << "Please make sure the Credentials are correct.";
		gotoxy (40, 41);
		cout << "Press ESC to go back to Main Menu";
	    
	    
	    // box for intsructions: 
	    color(14);
	    
		gotoxy (20, 38);
		cout << char (218); 
		
		gotoxy (20, 42);
		cout << char (192); 
		
	     for (int bord = 0; bord < 3; bord++)
	    {
		 gotoxy (20, 39+bord);
	     cout << char (179);
	    }
	    
	     for (int bord = 0; bord <3; bord++)
	    {
		 gotoxy (96, 39+bord);
	     cout << char (179);
	    }
	    
	    
	    for (int bord = 0; bord < 75; bord++)
	    {
		 gotoxy (21+bord, 38);
	     cout << char (196);
	    }
	    
	    for (int bord = 0; bord < 75; bord++)
	    {
		 gotoxy (21+bord, 40);
	     cout << char (196);
	    }
	    
	     for (int bord = 0; bord < 75; bord++)
	    {
		 gotoxy (21+bord, 42);
	     cout << char (196);
	    }
	    
	    gotoxy (96, 38);
		cout << char (191);
	    
	    gotoxy (96, 42);
		cout << char (217);
		
	
	
	    
		
		
		// box for name 
		gotoxy (42, 13);
		cout << char (218); 
		
		gotoxy (42, 15);
		cout << char (192); 
		
	    for (int bord = 0; bord < 27; bord++)
	    {
		 gotoxy (43+bord, 13);
	     cout << char (196);
	    }
	    
	    for (int bord = 0; bord < 27; bord++)
	    {
		 gotoxy (43+bord, 15);
	     cout << char (196);
	    }
	    
	    gotoxy (70, 13);
		cout << char (191);
	    
	    gotoxy (70, 15);
		cout << char (217);
	    
	    gotoxy (70, 14);
		cout << char (179); 
		
		
	
		
		
		
		
		box_credentials ();
		reset2:
		color (15);
		gotoxy (15, 14);
		cout << "Enter Passenger Name:       ";
		char name_char [30];
	    
	    // line
		gotoxy (42, 14);
		cout << char (179); 
		
		
		for (int z = 0;;)
		{
			char namee = down_arrow;
		
				namee = getch ();
			
			
			if ((namee >= 'A' && namee <= 'Z') || (namee >= 'a' && namee <= 'z') )
			{
				cout << namee;
				name_char [z] = namee;
				z++;
			}
			if (namee == space && z >=1)
			{
				cout << namee;
				name_char [z] = namee;
				z++;
			}
			
			if (namee == '\b' && z >= 1)
			{
				cout << "\b \b";
				z--;
			}
			
			if (namee == back_esc)
			{
				system ("cls");
				passenger_ ();
			}
			
			if (namee == '\r' && z >= 1)
			{
				name_char [z] = '\0';
				goto escloop;
			}	
			if (z > 25)
			{
				gotoxy (15, 16);
				color (12);
				cout << "[MAX CHARACTER FOR NAME IS 25, PLEASE SHORTEN IT]";
				gotoxy (50+19, 14);
				cout << "\b \b";
				color (15);
				z--;
				
			}
		}
		escloop:
		name_holder [i] = name_char;
		transform (name_holder [i].begin (), name_holder [i].end (), name_holder [i].begin (), ::toupper);
		
		if (name_holder [i] == "")
		{ 
			gotoxy (15, 16);
			color (12);
			cout << "[PLEASE INPUT VALID INFO]";
			Sleep (1000);
			system ("cls");
			copy_noNotice ();
			color (12);
			merc_name_default ();
			color (15);
			gotoxy (10, 10);
			cout << "Credentials of Passenger # " << i << endl;
			box_credentials ();
			goto reset2;
		}
        
        
        // box for age 
		gotoxy (101, 13);
		cout << char (218); 
		
		gotoxy (101, 15);
		cout << char (192); 
		
	    for (int bords = 0; bords < 4; bords++)
	    {
		 gotoxy (102+bords, 13);
	     cout << char (196);
	    }
	    
	    for (int bords = 0; bords < 4; bords++)
	    {
		 gotoxy (102+bords, 15);
	     cout << char (196);
	    }
	    
	    gotoxy (106, 13);
		cout << char (191);
	    
	    gotoxy (106, 15);
		cout << char (217);
	    
	    gotoxy (106, 14);
		cout << char (179); 
		
        
        
		gotoxy (95, 14);
		cout << "Age:   ";
		
		// line
		gotoxy (101, 14);
		cout << char (179); 
		
		
		char strage [5] = {'x', 'y', 'z', 'a', 'b'};
		temps = 'x';
	
		for (int ep = 0;;)
		{
			temps = getch ();
			
			if (temps >= '0' && temps <= '9')
			{
			cout << temps;
			strage [ep] = temps;
			ep ++;
			strage [ep] = '\0';
			}
		
			if (temps == '\b' && ep >= 1)
			{
				cout << "\b \b";
				ep --;
				strage [ep] = '\0';
			}
		
			if (temps == '\r' && ep >= 1)
			{
				temps = '\0';
				strage [ep] = '\0';
				goto exit1_;
			}
		
			if (temps == back_esc)
			{
				system ("cls");
				passenger_ ();
			}
		
			if (ep > 3)
			{
				cout << "\b \b";
				ep --;
				strage [ep] = '\0';
			}
		
	}
	exit1_:
		istringstream (strage) >> age_holder [i];
		
		if (age_holder [i] >= 121)
		{
			color (12);
			gotoxy (88, 16);
			cout << "[PLEASE INPUT VALID INFO]";
			Sleep (1000);
			cin.clear ();
			goto reset;
		}

		name_passenger << i << "." << name_holder [i] << endl;
		color (14);
		gotoxy (15, 18);
		cout << "Add a compartment charge for this Passenger?(y/n): ";
		gotoxy (80, 18);
		cout << "Charge will be: ";
		color (10);
		cout << compartment;
		color (14);
		gotoxy (65, 18);
		char hold_cmp = 'x' ;
		
		while (hold_cmp != 'y' && 	hold_cmp != 'Y' && 	hold_cmp != 'n' && 	hold_cmp != 'N' && hold_cmp != back_esc)
		{
			hold_cmp = getch ();
		}
		
		cout << hold_cmp;
		
		if (hold_cmp == 'y' || hold_cmp == 'Y')
		{
			want_cmp << "Y" << endl;
		}
		
		if (hold_cmp == 'N' || hold_cmp == 'n')
		{
			want_cmp << "N" << endl;
		}
		
		if (hold_cmp == back_esc)
		{
			system ("cls");
			passenger_ ();
		}		
	
			
		gotoxy (15, 19);
		cout << "Avail Insurance for this Passenger?(y/n): ";
		gotoxy (80, 19);
		cout << "Charge will be: ";
		color (10);
		cout << insurance;
		color (14);
		gotoxy (56, 19);
		
			char hold_ins = 'x' ;
		
		while (hold_ins != 'y' && 	hold_ins != 'Y' && 	hold_ins != 'n' && 	hold_ins != 'N' && hold_ins != back_esc)
		{
			hold_ins= getch ();
		}
		cout << hold_ins;
				
		if (hold_ins == 'y' || hold_ins == 'Y')
		{
			want_ins << "Y" << endl;
		}
		
		if (hold_ins == 'N' || hold_ins == 'n')
		{
			want_ins << "N" << endl;
		}
		
		if (hold_ins == back_esc)
		{
			system ("cls");
			passenger_ ();
		}		
		
		if (age_holder [i] <= 10) // MINOR
		{
			discount += 0.05;
			vat = 0.12;
		}
		
		if (age_holder [i] <= 17)
		{
			vat = 0.12;
			minor ++;
		}
		
		if (age_holder [i] >= 65) // SENIOR
		{
			discount += 0.20;
			senior ++;
		}
		
		
		if (age_holder [i] <= 64 && age_holder [i] >= 18)
		{
			vat = 0.12;
			adult ++;
		}
		
        // border or line before individual passenger
	    
	    color(6);
		for (int bord1 = 0; bord1 < 102; bord1++)
	    {
		 gotoxy (11+bord1, 21);
	     cout << char (223);
	    }
	    
	    color(11);
		gotoxy (43, 22);
		color (10);
		cout << "INDIVIDUAL PASSENGER'S CHARGES";
		color (15);
		gotoxy (15, 26);
		cout << "Compartment Charge: ";
		float print_cmp = 0;
		if (hold_cmp == 'y' || hold_cmp  == 'Y')
		{
			print_cmp = compartment;
			cout << print_cmp << " PESOS";
		}
		else
		{
			cout << print_cmp << " PESOS";
		}
		cmp << print_cmp << endl;
		
		gotoxy (15, 27);
		cout <<"Insurance Charge: ";
		float print_ins = 0;
		if (hold_ins == 'y' || hold_ins == 'Y')
		{
			print_ins = insurance;
			cout << print_ins << " PESOS";
		}
		else
		{
			cout << print_ins << " PESOS";
		}
		insu << print_ins << endl;
		
		    color (6);
	          // line
	        for (int i  = 10; i <= 111; i ++)
         	{
		       gotoxy (i+1, 28);
		       cout << char (205);
	        }
	        
	    color(15);   
	    // TEMP CHARGE CONTAINS CLASS & LOCATION FARE
		float temp_total = temp_charge;
		//PASS VALUE TO TEMP TOTAL TO PROCESS THE DISCOUNT & VAT FIRST
		float print_disc = temp_total * discount;
		float print_vat = ((temp_total - (temp_total * discount)) + print_ins + print_cmp) * vat ;
		temp_total = temp_total + print_vat - print_disc;
		//NOW ADD IT AS A WHOLE FOR AN INDIVIDUAL CHARGE
		
		gotoxy (15, 23);
		color (14);
		cout <<"Discount Factor: " << discount * 100 << " %";
		gotoxy (15, 24);
		cout << "Discount: " << print_disc << " PESOS";
		
		DF << discount * 100 << "%" << endl;
		disc <<  print_disc << endl;
		     color (6);
	          // line
	        for (int i  = 10; i <= 111; i ++)
         	{
		       gotoxy (i+1, 25);
		       cout << char (205);
	        }
		
		color(15);
		gotoxy (15, 29);
		cout << "VAT FACTOR: " << vat * 100 << " %";
		gotoxy (15, 30);
		cout << "VAT CHARGE: " << print_vat << " PESOS";
		
		VF << vat * 100 << "%" << endl;
		VAT << print_vat << endl;
		
		      color (6);
	          // line
	        for (int i  = 10; i <= 111; i ++)
         	{
		       gotoxy (i+1, 31);
		       cout << char (205);
	        }
		
		color(15);
		gotoxy (15, 32);
		cout << "CLASS & LOCATION CHARGE: " << temp_charge << " PESOS";
		
		cl_charge << temp_charge << endl;
		
		 color (6);
	          // line
	        for (int i  = 10; i <= 111; i ++)
         	{
		       gotoxy (i+1, 33);
		       cout << char (205);
	        }
	        
	    color(15);   
		gotoxy (15, 34);
		cout << "Total: ";
		color (6);
		temp_total = temp_total + print_ins + print_cmp;
		cout << temp_total;
		color (14);
		cout  << " PESOS";
		
		i_total << temp_total << endl;
        
           color (6);
	          // line
	        for (int i  = 10; i <= 111; i ++)
         	{
		       gotoxy (i+1, 35);
		       cout << char (205);
	        }

		gotoxy (15, 36);
		color (11);
		cout << "Press SPACE BAR to Continue . . .";
		char cont = 'x';
		gotoxy (0,0);
		while (cont != space)
		{
			cont = getch ();
			
			if (cont == back_esc)
			{
				system ("cls");
				passenger_ ();
			}
		}
		
		compile_total += temp_total;
		
	}
	
	if (passenger >= 5)
	{
			grp_disc = 0.05;
	}
	else
	{
		grp_disc = 0.00;
	}
	
	for (int i = 1; i <= passenger; i++)
	{
		
		pas_age << age_holder [i] << endl;
		
	}
	
	name_passenger.close();
	pas_age.close();
	pas_class.close();
	
	// fee processing
	copy_loading ();
	
	if (minor >= 1 && (adult <= 0 && senior <= 0))
	{
		system ("cls");
		color (12);
		merc_name_default ();
		copy_noNotice ();
		color (6);
		for (int i = 24; i <= 100; i++)
		{
				gotoxy (i, 16);
			cout << char (205);
		}
		for (int i = 24; i <= 100; i++)
		{
				gotoxy (i, 19);
			cout << char (205);
		}
		for (int i = 24; i <= 100; i++)
		{
				gotoxy (i, 18);
			cout << "-";
		}
			for (int i = 24; i <= 100; i++)
		{
				gotoxy (i, 20);
			cout << "-";
		}
		for (int i = 24; i <= 100; i++)
		{
				gotoxy (i, 22);
			cout << char (205);
		}
		
		for (int i = 17 ;i<= 22; i++)
		{
			gotoxy (24, i);
			cout << char (186);
		}
		
		for (int i = 17 ;i<= 22; i++)
		{
			gotoxy (100, i);
			cout << char (186);
		}
		
	//  guardian and child
		
	// hair
    color(11);
    for (int i=0;i<=1; i++)
	{
		gotoxy (41,25+i);
		cout << char (219);
		
	}
	
    for (int i=0;i<=5; i++)
	{
		gotoxy (42+i,25);
		cout << char (219);

	}
	
     for (int i=0;i<=1; i++)
	{
		gotoxy (48,25+i);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (49+i,25);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (49+i,26);
		cout << char (219);

	}
     
    for (int i=0;i<=1; i++)
	{
		gotoxy (50+i,27);
		cout << char (219);

	}
  
    // face 
    color(6);
    for (int i=0;i<=5; i++)
	{
		gotoxy (42+i,26);
		cout << char (219);

	}
    
    for (int i=0;i<=8; i++)
	{
		gotoxy (41+i,27);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (41,27+i);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (45+i,28);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (45+i,29);
		cout << char (219);

	}
	
	 for (int i=0;i<=1; i++)
	{
		gotoxy (51,28+i);
		cout << char (219);

	}
	
	
	 for (int i=0;i<=4; i++)
	{
		gotoxy (44+i,30);
		cout << char (219);

	}
	
	color(12);
	for (int i=0;i<=2; i++)
	{
		gotoxy (41+i,30);
		cout << char (219);

	}
	
	
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (49+i,30);
		cout << char (219);

	}

	
	// eyebrow
	color(8);
	for (int i=0;i<=2; i++)
	{
		gotoxy (42+i,28);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (48+i,28);
		cout << char (219);

	}
	
	// eyes 
	color(15);
	for (int i=0;i<=1; i++)
	{
		gotoxy (42+i,29);
		cout << char (219);

	}
	
	for (int i=0;i<=1; i++)
	{
		gotoxy (49+i,29);
		cout << char (219);

	}
	
    color(4);
		for (int i=0;i<=0; i++)
	{
		gotoxy (44+i,29);
		cout << char (219);

	}
	
		for (int i=0;i<=0; i++)
	{
		gotoxy (48+i,29);
		cout << char (219);

	}
	
	// body 
	color(11);
	for(int i=0; i<6; i++)
	{
		gotoxy (38+i,31);
		cout << char (219);	
	}
  
	for(int i=0; i<8; i++)
	{
		gotoxy (37+i,32);
		cout << char (219);	
	}

    for(int i=0; i<8; i++)
	{
		gotoxy (37+i,33);
		cout << char (219);	
	}
	
	  for(int i=0; i<3; i++)
	{
		gotoxy (42+i,34);
		cout << char (219);	
	}
     
     for(int i=0; i<6; i++)
	{
		gotoxy (49+i,31);
		cout << char (219);	
	}
	
	  for(int i=0; i<8; i++)
	{
		gotoxy (48+i,32);
		cout << char (219);	
	}

     for(int i=0; i<8; i++)
	{
		gotoxy (48+i,33);
		cout << char (219);	
	}
	
	  for(int i=0; i<3; i++)
	{
		gotoxy (48+i,34);
		cout << char (219);	
	}
	
	
	color(6);
	 for(int i=0; i<5; i++)
	{
		gotoxy (51+i,34);
		cout << char (219);	
	}
	
	 for(int i=0; i<5; i++)
	{
		gotoxy (37+i,34);
		cout << char (219);	
	}
	
    
	

	color(14);
     for(int i=0; i<5; i++)
	{
		gotoxy (44+i,31);
		cout << char (219);	
	}
	
	for(int i=0; i<3; i++)
	{
		gotoxy (45+i,32);
		cout << char (219);	
	}
    
    	for(int i=0; i<3; i++)
	{
		gotoxy (45+i,33);
		cout << char (219);	
	}

    	for(int i=0; i<3; i++)
	{
		gotoxy (45+i,34);
		cout << char (219);	
	}
        
        
    // child    
    
	 color(11);
    for (int i=0;i<=1; i++)
	{
		gotoxy (71,28+i);
		cout << char (219);
		
	}
	
    for (int i=0;i<=5; i++)
	{
		gotoxy (72+i,28);
		cout << char (219);

	}
	
     for (int i=0;i<=1; i++)
	{
		gotoxy (78,28+i);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (79+i,28);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (79+i,29);
		cout << char (219);

	}
     
    for (int i=0;i<=1; i++)
	{
		gotoxy (80+i,30);
		cout << char (219);

	}
    
    // face 
    color(6);
    
    for (int i=0;i<=5; i++)
	{
		gotoxy (72+i,29);
		cout << char (219);

	}
    
    for (int i=0;i<=8; i++)
	{
		gotoxy (71+i,30);
		cout << char (219);

	}
    
     for (int i=0;i<=2; i++)
	{
		gotoxy (71,30+i);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (75+i,31);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (75+i,32);
		cout << char (219);

	}
	
	 for (int i=0;i<=1; i++)
	{
		gotoxy (81,31+i);
		cout << char (219);

	}
	
	
	 for (int i=0;i<=4; i++)
	{
		gotoxy (74+i,33);
		cout << char (219);

	}
	
	color(12);
	for (int i=0;i<=2; i++)
	{
		gotoxy (71+i,33);
		cout << char (219);

	}
	
	
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (79+i,33);
		cout << char (219);

	}

	
	// eyebrow
	color(8);
	for (int i=0;i<=2; i++)
	{
		gotoxy (72+i,31);
		cout << char (219);

	}
	
	for (int i=0;i<=2; i++)
	{
		gotoxy (78+i,31);
		cout << char (219);

	}
	
	// eyes 
	color(15);
	for (int i=0;i<=1; i++)
	{
		gotoxy (72+i,32);
		cout << char (219);

	}
	
	for (int i=0;i<=1; i++)
	{
		gotoxy (79+i,32);
		cout << char (219);

	}
	
    color(4);
		for (int i=0;i<=0; i++)
	{
		gotoxy (74+i,32);
		cout << char (219);

	}
	
		for (int i=0;i<=0; i++)
	{
		gotoxy (78+i,32);
		cout << char (219);

	}
	
		// body 
	color(11);
	for(int i=0; i<6; i++)
	{
		gotoxy (68+i,34);
		cout << char (219);	
	}
  
	for(int i=0; i<8; i++)
	{
		gotoxy (67+i,35);
		cout << char (219);	
	}

     for(int i=0; i<8; i++)
	{
		gotoxy (78+i,35);
		cout << char (219);	
	}
     
     for(int i=0; i<6; i++)
	{
		gotoxy (79+i,34);
		cout << char (219);	
	}
	
	
		
		
	// tag
		color(14);
     for(int i=0; i<5; i++)
	{
		gotoxy (74+i,34);
		cout << char (219);	
	}
	
	for(int i=0; i<3; i++)
	{
		gotoxy (75+i,35);
		cout << char (219);	
	}
    
    	
		
		
		
		gotoxy (25, 17);
		
		color (10);
		cout << "SORRY, YOU CAN'T RESERVE BECAUSE YOU DON'T HAVE A GUARDIAN TO SUPERVISE YOU";
		gotoxy (25, 21);
		cout << "Please Have atleast A Guardian whose 18 years old or older to supervise you";
		gotoxy (45, 39);
		color (11);
		cout << "Press Enter Key To go Back. . .";
		
		gotoxy (0,0);
		char bak = 'x';
		while (bak != '\r')
		{
			bak = getch ();
		}
		
		passenger_();
	}
	minor_count << minor << endl;
	minor_count.close ();
	
	adult_count << adult << endl;
	adult_count.close ();
	
	senior_count << senior << endl;
	senior_count.close();
	

	
	error_amount:
	system ("cls");
	color (11);
	merc_name_default ();
	color (6);
	border_noNotice ();
	
	char let_hold;
	char ins;
	

		box_credentials ();
		
		float final_total = compile_total - (compile_total * grp_disc);
		
		gotoxy (50, 13);
		color (10);
		cout << "= TOTAL AMOUNT TO PAY = ";
		color (15);
		gotoxy (15, 14);
		cout << "Group Discount Factor: " << grp_disc * 100 << " %";
		GF << grp_disc * 100 << " %" << endl;
		gotoxy (15, 15);
		cout << "Group Discount : " << (compile_total * grp_disc) << " PESOS";
		grp_discount << compile_total * grp_disc << endl;
		
		gotoxy (15, 17);
		cout << "Total Amount [w/o group discount]: " << compile_total << " PESOS"; 
		
		
		pas_class.open("class.txt");
		string hold_class;
		pas_class >> hold_class;
		
		
		// borders in tour info 
		gotoxy (79, 16);
		cout << char (218); 
		
		gotoxy (79, 22);
		cout << char (192); 
		
	    for (int bord = 0; bord < 25; bord++)
	    {
		 gotoxy (80+bord, 16);
	     cout << char (196);
	    }
	    
	    for (int bord = 0; bord < 25; bord++)
	    {
		 gotoxy (80+bord, 22);
	     cout << char (196);
	    }
	    
	     for (int bord = 0; bord < 25; bord++)
	    {
		 gotoxy (80+bord, 18);
	     cout << char (196);
	    }
	    
	     for (int bord = 0; bord < 5; bord++)
	    {
		 gotoxy (79, 17+bord);
	     cout << char (179);
	    }
	    
	      for (int bord = 0; bord < 5; bord++)
	    {
		 gotoxy (105, 17+bord);
	     cout << char (179);
	    }
	    
	    gotoxy (105, 16);
		cout << char (191);
	    
	    gotoxy (105, 22);
		cout << char (217);
		

		
		
		gotoxy (80, 17);
		color (12);
		cout << " - TOUR INFO -";
		gotoxy (80, 19);
		color (15);
		cout << "Class: ";
		color (10);
		if (hold_class == "ORDINARY")
		{
			cout << "ORDINARY";
		}
		if (hold_class == "A")
		{
			cout << "A";
		}
		if (hold_class == "B")
		{
			cout << "B";
		}
		if (hold_class == "C")
		{
			cout << "C";
		}
		
		gotoxy (80, 20);
		color (15);
		if (loc != "LA" && loc != "NUEVA")
		{
			cout << "Location: ";
			color (10);
			cout << loc << endl;
		}
		if (loc == "LA")
		{
			cout << "Location: ";
			color (10);
			cout << "LA UNION" << endl;
		}
		if (loc == "NUEVA")
		{
			cout << "Location: ";
			color (10);
			cout << "NUEVA ECIJA" << endl;
		}
		
		color (15);
		gotoxy (80, 21);
		cout << "Number of Passengers: ";
		color (10);
		cout << passenger;
		
		color (15);
		gotoxy (15, 20);
		cout << "FINAL TOTAL AMOUNT : ";
		color (11);
		cout << final_total; 
		color (15);
		cout << " PESOS";
		gotoxy (15, 21);
		
		cout << "Press any key to proceed to checkout . . .";
		getch ();
		float payment;
		 
		 // line before check out 
		 	for (int i  = 10; i <= 111; i ++)
	       { color(6);
		    gotoxy (i+1, 23);
		    cout << char (220);
	       }
		 
		
		
		gotoxy (15, 25);
		cout << "AMOUNT TO PAY: ";
		color (11);
		cout << final_total;
		color (15);
		cout << " PESOS";
		gotoxy (15, 27);
		back_payment:
		
		cout << "Enter Payment Amount: ";
		color (10);
		char strpay [5] = {'x', 'y', 'z', 'a', 'b'};
		temps = 'x';
	
		for (int ep = 0;;)
		{
			temps = getch ();
			
			if (temps >= '0' && temps <= '9')
			{
			cout << temps;
			strpay [ep] = temps;
			ep ++;
			strpay [ep] = '\0';
			}
		
			if (temps == '\b' && ep >= 1)
			{
				cout << "\b \b";
				ep --;
				strpay [ep] = '\0';
			}
		
			if (temps == '\r' && ep >= 1)
			{
				temps = '\0';
				strpay [ep] = '\0';
				goto exit2_;
			}
		
			if (temps == back_esc)
			{
				system ("cls");
				ticketing ();
			}
		
			if (ep > 6)
			{
				cout << "\b \b";
				gotoxy (14, 28);
				cout << "[SORRY WE CAN'T ACCEPT MILLION VALUES OR HIGHER]";
				gotoxy (43, 27);
				ep --;
				strpay [ep] = '\0';	
			}
		
	}
	exit2_:
		fstream paid ("paid.txt", ios :: out | ios :: in | ios :: trunc);
		paid << strpay << endl;
		
		istringstream (strpay) >> payment;
		if (payment < final_total)
		{
			gotoxy (14, 26);
			cout << "[PLEASE ENTER EXACT OR HIGHER AMOUNT]";
			Sleep (500);
			gotoxy (43, 27);
			goto error_amount;
		}
		gotoxy (15, 31);
		color (14);
		cout << "Your Change is: " << payment - final_total << " PESOS";
		
		float hold_change = payment - final_total;
		
		fstream change ("change.txt", ios :: out | ios :: in | ios :: trunc);
		change << hold_change << endl;
		change.close ();
		
		
		gotoxy (15, 33);
		color (6);
		cout << "Thank you for availing our services, enjoy your trip passenger!";
		
		fstream total ("total.txt", ios :: out | ios :: in | ios :: trunc);
		total << final_total << endl;
		total.close();
		
		fstream status ("status.txt", ios :: out | ios :: in | ios :: trunc);
		status << "PAID" << endl;
		status.close();
		
		
		// borders for notes again
	    color(12);
		gotoxy (12, 39);
		cout << "If you choose to pick TOUR again, all of the history will be deleted  ";

		
		gotoxy (12, 41);
		cout << "if you choose to reserve again the recent reservation you made will be deleted ";
		
		color(7);
		gotoxy (11, 38);
		cout << char (218);
		
		gotoxy (11, 42);
		cout << char (192);
		
		gotoxy (11, 40);
		cout << char (179);
		
		gotoxy (11, 39);
		cout << char (179);
		
		gotoxy (11, 41);
		cout << char (179);
		
		// low
		gotoxy (92, 38);
		cout << char (191);
		
		gotoxy (92, 42);
		cout << char (217);
		
		gotoxy (92, 40);
		cout << char (179);
		
		gotoxy (92, 39);
		cout << char (179);
		
		gotoxy (92, 41);
		cout << char (179);
		
		for(int ch=0; ch<80; ch++)
		{
		   gotoxy (12+ch, 38);
		   cout << char (196);			
		}
		
		for(int ch=0; ch<80; ch++)
		{
		   gotoxy (12+ch, 42);
		   cout << char (196);			
		}
		
			for(int ch=0; ch<80; ch++)
		{
		   gotoxy (12+ch, 40);
		   cout << char (196);			
		}
		
		
		gotoxy (15, 35);
		color (14);
		cout << "Do you want to reserve again?(y/n): ";
		char reserve = 'x';
	
		while (reserve != 'y' && reserve != 'Y' && reserve != 'n' && reserve != 'N')
		{
			reserve = getch ();
		}
		
		cout << reserve;
		
		if (reserve == 'y' || reserve == 'Y')
		{
			manila_ui ();
		}
		
		if (reserve == 'n' || reserve == 'N')
		{
			bridge ();
		}

}

void bridge ()
{
	fstream status ("status.txt");
	string hold_stat;
	status >> hold_stat;
	
	if (hold_stat != "PAID")
	{
	fstream name_passenger ("name_passenger.txt", ios :: out | ios :: in | ios :: trunc);
	fstream age ("age.txt", ios :: out | ios :: in | ios :: trunc);
	fstream location ("location.txt", ios :: out | ios :: in | ios :: trunc);
	fstream pas_class ("class.txt", ios :: out | ios :: in | ios :: trunc);
	fstream trip ("trip.txt", ios :: out | ios :: in | ios :: trunc);
	fstream total ("total.txt", ios :: out | ios :: in | ios :: trunc);
	fstream status ("status.txt", ios :: out | ios :: in | ios :: trunc);
		
	fstream want_cmp ("want_cmp.txt", ios :: out | ios :: in | ios :: trunc);
	fstream cmp ("cmp.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream want_ins ("want_ins.txt", ios :: out | ios :: in | ios :: trunc);
	fstream insu ("insu.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream DF ("DF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream disc ("disc.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream VF ("VF.txt", ios :: out | ios :: in | ios :: trunc);
	fstream VAT ("VAT.txt", ios :: out | ios :: in | ios :: trunc); 
	
	fstream i_total ("i_total.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream cl_charge  ("cl_charge.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream GF  ("GF.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream grp_discount  ("grp_discount.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream paid ("paid.txt", ios :: out | ios :: in | ios :: trunc);

	 
	fstream change ("change.txt", ios :: out | ios :: in | ios :: trunc);
	
	fstream num_passengers ("num_passengers.txt", ios :: out | ios :: in | ios :: trunc);
	fstream minor_count ("minor_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream senior_count ("senior_count.txt", ios :: out | ios :: in | ios :: trunc);
	fstream adult_count ("adult_count.txt", ios :: out | ios :: in | ios :: trunc);
	
	
	name_passenger.close ();
	age.close ();
	location.close ();
	pas_class.close ();
	trip.close ();
	total.close ();
	status.close ();
	}
	historia_reiss ();
}

void box_credentials ()
{
	color (6);
	// upper
	for (int i  = 10; i <= 113; i ++)
	{
		gotoxy (i, 12);
		cout << char (220);
	}
	// lower
	for (int i  = 10; i <= 113; i ++)
	{
		gotoxy (i, 37);
		cout << char (220);
	}
	
	for (int i  = 13; i <= 37 ; i ++)
	{
		gotoxy (10, i);
		cout << char (219);
	}
	
	for (int i  = 13; i <= 37 ; i ++)
	{
		gotoxy (113, i);
		cout << char (219);
	}
}

 // where users pick a minigame
void minigame ()
{
	system ("cls");
	border ();

	
	 
	int hold_x = 16;
	int hold_y = 9;
	int hold_yy = 4;
	color (11);
	gotoxy (hold_x, hold_yy);
	cout << " _____  _______   ___    _    _         _____          _____    _____    __   __   ______ ";
	gotoxy (hold_x, hold_yy+1);
	cout << "(_____)(_______)_(___)_ (_)  (_)       (_____)        (_____)  (_____)  (__)_(__) (______)";
	gotoxy (hold_x, hold_yy+2);
	cout << "(_)__(_)  (_)  (_)   (_)(_)_(_)       (_)___(_)      (_)  ___ (_)___(_)(_) (_) (_)(_)__   ";
	gotoxy (hold_x, hold_yy+3);
	cout << "(_____)   (_)  (_)    _ (____)        (_______)      (_) (___)(_______)(_) (_) (_)(____)  ";
	gotoxy (hold_x, hold_yy+4);
	cout << "(_)     __(_)__(_)___(_)(_) (_)       (_)   (_)      (_)___(_)(_)   (_)(_)     (_)(_)____ ";
	gotoxy (hold_x, hold_yy+5);
	cout << "(_)    (_______) (___)  (_)  (_)      (_)   (_)       (_____) (_)   (_)(_)     (_)(______)";
	
	
	// rock paper ssci
	color(14);
	gotoxy(18,20);
	cout << char (201);
	
    gotoxy(18,24);
	cout << char (200);
	
	for (int gam=0; gam<3; gam++)
	{
	gotoxy(18,21+gam);
	cout << char (186);
	}
	
	for (int gam=0; gam<3; gam++)
	{
	gotoxy(24,21+gam);
	cout << char (186);
	}

	for (int b=0; b<5; b++)
	{
	gotoxy(19+b,20);
	cout << char (205);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(19+b,24);
	cout << char (205);
	}
	
	gotoxy(24,20);
	cout << char (187);
	
	gotoxy(24,24);
	cout << char (188);
	
	
    // sci right side
    
    gotoxy(39,21);
	cout << char (201);
    
    gotoxy(39,22);
	cout << char (200);
    
    gotoxy(40,21);
	cout << char (187);
    
    gotoxy(40,22);
	cout << char (188);
    
    // left side
    gotoxy(40,23);
	cout << char (201);
	
	gotoxy(40,24);
	cout << char (200);
	
	gotoxy(41,23);
	cout << char (187);
    
    gotoxy(41,24);
	cout << char (188);
	
	gotoxy(41,22);
	cout << char (187);
	
	gotoxy(42,21);
	cout << char (201);
	
	gotoxy(43,20);
	cout << char (201);
	
	gotoxy(43,23);
	cout << char (188);
	
	gotoxy(44,22);
	cout << char (188);
	
	// inside rps
	color(4);
	
	for (int b=0; b<1; b++)
	{
	gotoxy(42+b,22);
	cout << char (219);
	}
	
	for (int b=0; b<1; b++)
	{
	gotoxy(43+b,22);
	cout << char (219);
	}
	
	for (int b=0; b<1; b++)
	{
	gotoxy(41+b,21);
	cout << char (219);
	}
	
	for (int b=0; b<1; b++)
	{
	gotoxy(43+b,21);
	cout << char (219);
	}
	
	for (int b=0; b<1; b++)
	{
	gotoxy(44+b,20);
	cout << char (219);
	}
	
	for (int b=0; b<1; b++)
	{
	gotoxy(42+b,23);
	cout << char (219);
	}
	
	
	for (int b=0; b<37; b++)
	{
	gotoxy(13+b,18);
	cout << char (219);
	}
	
		for (int b=0; b<37; b++)
	{
	gotoxy(13+b,19);
	cout << char (219);
	}
	
		for (int b=0; b<37; b++)
	{
	gotoxy(13+b,25);
	cout << char (219);
	}
	
		for (int b=0; b<37; b++)
	{
	gotoxy(13+b,26);
	cout << char (219);
	}
	
		for (int b=0; b<37; b++)
	{
	gotoxy(13+b,27);
	cout << char (219);
	}
	
		for (int b=0; b<37; b++)
	{
	gotoxy(13+b,29);
	cout << char (219);
	}
	
		for (int b=0; b<37; b++)
	{
	gotoxy(13+b,28);
	cout << char (219);
	}
	
	
	  for (int b=0; b<37; b++)
	    { 
	      gotoxy(13+b,28);
	      cout << char (219);
	    }
	
	// side 
		for (int b=0; b<5; b++)
	{
	gotoxy(13+b,20);
	cout << char (219);
	}
	
		for (int b=0; b<5; b++)
	{
	gotoxy(13+b,21);
	cout << char (219);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(13+b,22);
	cout << char (219);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(13+b,23);
	cout << char (219);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(13+b,24);
	cout << char (219);
	}
	
	for (int b=0; b<18; b++)
	{
	gotoxy(25+b,20);
	cout << char (219);
	}
	
		for (int b=0; b<5; b++)
	{
	gotoxy(25+b,21);
	cout << char (219);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(34+b,21);
	cout << char (219);
	}
		for (int b=0; b<4; b++)
	{
	gotoxy(25+b,22);
	cout << char (219);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(25+b,23);
	cout << char (219);
	}
	
	for (int b=0; b<15; b++)
	{
	gotoxy(25+b,24);
	cout << char (219);
	}
	
		for (int b=0; b<5; b++)
	{
	gotoxy(34+b,22);
	cout << char (219);
	}
	
	for (int b=0; b<6; b++)
	{
	gotoxy(34+b,23);
	cout << char (219);
	}
	
	for (int b=0; b<5; b++)
	{
	gotoxy(34+b,24);
	cout << char (219);
	}
	
	// last side
	
		for (int b=0; b<5; b++)
	{
	gotoxy(45+b,20);
	cout << char (219);
	}
	
	for (int b=0; b<6; b++)
	{
	gotoxy(44+b,21);
	cout << char (219);
	}
	
		for (int b=0; b<6; b++)
	{
	gotoxy(45+b,22);
	cout << char (219);
	}
	
		for (int b=0; b<6; b++)
	{
	gotoxy(44+b,23);
	cout << char (219);
	}
	
		for (int b=0; b<8; b++)
	{
	gotoxy(42+b,24);
	cout << char (219);
	}
	
	// inside 
	color(15);
		for (int b=0; b<5; b++)
	{
	gotoxy(19+b,21);
	cout << char (178);
	}
	
		for (int b=0; b<5; b++)
	{
	gotoxy(19+b,22);
	cout << char (178);
	}
	
		for (int b=0; b<5; b++)
	{
	gotoxy(19+b,23);
	cout << char (178);
	}
    
    
    // inside rock 
    color(7);
    
   
    
    for(int ro=0; ro<6; ro++)
    {
	 gotoxy(29+ro,21);
	 cout << char (177);
    }

     for(int ro=0; ro<5; ro++)
    {
	 gotoxy(29+ro,22);
	 cout << char (177);
    }
    
     for(int ro=0; ro<6; ro++)
    {
	 gotoxy(29+ro,23);
	 cout << char (177);
    }
  
    
     
	
	color (11);
	gotoxy (hold_x+5, hold_y+19);
	cout << "[ROCK PAPER SCISSOR]";
			
	color(14);
	// numberss
	gotoxy(78,19);
    cout << " 1  2  3  4  5  6 7  8  9  10 ";
    

    for(int num=0; num<3; num++)
    {
    	gotoxy(90+num,22);
    	cout << char (220);
	}

    for(int num=0; num<3; num++)
    {
    	gotoxy(94+num,22);
    	cout << char (220);
	}
	
	 for(int num=0; num<3; num++)
    {
    	gotoxy(93+num,23);
    	cout << char (220);
	}
	
	 for(int num=0; num<3; num++)
    {
    	gotoxy(92+num,24);
    	cout << char (220);
	}
	
	
	 for(int num=0; num<3; num++)
    {
    	gotoxy(92+num,21);
    	cout << char (220);
	}
	
	
	
	 for(int num=0; num<3; num++)
    {
    	gotoxy(92+num,25);
    	cout << char (220);
	}
	
	 for(int num=0; num<1; num++)
    {
    	gotoxy(93+num,26);
    	cout << char (220);
	}
	
	
	// inside 
	color(1);
	
	for (int b=0; b<36; b++)
	{
	gotoxy(75+b,18);
	cout << char (219);
	}
	
	for (int b=0; b<4; b++)
	{
	gotoxy(75+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(80+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(83+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(86+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(89+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(92+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<1; b++)
	{
	gotoxy(95+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(97+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(100+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<2; b++)
	{
	gotoxy(103+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<4; b++)
	{
	gotoxy(107+b,19);
	cout << char (219);
	}
	
	for (int b=0; b<36; b++)
	{
	gotoxy(75+b,20);
	cout << char (219);
	}
	
	for (int b=0; b<17; b++)
	{
	gotoxy(75+b,21);
	cout << char (219);
	}
	
		for (int b=0; b<17; b++)
	{
	gotoxy(95+b,21);
	cout << char (219);
	}
	
	for (int b=0; b<15; b++)
	{
	gotoxy(75+b,22);
	cout << char (219);
	}
	
		for (int b=0; b<14; b++)
	{
	gotoxy(97+b,22);
	cout << char (219);
	}
	
		for (int b=0; b<18; b++)
	{
	gotoxy(75+b,23);
	cout << char (219);
	}
	
	
		for (int b=0; b<15; b++)
	{
	gotoxy(96+b,23);
	cout << char (219);
	}
	 
		for (int b=0; b<17; b++)
	{
	gotoxy(75+b,24);
	cout << char (219);
	} 
	
		for (int b=0; b<16; b++)
	{
	gotoxy(95+b,24);
	cout << char (219);
	}
	
	for (int b=0; b<17; b++)
	{
	gotoxy(75+b,25);
	cout << char (219);
	} 
	
    for (int b=0; b<16; b++)
	{
	gotoxy(95+b,25);
	cout << char (219);
	}

    for (int b=0; b<18; b++)
	{
	gotoxy(75+b,26);
	cout << char (219);
	} 
    
    for (int b=0; b<17; b++)
	{
	gotoxy(94+b,26);
	cout << char (219);
	} 
    
    
	for (int b=0; b<36; b++)
	{
	gotoxy(75+b,27);
	cout << char (219);
	}
    
    for (int b=0; b<36; b++)
	{
	gotoxy(75+b,28);
	cout << char (219);
	}
	
	for (int b=0; b<36; b++)
	{
	gotoxy(75+b,29);
	cout << char (219);
	}
	
	



	int holdd = 61;
    
 

	color (11);
	gotoxy (hold_x+67, hold_y+19);
	cout << "[RANDOM NUMBER GUESS]";
	color (15);
	
	
	int x;
	for ( x = 1;;)
	{
		// left  box
		color (15);
	
		for (int i = 13; i <= 50; i++)
		{
			gotoxy (i, 17);
			cout << char (219);
		}
	
		for (int i = 12; i <= 50; i++)
		{
			gotoxy (i, 30);
			cout << char (219);
		}
	
		for (int i = 17; i <= 29; i++)
		{
			gotoxy (12, i);
			cout << char (219);
		}
	
		for (int i = 17; i <= 29; i++)
		{
			gotoxy (50, i);
			cout << char (219);
		}
		
		// right box
	
		for (int i = 74; i <= 111; i++)
		{
			gotoxy (i, 17);
			cout << char (219);
		}
	
		for (int i = 74; i <= 111; i++)
		{
			gotoxy (i, 30);
			cout << char (219);
		}
	
		for (int i = 17; i <= 29; i++)
		{
			gotoxy (74, i);
			cout << char (219);
		}
		
		for (int i = 17; i <= 29; i++)
		{
			gotoxy (111, i);
			cout << char (219);
		}
		
		
		if (x >= 3)
		{
			x = 1;
		}
		
		if (x <= 0)
		{
			x = 2;
		}
		
		
		if (x == 1)
		{
			color (10);
			
				for (int i = 13; i <= 50; i++)
				{
					gotoxy (i, 17);
					cout << char (219);
				}
	
			for (int i = 12; i <= 50; i++)
			{
				gotoxy (i, 30);
				cout << char (219);
			}	
	
			for (int i = 17; i <= 29; i++)
			{
				gotoxy (12, i);
				cout << char (219);
			}
	
			for (int i = 17; i <= 29; i++)
			{
				gotoxy (50, i);
				cout << char (219);
			}
		}
		
		
			if (x == 2)
			{
				color (10);
				
			for (int i = 74; i <= 111; i++)
			{
				gotoxy (i, 17);
				cout << char (219);
			}
	
			for (int i = 74; i <= 111; i++)
			{
				gotoxy (i, 30);
				cout << char (219);
			}
	
			for (int i = 17; i <= 29; i++)
			{
				gotoxy (74, i);
				cout << char (219);
			}
		
			for (int i = 17; i <= 29; i++)
			{
				gotoxy (111, i);
				cout << char (219);
			}
			
			}
		
		gotoxy (0,0);
		color (0);
		char temp = 'x';
		while (temp != right_arrow && temp != left_arrow && temp != back_esc && temp != '\r')
		{
			temp = getch ();
		}
	
		if (temp == right_arrow)
		{
			x++;

		}
		
		if (temp == left_arrow)
		{
			x--;
		}
		
		if (temp == '\r')
		{
			goto exit_loop;
		}
		
		if (temp == back_esc)
		{
			system ("cls");
			mainframe ();
		}
	}
	
	exit_loop:
		
		if (x == 1)
		{
			system ("cls");
			rps ();
		}
		
		
		if (x == 2)
		{
			system ("cls");
			rng ();
		}
	
	
}

// rock paper scissor
void rps ()
{
	color (10);
	
	
	//scissor move
	int mod_x = -6;
	int mod_y = 7;
	//rock move
	int mod_x1 = -4;
	int mod_y1 = 16;
	//paper move
	int mod_x2 = -50;
	int mod_y2 = 16;
	
	 
	int w;
	for (w = 3;;)
	{
		system ("cls");
		color (4);
		copy_noNotice ();
		      
		    // borders for intsruction
		    
		    color(7);
		    gotoxy(37,11);
		    cout << char (201);
		    
		    gotoxy(37,15);
		    cout << char (200);
		    
		     for (int v=0; v<46; v++)
		    {
		      gotoxy(38+v,11);
		      cout << char (205);	
			}
			
			 for (int v=0; v<46; v++)
		    {
		      gotoxy(38+v,15);
		      cout << char (205);	
			}
		    
		    for (int v=0; v<3; v++)
		    {
		      gotoxy(37,12+v);
		      cout << char (186);	
			}
		 
		     for (int v=0; v<3; v++)
		    {
		      gotoxy(84,12+v);
		      cout << char (186);	
			}
			
		    gotoxy(84,11);
		    cout << char (187);
		   
		    gotoxy(84,15);
		    cout << char (188); 
		     
			color (14);
			gotoxy (33+6, 12);
			cout << "Use LEFT/RIGHT arrow to simulate your choices";
			gotoxy (33+15, 13);
			cout << "Use ESC arrow to return";
			gotoxy (35+5, 14);
			cout << "Press Enter to confirm your choice weapon";
	
	
	int hold_x = 7;
	int hold_y = 9;
	int hold_yy=3;
	
	gotoxy (hold_x+5, hold_yy);
	color (6);
	cout << " _____  _______   ___    _    _      _____      _       _  ______   _____   _____    _____   _     _ ";
	gotoxy (hold_x+5, hold_yy+1);
	cout << "(_____)(_______)_(___)_ (_)  (_)    (_____)    (_)  _  (_)(______) (_____) (_____)  (_____) (_)   (_)";
	gotoxy (hold_x+5, hold_yy+2);
	cout << "(_)__(_)  (_)  (_)   (_)(_)_(_)    (_)___(_)   (_) (_) (_)(_)__   (_)___(_)(_)__(_)(_)   (_)(__)_ (_)";
	gotoxy (hold_x+5, hold_yy+3); 
	cout << "(_____)   (_)  (_)    _ (____)     (_______)   (_) (_) (_)(____)  (_______)(_____) (_)   (_)(_)(_)(_)";
	gotoxy (hold_x+5, hold_yy+4);
	cout << "(_)     __(_)__(_)___(_)(_) (_)    (_)   (_)   (_)_(_)_(_)(_)____ (_)   (_)(_)     (_)___(_)(_)  (__)";
	gotoxy (hold_x+5, hold_yy+5);
	cout << "(_)    (_______) (___)  (_)  (_)   (_)   (_)    (__) (__) (______)(_)   (_)(_)      (_____) (_)   (_)";
	

  
  	color (9);
  	gotoxy (hold_x+43, hold_y+12);
	cout << " _     _   _____  ";
	gotoxy (hold_x+43, hold_y+13);
	cout << "(_)   (_) (_____) ";
	gotoxy (hold_x+43, hold_y+14);
	cout << "(_)   (_)(_)___   ";
	gotoxy (hold_x+43, hold_y+15); 
	cout << "(_)   (_)  (___)_ ";
	gotoxy (hold_x+43, hold_y+16);
	cout << "(_)_ (_)   ____(_)";
	gotoxy (hold_x+43, hold_y+17);
	cout << "  (___)   (_____) ";
	
	color (8);

  	gotoxy (hold_x+80, hold_y+12);
	cout << "   __   ";
	gotoxy (hold_x+80, hold_y+13);
	cout << " _(__)_ ";
	gotoxy (hold_x+80, hold_y+14);
	cout << "(_)  (_)";
	gotoxy (hold_x+80, hold_y+15); 
	cout << "    (_) ";
	gotoxy (hold_x+80, hold_y+16);
	cout << "    _   ";
	gotoxy (hold_x+80, hold_y+17);
	cout << "   (_)  ";
  
  
  
  
  
		
		if (w >= 4)
		{
			w = 1;
		}
		
		if (w <= 0)
		{
			w = 3;
		}
		
if (w == 3)
{
	int s=219;	
  // scissors
  gotoxy (22, 29);
  color (15);
  cout << "S  C  I  S  S  O  R";

 color(12);
 for(int i=0; i<=2;i++)
 {  
    gotoxy(36+i+mod_x,15 + mod_y);
 	cout << char (s);
 }

 for(int i=0; i<=3;i++)
 {  
    gotoxy(39+i+mod_x,15+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(36+i+mod_x,17+ mod_y);
 	cout << char (s);
 }
 
 
 color(6);
 for(int i=0; i<=1;i++)
 {  
    gotoxy(38+i+mod_x,15+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(36+i+mod_x,16+ mod_y);
 	cout << char (s);
 }


 color(12);
 gotoxy(38+mod_x,14+ mod_y);
 	cout << char (s);
 
  gotoxy(39+mod_x,14+ mod_y);
 	cout << char (s);
  
   gotoxy(38+mod_x,13+ mod_y);
 	cout << char (s);
 
 gotoxy(39+mod_x,13+ mod_y);
 	cout << char (s);
 
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(40+mod_x,12+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(41+mod_x,12+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(42+mod_x,11+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(43+mod_x,11+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=2;i++)
 {  
    gotoxy(42+i+mod_x,14+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=2;i++)
 {  
    gotoxy(44+i+mod_x,13+ mod_y);
 	cout << char (s);
 }


  for(int i=0; i<=2;i++)
 {  
    gotoxy(46+i+mod_x,12+ mod_y);
 	cout << char (s);
 }

color(8);
for(int i=0; i<=1;i++)
 {  
    gotoxy(38+i+mod_x,16+ mod_y);
 	cout << char (s);
 }
 
 color(6);
for(int i=0; i<=1;i++)
 {  
    gotoxy(40+i+mod_x,16+ mod_y);
 	cout << char (s);
 }



 color(4);
 
 for(int i=0; i<=3;i++)
 {  
    gotoxy(30+i+mod_x,14+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(28+mod_x,15+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(34+mod_x,15+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(35+mod_x,15+i+ mod_y);
 	cout << char (s);
 }
 for(int i=0; i<=1;i++)
 {  
    gotoxy(29+mod_x,15+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=3;i++)
 {  
    gotoxy(30+i+mod_x,17+ mod_y);
 	cout << char (s);
 }

for(int i=0; i<=1;i++)
 {  
    gotoxy(36+mod_x,18+i+ mod_y);
 	cout << char (s);
 }

for(int i=0; i<=1;i++)
 {  
    gotoxy(37+mod_x,18+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(42+mod_x,18+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(43+mod_x,18+i+ mod_y);
 	cout << char (s);
 }
 
 for(int i=0; i<=3;i++)
 {  
    gotoxy(38+i+mod_x,17+ mod_y);
 	cout << char (s);
 }

 for(int i=0; i<=3;i++)
 {  
    gotoxy(38+i+mod_x,20+ mod_y);
 	cout << char (s);
 }
}

// end of scissor ui

	if (w == 1)
	{
		//rock
		int r=219;
		gotoxy (25, 29);
  		color (15);
  		cout << "R  O  C  K";
	
	   color(6);
      for (int i=0; i<=8; i++) 
    {   gotoxy(29+i+mod_x1,2+mod_y1);
    	cout << char (r);
	}
	  
	

	// borders 
     for (int i=0; i<=2; i++) 
    {   gotoxy(27+i+mod_x1,3+mod_y1);
    	cout << char (r);
	}
	
	// borders 
     for (int i=0; i<=4; i++) 
    {   gotoxy(37+i+mod_x1,3+mod_y1);
    	cout << char (r);
	}
	// inside 
	color(7);
	for (int i=0; i<=6; i++) 
    {   gotoxy(30+i+mod_x1,3+mod_y1);
    	cout << char (r);
	}
	
    
    // borders
    color(6);
    for (int i=0; i<=3; i++) 
    {   gotoxy(25+i+mod_x1,4+mod_y1);
    	cout << char (r);
	}
    
    // borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(41+i+mod_x1,4+mod_y1);
    	cout << char (r);
	}
	
	// inside 
	color(7);
	for (int i=0; i<=11; i++) 
    {   gotoxy(29+i+mod_x1,4+mod_y1);
    	cout << char (r);
	}
	
   
    color(6);
    // borders
    for (int i=0; i<=3; i++) 
    {   gotoxy(24+i+mod_x1,5+mod_y1);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=3; i++) 
    {   gotoxy(44+i+mod_x1,5+mod_y1);
    	cout << char (r);
	}
	
	// inside 
	color(7);
	for (int i=0; i<=15; i++) 
    {   gotoxy(28+i+mod_x1,5+mod_y1);
    	cout << char (r);
	}
	
     color(6);
    // borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(22+i+mod_x1,6+mod_y1);
    	cout << char (r);
	}
	// borders
	 for (int i=0; i<=3; i++) 
    {   gotoxy(45+i+mod_x1,6+mod_y1);
    	cout << char (r);
	}

    // inside 
	color(7);
	for (int i=0; i<=17; i++) 
    {   gotoxy(27+i+mod_x1,6+mod_y1);
    	cout << char (r);
	}

   
     color(6);
    // borders
    for (int i=0; i<=5; i++) 
    {   gotoxy(21+i+mod_x1,7+mod_y1);
    	cout << char (r);
	}
	
	
	// borders
	for (int i=0; i<=4; i++) 
    {   gotoxy(45+i+mod_x1,7+mod_y1);
    	cout << char (r);
	}
	
	// inside 
	color(7);
	for (int i=0; i<=17; i++) 
    {   gotoxy(27+i+mod_x1,7+mod_y1);
    	cout << char (r);
	}
    
   
   color(6);
    // borders
    for (int i=0; i<=7; i++) 
    {   gotoxy(20+i+mod_x1,8+mod_y1);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(46+i+mod_x1,8+mod_y1);
    	cout << char (r);
	}
	
	// inside
		color(7);
	for (int i=0; i<=19; i++) 
    {   gotoxy(26+i+mod_x1,8+mod_y1);
    	cout << char (r);
	}
   
   
    
    color(6);
    // borders
    for (int i=0; i<=5; i++) 
    {   gotoxy(19+i+mod_x1,9+mod_y1);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=3; i++) 
    {   gotoxy(47+i+mod_x1,9+mod_y1);
    	cout << char (r);
	}
	
	// inside
		color(7);
	for (int i=0; i<=21; i++) 
    {   gotoxy(25+i+mod_x1,9+mod_y1);
    	cout << char (r);
	}

    
    
     color(6);
    // borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(19+i+mod_x1,10+mod_y1);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(45+i+mod_x1,10+mod_y1);
    	cout << char (r);
	}
	
	// inside
		color(7);
	for (int i=0; i<=21; i++) 
    {   gotoxy(24+i+mod_x1,10+mod_y1);
    	cout << char (r);
	}


     color(6);
    // borders
    for (int i=0; i<=27; i++) 
    {   gotoxy(20+i+mod_x1,11+mod_y1);
    	cout << char (r);
	}
	}


	if (w == 2)
	{
		int p=219;
		gotoxy (24, 29);
  		color (15);
  		cout << "P  A  P  E  R";
	// paper
	
	
	//border
	color(11);
	for(int i=0; i<=14; i++)
	{	gotoxy(76+i+mod_x2,2 +mod_y2);
		cout << char (p);
	}

	
	//border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(73+i+mod_x2,3+mod_y2);
		cout << char (p);
	}
	
	//border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(89+i+mod_x2,3+mod_y2);
		cout << char (p);
	}
	
	//inside
	color(15);
	for(int i=0; i<=11; i++)
	{	gotoxy(77+i+mod_x2,3+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=17; i++)
	{	gotoxy(74+i+mod_x2,4+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=2; i++)
	{	gotoxy(74+i+mod_x2,5+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=2; i++)
	{	gotoxy(89+i+mod_x2,5+mod_y2);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=11; i++)
	{	gotoxy(77+i+mod_x2,5+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=18; i++)
	{	gotoxy(73+i+mod_x2,6+mod_y2);
		cout << char (p);
	}
	
	
	// border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(73+i+mod_x2,7+mod_y2);
		cout << char (p);
	}
	
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(87+i+mod_x2,7+mod_y2);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=9; i++)
	{	gotoxy(77+i+mod_x2,7+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=18; i++)
	{	gotoxy(72+i+mod_x2,8+mod_y2);
		cout << char (p);
	}
	
	
	// border
	color(11);
	for(int i=0; i<=4; i++)
	{	gotoxy(72+i+mod_x2,9+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=4; i++)
	{	gotoxy(86+i+mod_x2,9+mod_y2);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=8; i++)
	{	gotoxy(77+i+mod_x2,9+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=5; i++)
	{	gotoxy(71+i+mod_x2,10+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(88+i+mod_x2,10+mod_y2);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=10; i++)
	{	gotoxy(77+i+mod_x2,10+mod_y2);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=21; i++)
	{	gotoxy(69+i+mod_x2,11+mod_y2);
		cout << char (p);
	}
	}
		char temp = 'x';
		while (temp != back_esc && temp != right_arrow && temp != left_arrow && temp != '\r')
		{
			temp = getch ();
		}
		 
		if (temp == back_esc)
		{
			minigame ();
		}
		if (temp == right_arrow)
		{
			w++;
		}
		
		if (temp == left_arrow)
		{
			w--;
		}
		
		if (temp == back_esc)
		{
			system ("cls");
			mainframe ();
		}
		
		if (temp == '\r')
		{
			goto exit_loop;
		}
		
	}
	
	exit_loop:
	
	// ai turn
	int mod_x1_ai = 55;
	int mod_y1_ai = 16;
	
	int mod_x2_ai = 55-41;
	int mod_y2_ai = 16;
	
	int mod_x_ai = 54;
	int mod_y_ai = 7;
	
	srand (time(0));
	int ai = 1 + rand () % 3;
	
	// if AI is 1 then it is rock
	if (ai == 1)
	{
	
		// rock
		//rock
		int r=219;
		gotoxy (58+27, 29);
  		color (15);
  		cout << "R  O  C  K";
	
	   color(6);
      for (int i=0; i<=8; i++) 
    {   gotoxy(29+i+mod_x1_ai,2+mod_y1_ai);
    	cout << char (r);
	}
	  
	

	// borders 
     for (int i=0; i<=2; i++) 
    {   gotoxy(27+i+mod_x1_ai,3+mod_y1_ai);
    	cout << char (r);
	}
	
	// borders 
     for (int i=0; i<=4; i++) 
    {   gotoxy(37+i+mod_x1_ai,3+mod_y1_ai);
    	cout << char (r);
	}
	// inside 
	color(7);
	for (int i=0; i<=6; i++) 
    {   gotoxy(30+i+mod_x1_ai,3+mod_y1_ai);
    	cout << char (r);
	}
	
    
    // borders
    color(6);
    for (int i=0; i<=3; i++) 
    {   gotoxy(25+i+mod_x1_ai,4+mod_y1_ai);
    	cout << char (r);
	}
    
    // borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(41+i+mod_x1_ai,4+mod_y1_ai);
    	cout << char (r);
	}
	
	// inside 
	color(7);
	for (int i=0; i<=11; i++) 
    {   gotoxy(29+i+mod_x1_ai,4+mod_y1_ai);
    	cout << char (r);
	}
	
   
    color(6);
    // borders
    for (int i=0; i<=3; i++) 
    {   gotoxy(24+i+mod_x1_ai,5+mod_y1_ai);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=3; i++) 
    {   gotoxy(44+i+mod_x1_ai,5+mod_y1_ai);
    	cout << char (r);
	}
	
	// inside 
	color(7);
	for (int i=0; i<=15; i++) 
    {   gotoxy(28+i+mod_x1_ai,5+mod_y1_ai);
    	cout << char (r);
	}
	
     color(6);
    // borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(22+i+mod_x1_ai,6+mod_y1_ai);
    	cout << char (r);
	}
	// borders
	 for (int i=0; i<=3; i++) 
    {   gotoxy(45+i+mod_x1_ai,6+mod_y1_ai);
    	cout << char (r);
	}

    // inside 
	color(7);
	for (int i=0; i<=17; i++) 
    {   gotoxy(27+i+mod_x1_ai,6+mod_y1_ai);
    	cout << char (r);
	}

   
     color(6);
    // borders
    for (int i=0; i<=5; i++) 
    {   gotoxy(21+i+mod_x1_ai,7+mod_y1_ai);
    	cout << char (r);
	}
	
	
	// borders
	for (int i=0; i<=4; i++) 
    {   gotoxy(45+i+mod_x1_ai,7+mod_y1_ai);
    	cout << char (r);
	}
	
	// inside 
	color(7);
	for (int i=0; i<=17; i++) 
    {   gotoxy(27+i+mod_x1_ai,7+mod_y1_ai);
    	cout << char (r);
	}
    
   
   color(6);
    // borders
    for (int i=0; i<=7; i++) 
    {   gotoxy(20+i+mod_x1_ai,8+mod_y1_ai);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(46+i+mod_x1_ai,8+mod_y1_ai);
    	cout << char (r);
	}
	
	// inside
		color(7);
	for (int i=0; i<=19; i++) 
    {   gotoxy(26+i+mod_x1_ai,8+mod_y1_ai);
    	cout << char (r);
	}
   
   
    
    color(6);
    // borders
    for (int i=0; i<=5; i++) 
    {   gotoxy(19+i+mod_x1_ai,9+mod_y1_ai);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=3; i++) 
    {   gotoxy(47+i+mod_x1_ai,9+mod_y1_ai);
    	cout << char (r);
	}
	
	// inside
		color(7);
	for (int i=0; i<=21; i++) 
    {   gotoxy(25+i+mod_x1_ai,9+mod_y1_ai);
    	cout << char (r);
	}

    
    
     color(6);
    // borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(19+i+mod_x1_ai,10+mod_y1_ai);
    	cout << char (r);
	}
	
	// borders
    for (int i=0; i<=4; i++) 
    {   gotoxy(45+i+mod_x1_ai,10+mod_y1_ai);
    	cout << char (r);
	}
	
	// inside
		color(7);
	for (int i=0; i<=21; i++) 
    {   gotoxy(24+i+mod_x1_ai,10+mod_y1_ai);
    	cout << char (r);
	}


     color(6);
    // borders
    for (int i=0; i<=27; i++) 
    {   gotoxy(20+i+mod_x1_ai,11+mod_y1_ai);
    	cout << char (r);
	}
	
}
	
	// if AI is 2 then it is paper
	if (ai == 2)
	{
		int p=219;
		gotoxy (56+32, 29);
  		color (15);
  		cout << "P  A  P  E  R";
	// paper
	
	
	//border
	color(11);
	for(int i=0; i<=14; i++)
	{	gotoxy(76+i+mod_x2_ai,2 +mod_y2_ai);
		cout << char (p);
	}

	
	//border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(73+i+mod_x2_ai,3+mod_y2_ai);
		cout << char (p);
	}
	
	//border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(89+i+mod_x2_ai,3+mod_y2_ai);
		cout << char (p);
	}
	
	//inside
	color(15);
	for(int i=0; i<=11; i++)
	{	gotoxy(77+i+mod_x2_ai,3+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=17; i++)
	{	gotoxy(74+i+mod_x2_ai,4+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=2; i++)
	{	gotoxy(74+i+mod_x2_ai,5+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=2; i++)
	{	gotoxy(89+i+mod_x2_ai,5+mod_y2_ai);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=11; i++)
	{	gotoxy(77+i+mod_x2_ai,5+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=18; i++)
	{	gotoxy(73+i+mod_x2_ai,6+mod_y2_ai);
		cout << char (p);
	}
	
	
	// border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(73+i+mod_x2_ai,7+mod_y2_ai);
		cout << char (p);
	}
	
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(87+i+mod_x2_ai,7+mod_y2_ai);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=9; i++)
	{	gotoxy(77+i+mod_x2_ai,7+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=18; i++)
	{	gotoxy(72+i+mod_x2_ai,8+mod_y2_ai);
		cout << char (p);
	}
	
	
	// border
	color(11);
	for(int i=0; i<=4; i++)
	{	gotoxy(72+i+mod_x2_ai,9+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=4; i++)
	{	gotoxy(86+i+mod_x2_ai,9+mod_y2_ai);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=8; i++)
	{	gotoxy(77+i+mod_x2_ai,9+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=5; i++)
	{	gotoxy(71+i+mod_x2_ai,10+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=3; i++)
	{	gotoxy(88+i+mod_x2_ai,10+mod_y2_ai);
		cout << char (p);
	}
	
	//inside
	
	color(15);
	for(int i=0; i<=10; i++)
	{	gotoxy(77+i+mod_x2_ai,10+mod_y2_ai);
		cout << char (p);
	}
	
	// border
	color(11);
	for(int i=0; i<=21; i++)
	{	gotoxy(69+i+mod_x2_ai,11+mod_y2_ai);
		cout << char (p);
	}
}
	
	if (ai == 3)
	{
	int hold_x = 7;
	int hold_y = 9;
		
		gotoxy (hold_x+80, hold_y+12);
	cout << "        ";
	gotoxy (hold_x+80, hold_y+13);
	cout << "        ";
	gotoxy (hold_x+80, hold_y+14);
	cout << "        ";
	gotoxy (hold_x+80, hold_y+15); 
	cout << "        ";
	gotoxy (hold_x+80, hold_y+16);
	cout << "        ";
	gotoxy (hold_x+80, hold_y+17);
	cout << "        ";
	
			int s=219;	
  // scissors
  gotoxy (58+23, 29);
  color (15);
  cout << "S  C  I  S  S  O  R";

 color(12);
 for(int i=0; i<=2;i++)
 {  
    gotoxy(36+i+mod_x_ai,15 + mod_y_ai);
 	cout << char (s);
 }

 for(int i=0; i<=3;i++)
 {  
    gotoxy(39+i+mod_x_ai,15+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(36+i+mod_x_ai,17+ mod_y_ai);
 	cout << char (s);
 }
 
 
 color(6);
 for(int i=0; i<=1;i++)
 {  
    gotoxy(38+i+mod_x_ai,15+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(36+i+mod_x_ai,16+ mod_y_ai);
 	cout << char (s);
 }


 color(12);
 gotoxy(38+mod_x_ai,14+ mod_y_ai);
 	cout << char (s);
 
  gotoxy(39+mod_x_ai,14+ mod_y_ai);
 	cout << char (s);
  
   gotoxy(38+mod_x_ai,13+ mod_y_ai);
 	cout << char (s);
 
 gotoxy(39+mod_x_ai,13+ mod_y_ai);
 	cout << char (s);
 
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(40+mod_x_ai,12+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(41+mod_x_ai,12+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(42+mod_x_ai,11+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(43+mod_x_ai,11+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=2;i++)
 {  
    gotoxy(42+i+mod_x_ai,14+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=2;i++)
 {  
    gotoxy(44+i+mod_x_ai,13+ mod_y_ai);
 	cout << char (s);
 }


  for(int i=0; i<=2;i++)
 {  
    gotoxy(46+i+mod_x_ai,12+ mod_y_ai);
 	cout << char (s);
 }

color(8);
for(int i=0; i<=1;i++)
 {  
    gotoxy(38+i+mod_x_ai,16+ mod_y_ai);
 	cout << char (s);
 }
 
 color(6);
for(int i=0; i<=1;i++)
 {  
    gotoxy(40+i+mod_x_ai,16+ mod_y_ai);
 	cout << char (s);
 }

 color(4);
 
 for(int i=0; i<=3;i++)
 {  
    gotoxy(30+i+mod_x_ai,14+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(28+mod_x_ai,15+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(34+mod_x_ai,15+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(35+mod_x_ai,15+i+ mod_y_ai);
 	cout << char (s);
 }
 for(int i=0; i<=1;i++)
 {  
    gotoxy(29+mod_x_ai,15+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=3;i++)
 {  
    gotoxy(30+i+mod_x_ai,17+ mod_y_ai);
 	cout << char (s);
 }

for(int i=0; i<=1;i++)
 {  
    gotoxy(36+mod_x_ai,18+i+ mod_y_ai);
 	cout << char (s);
 }

for(int i=0; i<=1;i++)
 {  
    gotoxy(37+mod_x_ai,18+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(42+mod_x_ai,18+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=1;i++)
 {  
    gotoxy(43+mod_x_ai,18+i+ mod_y_ai);
 	cout << char (s);
 }
 
 for(int i=0; i<=3;i++)
 {  
    gotoxy(38+i+mod_x_ai,17+ mod_y_ai);
 	cout << char (s);
 }

 for(int i=0; i<=3;i++)
 {  
    gotoxy(38+i+mod_x_ai,20+ mod_y_ai);
 	cout << char (s);
 }
	}
	
	// w as player
	// ai as the bot
	
	/*
	1 = ROCK
	2= SCISSOR
	3 = PAPER
	*/

   	int add_y = 14;
   
	
	
	// rock player
	if (w == 1 && ai == 1)
	{
		// DRAW
		color (15);
   	gotoxy (42, 19+add_y);
	cout << " _____   _____    _____   _       _ ";
	gotoxy (42, 20+add_y);
	cout << "(_____) (_____)  (_____) (_)  _  (_)";
	gotoxy (42, 21+add_y);
	cout << "(_)  (_)(_)__(_)(_)___(_)(_) (_) (_)";
	gotoxy (42, 22+add_y); 
	cout << "(_)  (_)(_____) (_______)(_) (_) (_)";
	gotoxy (42, 23+add_y);
	cout << "(_)__(_)( ) ( ) (_)   (_)(_)_(_)_(_)";
	gotoxy (42, 24+add_y);
	cout << "(_____) (_)  (_)(_)   (_) (__) (__) ";
	}
	
	if (w == 1 && ai == 2)
	{
		// LOSE
		
		color (12);
   		gotoxy (50-21, 19+add_y);
		cout << " _     _  _____   _     _     _       _____    _____   ______ ";
		gotoxy (50-21, 20+add_y);
		cout << "(_)   (_)(_____) (_)   (_)   (_)     (_____)  (_____) (______)";
		gotoxy (50-21, 21+add_y);
		cout << " (_)_(_)(_)   (_)(_)   (_)   (_)    (_)   (_)(_)___   (_)__   ";
		gotoxy (50-21, 22+add_y); 
		cout << "   (_)  (_)   (_)(_)   (_)   (_)    (_)   (_)  (___)_ (____)  ";
		gotoxy (50-21, 23+add_y);
		cout << "   (_)  (_)___(_)(_)___(_)   (_)____(_)___(_)  ____(_)(_)____ ";
		gotoxy (50-21, 24+add_y);
		cout << "   (_)   (_____)  (_____)    (______)(_____)  (_____) (______)";
	}
	
	if (w == 1 && ai == 3)
	{
		// WIN
		color (10);
   	gotoxy (50-20, 19+add_y);
	cout << " _     _  _____   _     _     _       _  _______  _     _ ";
	gotoxy (50-20, 20+add_y);
	cout << "(_)   (_)(_____) (_)   (_)   (_)  _  (_)(_______)(_)   (_)";
	gotoxy (50-20, 21+add_y);
	cout << " (_)_(_)(_)   (_)(_)   (_)   (_) (_) (_)   (_)   (__)_ (_)";
	gotoxy (50-20, 22+add_y); 
	cout << "   (_)  (_)   (_)(_)   (_)   (_) (_) (_)   (_)   (_)(_)(_)";
	gotoxy (50-20, 23+add_y);
	cout << "   (_)  (_)___(_)(_)___(_)   (_)_(_)_(_) __(_)__ (_)  (__)";
	gotoxy (50-20, 24+add_y);
	cout << "   (_)   (_____)  (_____)     (__) (__) (_______)(_)   (_)";
	}
	//rock player
	
	//paper player
	if (w == 2 && ai == 1)
	{
		// WIN
		color (10);
   	gotoxy (50-20, 19+add_y);
	cout << " _     _  _____   _     _     _       _  _______  _     _ ";
	gotoxy (50-20, 20+add_y);
	cout << "(_)   (_)(_____) (_)   (_)   (_)  _  (_)(_______)(_)   (_)";
	gotoxy (50-20, 21+add_y);
	cout << " (_)_(_)(_)   (_)(_)   (_)   (_) (_) (_)   (_)   (__)_ (_)";
	gotoxy (50-20, 22+add_y); 
	cout << "   (_)  (_)   (_)(_)   (_)   (_) (_) (_)   (_)   (_)(_)(_)";
	gotoxy (50-20, 23+add_y);
	cout << "   (_)  (_)___(_)(_)___(_)   (_)_(_)_(_) __(_)__ (_)  (__)";
	gotoxy (50-20, 24+add_y);
	cout << "   (_)   (_____)  (_____)     (__) (__) (_______)(_)   (_)";
	}
	
	if (w == 2 && ai == 2)
	{
		// DRAW
		color (15);
   	gotoxy (42, 19+add_y);
	cout << " _____   _____    _____   _       _ ";
	gotoxy (42, 20+add_y);
	cout << "(_____) (_____)  (_____) (_)  _  (_)";
	gotoxy (42, 21+add_y);
	cout << "(_)  (_)(_)__(_)(_)___(_)(_) (_) (_)";
	gotoxy (42, 22+add_y); 
	cout << "(_)  (_)(_____) (_______)(_) (_) (_)";
	gotoxy (42, 23+add_y);
	cout << "(_)__(_)( ) ( ) (_)   (_)(_)_(_)_(_)";
	gotoxy (42, 24+add_y);
	cout << "(_____) (_)  (_)(_)   (_) (__) (__) ";
	}
	
	if (w == 2 && ai == 3)
	{
		// LOSE
		color (12);
   		gotoxy (50-21, 19+add_y);
		cout << " _     _  _____   _     _     _       _____    _____   ______ ";
		gotoxy (50-21, 20+add_y);
		cout << "(_)   (_)(_____) (_)   (_)   (_)     (_____)  (_____) (______)";
		gotoxy (50-21, 21+add_y);
		cout << " (_)_(_)(_)   (_)(_)   (_)   (_)    (_)   (_)(_)___   (_)__   ";
		gotoxy (50-21, 22+add_y); 
		cout << "   (_)  (_)   (_)(_)   (_)   (_)    (_)   (_)  (___)_ (____)  ";
		gotoxy (50-21, 23+add_y);
		cout << "   (_)  (_)___(_)(_)___(_)   (_)____(_)___(_)  ____(_)(_)____ ";
		gotoxy (50-21, 24+add_y);
		cout << "   (_)   (_____)  (_____)    (______)(_____)  (_____) (______)";
	}
	//paper player
	
	//scissor player
	if (w == 3 && ai == 1)
	{
		//LOSE
		color (12);
   		gotoxy (50-21, 19+add_y);
		cout << " _     _  _____   _     _     _       _____    _____   ______ ";
		gotoxy (50-21, 20+add_y);
		cout << "(_)   (_)(_____) (_)   (_)   (_)     (_____)  (_____) (______)";
		gotoxy (50-21, 21+add_y);
		cout << " (_)_(_)(_)   (_)(_)   (_)   (_)    (_)   (_)(_)___   (_)__   ";
		gotoxy (50-21, 22+add_y); 
		cout << "   (_)  (_)   (_)(_)   (_)   (_)    (_)   (_)  (___)_ (____)  ";
		gotoxy (50-21, 23+add_y);
		cout << "   (_)  (_)___(_)(_)___(_)   (_)____(_)___(_)  ____(_)(_)____ ";
		gotoxy (50-21, 24+add_y);
		cout << "   (_)   (_____)  (_____)    (______)(_____)  (_____) (______)";
	}
	
	if (w == 3 && ai == 2)
	{
		// WIN
		color (10);
   	gotoxy (50-20, 19+add_y);
	cout << " _     _  _____   _     _     _       _  _______  _     _ ";
	gotoxy (50-20, 20+add_y);
	cout << "(_)   (_)(_____) (_)   (_)   (_)  _  (_)(_______)(_)   (_)";
	gotoxy (50-20, 21+add_y);
	cout << " (_)_(_)(_)   (_)(_)   (_)   (_) (_) (_)   (_)   (__)_ (_)";
	gotoxy (50-20, 22+add_y); 
	cout << "   (_)  (_)   (_)(_)   (_)   (_) (_) (_)   (_)   (_)(_)(_)";
	gotoxy (50-20, 23+add_y);
	cout << "   (_)  (_)___(_)(_)___(_)   (_)_(_)_(_) __(_)__ (_)  (__)";
	gotoxy (50-20, 24+add_y);
	cout << "   (_)   (_____)  (_____)     (__) (__) (_______)(_)   (_)";
	}
	
	if (w == 3 && ai == 3)
	{
		// DRAW
		color (15);
   	gotoxy (42, 19+add_y);
	cout << " _____   _____    _____   _       _ ";
	gotoxy (42, 20+add_y);
	cout << "(_____) (_____)  (_____) (_)  _  (_)";
	gotoxy (42, 21+add_y);
	cout << "(_)  (_)(_)__(_)(_)___(_)(_) (_) (_)";
	gotoxy (42, 22+add_y); 
	cout << "(_)  (_)(_____) (_______)(_) (_) (_)";
	gotoxy (42, 23+add_y);
	cout << "(_)__(_)( ) ( ) (_)   (_)(_)_(_)_(_)";
	gotoxy (42, 24+add_y);
	cout << "(_____) (_)  (_)(_)   (_) (__) (__) ";
	}
	//scissor player
	
	Sleep (1000);
	
	color (14);
	gotoxy (33, 31);
	cout << "[P R E S S   A N Y   K E Y   T O   T R Y   A G A I N]";
	
		
	char retry = getch ();
	
	if (retry != back_esc)
	{
		rps ();
	}
	
	if (retry == back_esc)
	{
		minigame ();
	}
}

// random number guess
void rng ()
{
	
	color (10);     
	merc_name_default();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    copy_noNotice ();

    
	int ad_x = 3;
	int ad_y = -4;
	int ad_yy=-13;
	
	// borders for instruct 
	color(7);
	
	gotoxy(11,10);
	cout << char (201);
	
	gotoxy(11,14);
	cout << char (200);
	
	gotoxy(112,10);
	cout << char (187);
    
	gotoxy(112,14);
	cout << char (188); 
	
	for(int rn=0; rn<3; rn++)
	{
	gotoxy(112,11+rn);
	cout << char (186);
	}
	
	for(int rn=0; rn<3; rn++)
	{
	gotoxy(11,11+rn);
	cout << char (186);
	}
	
	for(int rn=0; rn<100; rn++)
	{
	gotoxy(12+rn,10);
	cout << char (205);
	}
	
	for(int rn=0; rn<100; rn++)
	{
	gotoxy(12+rn,14);
	cout << char (205);
	}
	
	for(int rn=0; rn<99; rn++)
	{
	gotoxy(12+rn,12);
	cout << char (205);
	}
	

	
	
	
	color (14);
	gotoxy (9 + ad_x,15 + ad_y);
	cout << "You have only [10] guesses. You have to guess the number within given guesses to win, else you lose";
	gotoxy (13 + ad_x,17 + ad_y);
	cout << "RANDOM NUMBER GUESS: Welcome Player, You must guess the random number ranging from [1 - 1000]";

	gotoxy (43 + ad_x,26 + ad_y);
	
	
	cout << "Press Any Key to Continue . . .";
	char pause = getch ();
	
	if (pause == back_esc)
	{
		minigame ();
	}
	
	system ("cls");
	color (10);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
	copy_noNotice ();
	color (14);
	         
			gotoxy (35+5, 12);
			cout << "Press Enter to confirm your number guess";
			
			color(7);
				// press border
	            gotoxy(39,11);
	            cout << char (201);
	
	            gotoxy(39,13);
	            cout << char (200);
	            
	            gotoxy(39,12);
	            cout << char (186);
	            
	            gotoxy(80,11);
	            cout << char (187);
	            
	            gotoxy(80,13);
	            cout << char (188);
	            
	            gotoxy(80,12);
	            cout << char (186);
	            
	            for (int p=0; p<40; p++)
	            {  
				  gotoxy(40+p,11);
	              cout << char (205);
	            }
	            
	            for (int p=0; p<40; p++)
	            {  
				  gotoxy(40+p,13);
	              cout << char (205);
	            }
	            
	            
			
	color (12);
	gotoxy (10 + ad_x,15 + ad_yy);
	cout << " _     _  _     _   __   __   _____   ______  _____          _____   _     _  ______  _____  _____  ";
	gotoxy (10 + ad_x,16 + ad_yy);
	cout << "(_)   (_)(_)   (_) (__)_(__) (_____) (______)(_____)        (_____) (_)   (_)(______)(_____)(_____) ";
	gotoxy (10 + ad_x,17 + ad_yy);
	cout << "(__)_ (_)(_)   (_)(_) (_) (_)(_)__(_)(_)__   (_)__(_)      (_)  ___ (_)   (_)(_)__  (_)___ (_)___   ";
	gotoxy (10 + ad_x,18 + ad_yy);
	cout << "(_)(_)(_)(_)   (_)(_) (_) (_)(_____) (____)  (_____)       (_) (___)(_)   (_)(____)   (___)_ (___)_ ";
	gotoxy (10 + ad_x,19 + ad_yy);
	cout << "(_)  (__)(_)___(_)(_)     (_)(_)__(_)(_)____ ( ) ( )       (_)___(_)(_)___(_)(_)____  ____(_)____(_)";
	gotoxy (10 + ad_x,20 + ad_yy);
	cout << "(_)   (_) (_____) (_)     (_)(_____) (______)(_)  (_)       (_____)  (_____) (______)(_____)(_____) ";
	
	srand (time (0));
	int guess = 1 + rand () % 1000;
	int lives = 10;
	int copy_lives = lives;
	int counter = 0;
	
	int player;
	int label = 1;
	for (int i = 1; counter != lives && player != guess;  i+=2)
	{
		color (10);
		if (i == 3)
		{
		gotoxy (10, 15 );
		cout << "GUESSES LEFT: " << "   ";
		}
		
		gotoxy (10, 15 );
		cout << "GUESSES LEFT: ";
		color (14);
		cout << copy_lives - counter;
		

		color (15);
		gotoxy (10, 16+ i);
		cout << label <<". What's your guess?: ";
		color (11);
		char store [5];
		char holder;
		
		for (int g = 0;;)
		{
			holder = getch ();
			
			if (holder >= '0' && holder <= '9')
			{
				cout << holder;
				store [g] = holder;
				g++;
			}
			
			if (holder == back_esc)
			{
				system ("cls");
				minigame ();
			}
			
			if (holder == '\b' && g >= 1)
			{
				cout << "\b \b";
				store [g] = '\0';
				g--; 
				
			}
			
			if (holder == '\r' && g >= 1)
			{
				store [g] = '\0';
				goto exit_this;
			}
			
			if (g >= 5)
			{
				cout << "\b \b";
				store [g] = '\0';
				g--;
				
			}
		}
		exit_this:
			
			istringstream (store) >> player;
		
		if (counter != lives)
		{
				if (guess > player)
			{
				gotoxy (40, 17+ i);
				color (15);
				cout << "[TIP]: HIGHER";
			}
			
			if (guess < player)
			{
				gotoxy (40, 17+ i);
				color (15);
				cout << "[TIP]: LOWER";
			}
		}
		
		
		counter ++;
		label++;
		
	}	
	
	lose:
		
	gotoxy (47, 39);
	cout << "The Random Number is: ";
	color (6);
	cout << guess;
	
		if (player != guess)
		{
			color (12);
   			gotoxy (54, 19);
			cout << " _     _  _____   _     _     _       _____    _____   ______ ";
			gotoxy (54, 20);
			cout << "(_)   (_)(_____) (_)   (_)   (_)     (_____)  (_____) (______)";
			gotoxy (54, 21);
			cout << " (_)_(_)(_)   (_)(_)   (_)   (_)    (_)   (_)(_)___   (_)__   ";
			gotoxy (54, 22); 
			cout << "   (_)  (_)   (_)(_)   (_)   (_)    (_)   (_)  (___)_ (____)  ";
			gotoxy (54, 23);
			cout << "   (_)  (_)___(_)(_)___(_)   (_)____(_)___(_)  ____(_)(_)____ ";
			gotoxy (54, 24);
			cout << "   (_)   (_____)  (_____)    (______)(_____)  (_____) (______)";
		}
		
	
	
	
		if (player == guess)
		{
			// WIN
			color (10);
   			gotoxy (56, 19);
			cout << " _     _  _____   _     _     _       _  _______  _     _ ";
			gotoxy (56, 20);
			cout << "(_)   (_)(_____) (_)   (_)   (_)  _  (_)(_______)(_)   (_)";
			gotoxy (56, 21);
			cout << " (_)_(_)(_)   (_)(_)   (_)   (_) (_) (_)   (_)   (__)_ (_)";
			gotoxy (56, 22); 
			cout << "   (_)  (_)   (_)(_)   (_)   (_) (_) (_)   (_)   (_)(_)(_)";
			gotoxy (56, 23);
			cout << "   (_)  (_)___(_)(_)___(_)   (_)_(_)_(_) __(_)__ (_)  (__)";
			gotoxy (56, 24);
			cout << "   (_)   (_____)  (_____)     (__) (__) (_______)(_)   (_)";
		}
		
	Sleep (1000);
	gotoxy (60, 27);
	color (7);
	
	cout << "P R E S S  A N Y  K E Y  T O  T R Y  A G A I N . . .";
	gotoxy (60, 29);
	cout << "P R E S S  ESC  T O  E X I T  T H I S  G A M E . . .";
	
	char again = getch ();
	
	if (again == back_esc)
	{
		system ("cls");
		minigame ();
	}
	else 
	{
		system ("cls");
		rng ();
	}
}

void historia_reiss ()
{

	
	system ("cls");
	fstream num_passengers ("num_passengers.txt");
	int num_pass;
	string hold_num;
	
	num_passengers >> num_pass;
	
	
	color (15);
	
	if (num_pass >=57 || num_pass <= 0)
	{
		num_pass = 0;
	}

	
	
	if (num_pass <= 28)
	{
		border_noNotice ();
		
		//default no adjusment
			
	color (11);
		// design
	color (11);
	for (int i = 1; i <= 106; i++)
	{
		gotoxy (8+i, 11);
		cout << char (220);
	}
	
	for (int i = 1; i <= 105; i++)
	{
		gotoxy (9+i, 13);
		cout << char (223);
	}
	

	

	for (int i = 1; i <= 31; i++)
	{
		gotoxy (9, 11+i);
		cout << char (219);
	}
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (43, 11+i);
		cout << char (219);
	}
	//cmp border
	color (10);
	for (int i = 1; i <= 29; i++)
	{
		gotoxy (45, 13+i);
		cout << char (186); // ||;
	}
	color (11);
	//ins border
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (55, 11+i);
		cout << char (219);
	}
	// middle ins
	color (10);
	for (int i = 1; i <= 29; i++)
	{
		gotoxy (51, 13+i);
		cout << char (186); // ||;
	}
	color (11);
	//disc middle
	color (10);
		for (int i = 1; i <= 29; i++)
	{
		gotoxy (59, 13+i);
		cout << char (186); // ||;
	}
	color (11);
		color (10);
		for (int i = 1; i <= 29; i++)
	{
		gotoxy (71, 13+i);
		cout << char (186); // ||;
	}
	color (11);
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (79, 11+i);
		cout << char (219);
	}
	
	//cl charge border end
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (87, 11+i);
		cout << char (219);
	}
	// itoo sa individual

	for (int i = 1; i <= 31; i++)
	{
		gotoxy (95, 11+i);
		cout << char (219);
	}


	// disc to vat
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (67, 11+i);
		cout << char (219);
	}
	
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (49, 11+i);
		cout << char (219);
	}
	
	
		for (int i = 1; i <= 31; i++)
	{
		gotoxy (49, 11+i);
		cout << char (219);
	}
	
	for (int i = 1; i <= 31; i++)
	{
		gotoxy (38, 11+i);
		cout << char (219);
	}
	
	for (int i = 1; i <= 86; i++)
	{
		gotoxy (9+i, 42);
		cout << char (219);
	}
	//
	}
	
	if (num_pass >= 29)
	{

			color (15);
	for (int side_border1 = 0; side_border1 < 43+(num_pass - 28);  side_border1++)
	{
		gotoxy (5, side_border1);
		cout << char (219); 
		
		// this is responsible for the left border
	}
	
	for (int side_border2 = 0; side_border2 < 43+(num_pass - 28);  side_border2++)
	{
		gotoxy (118, side_border2);
		cout << char (219); 
		
		// this is responsible for the right border
	}
	
	for (int top_border = 5; top_border < 118; top_border++)
	{
		gotoxy (top_border, 0);
		cout << char (219); 
		
		// this is responsible for the top border
	}
	
	for (int bot_border = 5; bot_border < 119; bot_border++)
	{
		gotoxy (bot_border, 43+(num_pass - 28));
		cout << char (219); 
		
		// this is responsible for the bottom border
	}
	
	//end of border
			
			for (int i = 9; i<= 114; i++)
			{
				color (11);
				gotoxy (i, 11);
				cout << char (219);
			}
		//adjustment
			//cmp border
	color (10);
	for (int i = 1; i <= 29+(num_pass - 28); i++)
	{
		gotoxy (45, 13+i);
		cout << char (186); // ||;
	}
	color (11);
	//ins border
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (55, 11+i);
		cout << char (219);
	}
	// middle ins
	color (10);
	for (int i = 1; i <= 29+(num_pass - 28); i++)
	{
		gotoxy (51, 13+i);
		cout << char (186); // ||;
	}
		color (11);
	//disc middle
	color (10);
		for (int i = 1; i <= 29+(num_pass - 28); i++)
	{
		gotoxy (59, 13+i);
		cout << char (186); // ||;
	}
	color (11);
		color (10);
		for (int i = 1; i <= 29+(num_pass - 28); i++)
	{
		gotoxy (71, 13+i);
		cout << char (186); // ||;
	}
	color (11);
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (79, 11+i);
		cout << char (219);
	}
	
	//cl charge border end
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (87, 11+i);
		cout << char (219);
	}
	// itoo sa individual

	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (95, 11+i);
		cout << char (219);
	}


	// disc to vat
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (67, 11+i);
		cout << char (219);
	}
	
	
		for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (49, 11+i);
		cout << char (219);
	}
	
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (38, 11+i);
		cout << char (219);
	}
		

		
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (9, 11+i);
		cout << char (219);
	}
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (43, 11+i);
		cout << char (219);
	}
	
	for (int i = 1; i <= 31+(num_pass - 28); i++)
	{
		gotoxy (38, 11+i);
		cout << char (219);
	}
	//age
	
	
	for (int i = 1; i <= 86; i++)
	{
		gotoxy (9+i, 42+(num_pass - 28));
		cout << char (219);
	}
	//
	}
	
	
	

	
	// line 
	color(15);
		for (int top_border = 5; top_border < 117; top_border++)
	{
		gotoxy (top_border+1, 9);
	    cout << char (223);
		
		// this is responsible for the top border
	}
	

	

	
	fstream register_user ("register_user.txt");
	string hold_user;
	register_user >> hold_user;
	// seperate
	fstream name_passenger ("name_passenger.txt");
	string hold_name;
	
	fstream age ("age.txt");
	string hold_age;
	
	fstream location ("location.txt");
	string hold_location;
	getline (location, hold_location);
	
	fstream pas_class ("class.txt");
	string hold_class;
	getline (pas_class, hold_class);
	
	fstream paid ("paid.txt");
	string hold_paid;
	paid >> hold_paid;
	 
	 fstream change ("change.txt");
	string hold_change;
	change >> hold_change;
	
	fstream trip ("trip.txt");
	string hold_trip;
	getline (trip, hold_trip);
	
	fstream total ("total.txt");
	string hold_total;
	total >> hold_total;
	
	fstream status ("status.txt");
	string hold_status;
	status >> hold_status;
	
	fstream want_cmp ("want_cmp.txt");
	string hold_want_cmp;
	
	fstream cmp ("cmp.txt");
	string hold_cmp;
	
	fstream want_ins ("want_ins.txt");
	string hold_want_ins;
	
	fstream insu ("insu.txt");
	string hold_ins;
	
	fstream DF ("DF.txt");
	string hold_DF;
	
	fstream disc ("disc.txt");
	string hold_disc;

	fstream VF ("VF.txt");
	string hold_VF;
	
	fstream VAT ("VAT.txt");
	string hold_VAT;
	
	fstream cl_charge ("cl_charge.txt");
	string hold_cl_charge;
	
	fstream i_total ("i_total.txt");
	string hold_i_total;
	
	fstream GF ("GF.txt");
	string hold_GF;
	
	fstream grp_discount ("grp_discount.txt");
	string hold_grp_discount;
	
	fstream minor_count ("minor_count.txt");
	string hold_minor_count;
	
	fstream adult_count ("adult_count.txt");
	string hold_adult_count;
	
	fstream senior_count ("senior_count.txt");
	string hold_senior_count;
	
		
	
	
	
	gotoxy (9,5);
	color (15);
	cout << "NOTE: This Record is from the registered username: ";
	color (10);
	cout << hold_user;
	gotoxy (15,7);
	color (12);
	cout << "*ONLY THE MOST RECENT RESERVATION IS IN THIS SECTION*";
	
	gotoxy (50,10);
	cout << "*IF YOU PICK TOUR AGAIN THIS HISTORY WILL BE DELETED*";
	
	color(15);
	// borders for second note 
	gotoxy(49,10);
	cout << char (186);
	
	gotoxy(103,10);
	cout << char (186);
	
	
	color(10);
	gotoxy (6,1);
	cout << "Press ESC - To go back ";
	
	color(7);
	// borders for press
    
	
	gotoxy(28,2);
	cout << char (188);
	
	gotoxy(28,1);
	cout << char (186);
	
	for (int hh=0; hh<22; hh++)
	{
		gotoxy(6+hh,2);
	    cout << char (205);	
	}
	

	int ex1 = -35;
	int ey1 = 1;
	
	// border note 
	color(7);
	
	gotoxy (42+ex1,3+ey1);
	cout << char (201);
	
	gotoxy (42+ex1,7+ey1);
	cout << char (200);
	
	gotoxy (110+ex1,3+ey1);
	cout << char (187);
	
	gotoxy (110+ex1,7+ey1);
	cout << char (188);
	
	for (int h=0; h<3; h++)
	{ 
	   gotoxy (42+ex1,4+h+ey1);
	   cout << char (186);	
	}
	
	for (int h=0; h<3; h++)
	{ 
	   gotoxy (110+ex1,4+h+ey1);
	   cout << char (186);	
	}
			
	for (int h=0; h<67; h++)
	{ 
	   gotoxy (43+h+ex1,3+ey1);
	   cout << char (205);	
	}	
		
	for (int h=0; h<67; h++)
	{ 
	   gotoxy (43+h+ex1,7+ey1);
	   cout << char (205);	
	}	
	
	for (int h=0; h<67; h++)
	{ 
	   gotoxy (43+h+ex1,5+ey1);
	   cout << char (205);	
	}
	
	// borders for tour info
	color(15);
	
	for(int bor=0; bor<8; bor++)
	{
		gotoxy(77,1+bor);
		cout << char (219);
	}
	
		
		
	gotoxy (90, 1);
	color (6);
	cout << "= TOUR INFO =";
	color (10);
	

	
	gotoxy (80, 2);
	cout << "AMOUNT PAID: ";
	color (11);
	gotoxy (80+14, 2);
	cout << hold_paid;
	
	color (10);
	gotoxy (103, 6);
	cout << "# of PSNGER: ";
	color (11);
	gotoxy (115, 6);
	cout << num_pass;
	if (num_pass <= 0)
	{
		gotoxy (115, 6);
		cout << " ";
	}
	
	color (10);
	gotoxy (100, 7);
	cout << "GRP. FACTOR: ";
	color (11);
	gotoxy (112, 7);

	getline (GF, hold_GF);
	cout << hold_GF;
	
	
	color (10);
	gotoxy (80, 3);
	cout << "TOTAL CHARGE: ";
	color (11);
	gotoxy (80+14, 3);
	cout << hold_total;
	
	color (10);
	gotoxy (96, 8);
	cout << "GRP. DISC.: ";
	color (11);
	gotoxy (108, 8);
	grp_discount >> hold_grp_discount;
	cout << hold_grp_discount << endl;
	
	
	
	color (10);
	gotoxy (80, 4);
	cout << "CHANGE: ";
	color (11);
	gotoxy (80+14, 4);
	cout << hold_change;
	
	color (10);
	gotoxy (80, 5);
	cout << "LOCATION: ";
	color (11);
	gotoxy (80+14, 5);
	cout << hold_location;
	
	color (10);
	gotoxy (80, 6);
	cout << "CLASS: ";
	color (11);
	gotoxy (80+14, 6);
	cout << hold_class;
	
	gotoxy (80, 7);
	color (10);
	cout << "TRIP: ";
	color (11);
	gotoxy (80+8, 7);
	cout << hold_trip;
	
	gotoxy (80, 8);

	color (10);
	cout << "STATUS: ";
	color (11);
	gotoxy (80+8, 8);
	cout << hold_status;
	
	
	
	
	gotoxy (14,12);
	color (6);
	cout << "NAME OF PASSENGER(S)";
	color (15);
	
	for (int i = 1; !name_passenger.eof(); i++)
	{
		gotoxy (10,13+i);
		getline (name_passenger, hold_name);
		cout << hold_name;
	}
	
	gotoxy (39,12);
	color (6);
	cout << "AGES";
	color (14);

	
	for (int i = 1; !age.eof(); i++)
	{
		gotoxy (40,13+i);
		getline (age, hold_age);
		cout << hold_age;
	}
	
	gotoxy (45,12);
	color (6);
	cout << "CMP";
	color (14);
	
	for (int i = 1; !want_cmp.eof(); i++)
	{
		gotoxy (44,13+i);
		getline (want_cmp, hold_want_cmp);
		cout << hold_want_cmp;
	}
	
	for (int i = 1; !cmp.eof(); i++)
	{
		gotoxy (46,13+i);
		getline (cmp, hold_cmp);
		cout << hold_cmp;
	}
	
	gotoxy (51,12);
	color (6);
	cout << "INS";
	color (14);
	
	for (int i = 1; !want_ins.eof(); i++)
	{
		gotoxy (50,13+i);
		getline (want_ins, hold_want_ins);
		cout << hold_want_ins;
	}
	
	for (int i = 1; !insu.eof(); i++)
	{
		gotoxy (52,13+i);
		getline (insu, hold_ins);
		cout << hold_ins;
	}
	
	gotoxy (57,12);
	color (6);
	cout << "DISC FAC";
	color (14);
	
	for (int i = 1; !DF.eof(); i++)
	{
		gotoxy (56,13+i);
		getline (DF, hold_DF);
		cout << hold_DF;
	}
	
	for (int i = 1; !disc.eof(); i++)
	{
		gotoxy (60,13+i);
		getline (disc, hold_disc);
		cout << hold_disc;
	}
	
	gotoxy (70,12);
	color (6);
	cout << "VAT FAC";
	color (14);
	
	for (int i = 1; !VF.eof(); i++)
	{
		gotoxy (68,13+i);
		getline (VF, hold_VF);
		cout << hold_VF;
	}
	
	for (int i = 1; !VAT.eof(); i++)
	{
		gotoxy (72,13+i);
		getline (VAT, hold_VAT);
		cout << hold_VAT;
	}
	
	gotoxy (80,12);
	color (6);
	cout << "C&L CGE";
	color (14);
	
	for (int i = 1; !cl_charge.eof(); i++)
	{
		gotoxy (82,13+i);
		getline (cl_charge, hold_cl_charge);
		cout << hold_cl_charge;
	}
	
	gotoxy (88,12);
	color (6);
	cout << "IND. TL";
	color (14);
	
	for (int i = 1; !i_total.eof(); i++)
	{
		gotoxy (89,13+i);
		getline (i_total, hold_i_total);
		cout << hold_i_total;
	}
	gotoxy (100,12);
	color (6);
	cout << "LEGEND USED";
	color (14);
	
	gotoxy (96,14);
	cout << "CMP = COMPARTMENT";
	gotoxy (96,16);
	cout << "INS = INSURANCE";
	gotoxy (96,18);
	cout << "DISC FAC= DISCOUNT";
	gotoxy (96,19);
	cout << "          FACTOR";
	
	gotoxy (96,21);
	cout << "VAT FAC = VALUE";
	gotoxy (96,22);
	cout << "          ADDED";
	gotoxy (96,23);
	cout << "          TAX";
	gotoxy (96,24);
	cout << "          FACTOR";
	
	gotoxy (96,26);
	cout << "C&L CGE =  CLASS";
	gotoxy (96,27);
	cout << "             &";
	gotoxy (96,28);
	cout << "          LOCATION";
	gotoxy (96,29);
	cout << "           CHARGE";
	
	gotoxy (96,31);
	cout << "IND TL.=INDIVIDUAL";
	gotoxy (98,32);
	cout << "         TOTAL";
	
	//closing border
	for (int i = 1; i<= 19; i++)
	{
		color (11);
		gotoxy (95+i,34);
		cout << char (220);
	}
	
	for (int i = 1; i<= 17+6; i++)
	{
	
		gotoxy (95+19,11+i);
		cout << char (219);
	}
	gotoxy (98, 23+12);
	color (6);
	cout << "CLASSIFICATIONS";
	
	gotoxy (101, 25+12);
	color (10);
	cout << "MINOR: ";
	color (14);
	minor_count >> hold_minor_count;
	cout << hold_minor_count;
	
	gotoxy (101, 27+12);
	color (10);
	cout << "ADULT: ";
	color (14);
	adult_count >> hold_adult_count;
	cout << hold_adult_count;
	
	gotoxy (101, 29+12);
	color (10);
	cout << "SENIOR: ";
	color (14);
	senior_count >> hold_senior_count;
	cout << hold_senior_count;
	
	gotoxy (0, 0);
	for (int ja = 0;;)
	{
		char bye = getch ();
		
		if (bye == back_esc)
		{
			system ("cls");
			mainframe ();
		}
	}
}
