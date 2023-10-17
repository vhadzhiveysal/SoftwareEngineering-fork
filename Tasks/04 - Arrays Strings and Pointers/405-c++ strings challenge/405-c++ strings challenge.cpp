#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here

    size_t loc = input.find("42");
    cout << "\"42\" is found at location " << loc << endl;


    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    int count = 0;
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the") {
            count += 1;
        } else {
            continue;
        }
    }
    cout << "\"the\" is found " << count << " many times in that sentence" << endl;


    // challenge 3 listed in the github file - reversing the elements of an array
    // starting with an array of integers, write some code to reverse their order
    // a. for the first version you can use a second array to hold result
    // b. for second version, try to perform this using a single array (in-place modification)

    int arr[] = { 1, 2, 3, 4, 5 };

    int arrLength = sizeof(arr) / sizeof(int); //calculates length of array
    
    cout << "unreversed array:" << endl;

    //write out elements of array
    for (unsigned int n = 0; n < arrLength; n++) {
        cout << arr[n] << " ";
    }

    reverse(begin(arr), end(arr)); //reverses the array content using reverse function

    cout << endl << "reversed array:" << endl;

    for (unsigned int n = 0; n < arrLength; n++) {
        cout << arr[n] << " ";
    }
}

