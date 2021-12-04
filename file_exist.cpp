#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
using namespace std;
using std::cout; using std::cin;
using std::filesystem::exists;
using std::string;



int main() {


// Create and open a text file
  ofstream filelk("0_schematic.txt");

  // Write to the file
 // filelk << " ";

  // Close the file
  filelk.close();

    if (exists("0_schematic.txt")){
        cout << "Exists\n" ;
    }else{
		cout << "Doesn't exist\n";
	}

    return EXIT_SUCCESS;
}
