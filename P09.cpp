//  P09 Array and File Processing - Kevin Ashu
   //  This program uses a simple array and a data file.  
   //  Loads, sorts and searches a partially filled array of Employee ID (integers)


#include <fstream>  // file processing
#include <iostream> // cin and cout

using namespace std;

// Global Constants
// When using to declare arrays, must be defined with const modifier
const int  ARRAY_SIZE = 20; 

// Declare arrays as global so we don't have to pass the arrays to each function.
// Normally we wouldn't declare variables that change values a global.
int  employeeId[ARRAY_SIZE];
int  numberOfEmps;    // count of how many employees were loaded into arrays

void loadArray( );

void sortArrayAscending( );

void sortArrayDescending( );

void displayArray( );

void searchArray( );

void displayContinuePrompt( );


// Program starts here   
void main( )
{
// Declare and initialize local main variables
    char   choice;            //menu option

// Load the arrays with data
    loadArray( );

// check to see what the user wants to do
    do  // while (choice != 'X')
    {
        cout << "P09   Kevin Ashu   \n\n";

        cout << "Enter the letter of the desired menu option. \n"
             << "Press the Enter key after entering the letter. \n \n"

             << "  A: Display Employee Id (current order) \n"
             << "  B: Display Employee Id Ascending Order \n"
             << "  C: Display Employee Id Descending Order \n"
             << "  D: Search Employee Id List \n"

             << "  X: Exit the program \n \n"

             << "Choice: ";

        cin >> choice;

        choice = toupper(choice);

        switch (choice)
        {
            case 'A':
                cout << "Current order of Employee Ids:\n";
                displayArray( );
                displayContinuePrompt( );
                break;
            case 'B':
                cout << "Employee Ids sorted ascending:\n";
                sortArrayAscending( );
                displayArray( );
                displayContinuePrompt( );
                break;
            case 'C':
                cout << "Employee Ids sorted descending:\n";
                sortArrayDescending( );
                displayArray( );
                displayContinuePrompt( );
                break;
            case 'D':
                searchArray( );
                displayContinuePrompt( );
                break;
            case 'X':
                cout << "Now exiting. Please wait...\n\n";
                break;
            default:
                cout << "\a \n\n Invalid Option Entered - Please try again. \n\n";

        } // end of switch

    } while (choice != 'X');
    
    return;
} // end of main


// Function Definitions
void loadArray( )
{

	// Students must remove next line of code and code the rest of the function. 
    cout << "\n   loadArray has not been implemented yet. \n\n\n";


	// Open the file for input  
	// If there are any errors, 
	// display an error message and return.
	ifstream inputFile; 
	inputFile.open("P09.txt");
	if (!inputFile)
		{
			cout << "Error opening file P09.txt. \n";
		}

	// Declare index and initialize to zero for first array element
	int  i = 0;
	while (!inputFile.eof())
	{
		if i < ARRAY_SIZE;
		inputFile >> employeeId;
		i++
		
	}
	inputFile.close();
// Read the first record into array 
// Use while loop to process file, because 
// while loops handle empty files.
// increment counter, i++;
// Check if array size exceeded
// Read next Id into array
// end while loop
//  Close the file
//  Save the number of records loaded


    numberOfEmps = i;
	cout << "Number of records loaded  is" +numberOfEmps;
    return;
}


void sortArrayAscending( )
{
    int minIndex, minValue, holdValue;

	// Students need to code for-loop to sort employeeId in ascending order
	//Bubble sort
	for (minIndex = 0; minIndex < employeeId.length-1; minIndex++) { //Pass length-1 times
		for (minValue = minIndex + 1; minValue < employeeId.length; minValue++) { //Scan through rest of array
			if (a[minValue] < a[minIndex]) { //Find the minimum in rest of array
				temp = a[minValue]; 
				a[minValue] = a[minIndex]; 
				a[minIndex] = holdValue; //Swap the two values
			}		
		}
	}
    return;
}


void sortArrayDescending( )
{
	// For a descending sort we still walk through the array, but this
	// time we are searching for the highest values.
    int maxIndex, maxValue, holdValue;

	// Students need to code for-loop to sort employeeId in descending order 

    return;
}


void displayArray( )
{
    cout << endl;

    for (int i = 0; i < numberOfEmps; i++)
    {
        cout << "position = "; 
        cout <<  (i + 1);

        cout << "  index = "; 
        cout <<  i;

        cout << "  value = ";
        cout <<  employeeId[i] 
             << endl;
    }
    return;
}

// Early exit - an early exit from a search can occur when we know that
// the value we are looking for will not be found in the array.  To
// implement an early exit, the array most be sorted ascending.
// If  we can determine that a value will not be found, we should
// not search the remainder of the array.

void searchArray( )
{ 
// array must be sorted ascending for early exit logic to work  
    sortArrayAscending( ); 

    int  searchId;
    bool numberFound = false;

    cout << "Enter Employee Id to search for: ";
    cin >> searchId;

// Students need to code for-loop to search employeeId 
// include early exit logic

    return;
}


void displayContinuePrompt()
{
    char prompt;

    cout << "\n\nProcedure completed. Press Enter to continue: ";
    cin.ignore();
    prompt = cin.get();

    system("cls");   
    return;
}
// End of program