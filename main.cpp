/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int
main ()
{
  string line;
  int choice, choice2 = 0;
  int shiftValue;

  //This is where the user chooses the method
  cout << "Would you like to use the basic or complex method?" << endl;
  cout << "Press 1 for basic or 2 for complex. " << endl;
  cin >> choice;

  switch (choice)
    {
    case 1:
      cout << "You want the basic method! \n";
      break;
    case 2:
      cout << "You want the complex method! \n";
      break;
    }

  if (choice == 1)
    {
      //This is where the user inputs whether to encode or decodes
      cout << "Would you like to encode or decode? " << endl;
      cout << "Press 1 for encode or 2 for decode. " << endl;
      cin >> choice2;
      //This switch statement is where the options are
      switch (choice2)
	{
	case 1:
	  cout << "You want to encode! \n";
	  break;
	case 2:
	  cout << "You want to decode! \n";
	  break;
	default:
	  cout << "Error wrong choice! \n";
	  return 0;
	  break;
	}

      //This is where all of my encode work is
      if (choice2 == 1)
	{
	  //This is where the user inputs their phrase.
	  cout <<
	    "Please enter the message you would like to encode in all caps no spaces: \n";
	  cin.ignore();
	  getline (cin, line);

	  cout << "Enter a shift value between 1 and 25. " << endl;
	  cin >> shiftValue;

	  //This if statement determines if the shift value is between 1 and 25
	  if (shiftValue >= 1 && shiftValue <= 25)
	    {
	      cout << "Input accepted! " << endl;
	    }
	  else
	    {
	      cout <<
		"Error the number given is not between 1 and 25. Try a correct number next time. "
		<< endl;
	      return 0;
	    }
	  //This is my encoding for loop that encodes the phrase by whatever shift value the user selects
	  string lineEncode;
	  for (int location = 0; location < line.size (); location++)
	    {
	      lineEncode += (line[location] - 'A' + shiftValue) % 26 + 'A';
	    }
	  cout << "Your encoded phrase is: " << lineEncode;
	}

      //This is where all of my decode work is
      if (choice2 == 2)
	{
	  //This is where the user inputs their phrase.
	  cout << "Please enter the message you would like to decode: \n";
	  cin.ignore ();
	  getline (cin, line);

	  cout << "Enter a shift value between 1 and 25. " << endl;
	  cin >> shiftValue;

	  //This if statement determines if the shift value is between 1 and 25
	  if (shiftValue >= 1 && shiftValue <= 25)
	    {
	      cout << "Input accepted! " << endl;
	    }
	  else
	    {
	      cout <<
		"Error the number given is not between 1 and 25. Try a correct number next time. "
		<< endl;
	      return 0;
	    }
	  //This is my decoding for loop that decodes the phrase based off of what the users shift value is
	  string lineDecode;
	  for (int location = 0; location < line.size (); location++)
	    {
	      lineDecode +=
		(line[location] - 'A' - shiftValue + 26) % 26 + 'A';
	    }
	  cout << "Your decoded phrase is: " << lineDecode;
	}
    }

  if (choice == 2)
    {
      //This is where the user inputs whether to encode or decodes
      cout << "Would you like to encode or decode? " << endl;
      cout << "Press 1 for encode or 2 for decode. " << endl;
      cin >> choice2;
      //This switch statement is where the options are
      switch (choice2)
	{
	case 1:
	  cout << "You want to encode! \n";
	  break;
	case 2:
	  cout << "You want to decode! \n";
	  break;
	default:
	  cout << "Error wrong choice! \n";
	  return 0;
	  break;
	}

      //This is where all of my encode work is
      if (choice2 == 1)
	{
	  //This is where the user inputs their phrase.
	  cout <<
	    "Please enter the message you would like to encode in all caps no spaces: \n";
	  cin.ignore ();
	  getline (cin, line);

	  cout << "Enter a shift value between 1 and 25. " << endl;
	  cin >> shiftValue;

	  //This if statement determines if the shift value is between 1 and 25
	  if (shiftValue >= 1 && shiftValue <= 25)
	    {
	      cout << "Input accepted! " << endl;
	    }
	  else
	    {
	      cout <<
		"Error the number given is not between 1 and 25. Try a correct number next time. "
		<< endl;
	      return 0;
	    }
	  //This is my encoding for loop that encodes the phrase by whatever shift value the user selects
	  string lineEncode;
	  for (int location = 0; location < line.size (); location++)
	    {
	      lineEncode +=
		(line[location] - 'A' + shiftValue + 1) % 26 + 'C';
	    }
	  cout << "Your encoded phrase is: " << lineEncode;
	}

      //This is where all of my decode work is
      if (choice2 == 2)
	{
	  //This is where the user inputs their phrase.
	  cout << "Please enter the message you would like to decode: \n";
	  cin.ignore ();
	  getline (cin, line);

	  cout << "Enter a shift value between 1 and 25. " << endl;
	  cin >> shiftValue;

	  //This if statement determines if the shift value is between 1 and 25
	  if (shiftValue >= 1 && shiftValue <= 25)
	    {
	      cout << "Input accepted! " << endl;
	    }
	  else
	    {
	      cout <<
		"Error the number given is not between 1 and 25. Try a correct number next time. "
		<< endl;
	      return 0;
	    }
	  //This is my decoding for loop that decodes the phrase based off of what the users shift value is
	  string lineDecode;
	  for (int location = 0; location < line.size (); location++)
	    {
	      lineDecode +=
		(line[location] - 'C' - shiftValue + 26) % 26 + 'A';
	    }
	  cout << "Your decoded phrase is: " << lineDecode;
	}
    }


}


