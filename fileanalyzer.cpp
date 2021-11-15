#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> //should be included in order to use 'setfill'

const int HEADER_WIDTH = 70; //total lenght of the stream to output the program data
const int HEADER_WIDTH_LEFT_ALIGN = 49; //number of chars for banner including text
const int HEADER_WIDTH_RIGHT_ALIGN = 21; //numbers of chars for the banner to complete up to 70 chars
const int RESULT_RIGHT_ALIGN_WIDTH = 10; //number of chars for the digits results
const int RESULT_LEFT_ALIGN_WIDTH =  60; //number of chars for the text part

using namespace std;

int main(int argc, char* argv[])
{

  cout << setfill('*'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << "" << endl; //set the width of the line to 70 chars, output a null char to print the whole stream
  cout << setw(HEADER_WIDTH_LEFT_ALIGN) << "Welcome to my Letter Count Program" << setw(HEADER_WIDTH_RIGHT_ALIGN) << "" << endl; //message is 34 chars lenght, fill up to HEADER_WIDTH_LEFT_ALIGN chars and then up to HEADER_WIDTH_RIGHT_ALIGN chars after the message
  cout << setw(HEADER_WIDTH) << "" << endl << endl; //output the * in the third row
  
	if (argc < 2) //The executable name and at least one argument?
	{
		std::cout << "Error - Please specify a file to analyze" << std::endl; //Display an error if argument is less than 2
		return 1;
	}

  cout << setfill(' '); //use setfill to change the fill char to *
  cout << "Analyzing file " << "'"<<argv[1] << "'" << "..." << endl << endl; //Printing whatever the user input as an argument when the program was called

	std::ifstream inFile;
	inFile.open(argv[1]); //Open the file specified by argument 1
	if (!inFile) //If specified file is not found
	{
		std::cout << "Error with file name.." << std::endl; //display error
		return 1;
	}

  int chr_a_counts=0; //declare variable for counting number of a vowels
  int chr_e_counts=0; //declare variable for counting number of e vowels
  int chr_i_counts=0; //declare variable for counting number of i vowels
  int chr_o_counts=0; //declare variable for counting number of o vowels
  int chr_u_counts=0; //declare variable for counting number of u vowels
  int chr_vowel_counts=0; //declare variable for total numbers of vowels
  int chr_j_counts=0; //declare variable for counting number of letter j
  int chr_s_counts=0; //declare variable for counting number of letter s
  int chr_g_counts=0; //declare variable for counting number of letter g


  char chr;
  while(!inFile.eof()) //Continue executing until end of file is found
  {
    inFile >> chr; //Read one character from the file
    if ( (chr == 'A') || (chr == 'a')) //If character is A or a
    {
      chr_a_counts+=1; //add one to the sum 
    }
    if ( (chr == 'E') || (chr == 'e')) //If character is E or e
    {
      chr_e_counts+=1; //add one to the sum
    }
    if ( (chr == 'I') || (chr == 'i'))//If character is I or i
    {
      chr_i_counts+=1; //add one to the sum
    }
    if ( (chr == 'O') || (chr == 'o')) //If character is O or o
    {
      chr_o_counts+=1;//add one to the sum
    }
    if ( (chr == 'U') || (chr == 'u')) //If character is U or u
    {
      chr_u_counts+=1;//add one to the sum
    }
    if ( (chr == 'J') || (chr == 'j')) //If character is J or j
    {
      chr_j_counts+=1;//add one to the sum
    }
     if ( (chr == 'S') || (chr == 's')) //If character is S or s
    {
      chr_s_counts+=1;//add one to the sum
    }
     if ( (chr == 'G') || (chr == 'g')) //If character is G or g
    {
      chr_g_counts+=1;//add one to the sum
    }
  }
	///////////////////////
	// Work here with open file.....
	///////////////////////
  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of A's: " << right << chr_a_counts << endl;//output the total number of letters A/a
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of E's: " << right << chr_e_counts << endl;//output the total number of letters E/e
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of I's: " << right << chr_i_counts << endl;//output the total number of letters I/i
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of O's: " << right << chr_o_counts << endl;//output the total number of letters O/o
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of U's: " << right << chr_u_counts << endl;//output the total number of letters U/u
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of J's: " << right << chr_j_counts << endl;//output the total number of letters J/j
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of S's: " << right << chr_s_counts << endl;//output the total number of letters S/s
	inFile.close();

  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The numbers of G's: " << right << chr_g_counts << endl;//output the total number of letters G/g
	inFile.close();

  chr_vowel_counts = chr_a_counts + chr_e_counts + chr_i_counts + chr_o_counts + chr_u_counts;//adding all the total numbers of characters and assigning the total to a new variable
  cout << setfill('.'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << left << "The vowel count is: " << right << chr_vowel_counts << endl; //printing the total number of vowels
	inFile.close();


	return 0;
}