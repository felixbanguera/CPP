#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 10:\n" << endl;
  cout << "File I/O: \n\n"
    << "Files can be written to and read from using the library 'fstream':\n"
    << "'ofstream' for writing and 'ifstream' for reading.\n"
    << "Options to use with ofstream:\n"
    << "  ios::in -     Open for inout operations.\n"
    << "  ios::out -    Open for output operations.\n"
    << "  ios::binary - Open in binary mode.\n"
    << "  ios::ate -    Set the initial position at the end of the file. \n"
    << "                If this flag is not set, the initial position is the beginning of the file.\n"
    << "  ios::app -    All output operations are performed at the end of the file, appending the \n"
    << "                content to the current content of the file.\n"
    << "  ios::trunc -  If the file is opened for output operations and it already existed, its \n"
    << "                previous content is deleted and replaced by the new one.\n"
    << endl;
  cout << "Example: writing/reading to/from a file, check the code and the file created as txt after running it. :)\n\n";

  string quote = "Monsters are real,ghosts are real too..They live inside us and sometimes they win..!!";
  string by = "― Stephen King.";

  //Writing the first line
  ofstream writer_to_test_file("test.txt");
  if(!writer_to_test_file.is_open()){
    cout << "An error has occured while creating the writer_to_test_file" << endl;
    return -1;
  }else{
    writer_to_test_file << quote << endl;
    writer_to_test_file.close();
  }
  //Appending the second line
  ofstream writer2("test.txt", ios::app);
  if(!writer2){
    cout << "An error has occured while creating the writer2" << endl;
    return -1;
  }else{
    writer2 << "\n  " << by << endl;
    writer2.close();
  }

  //Reading to the console whats written in the file

  cout << "this will be reading by lines::\n" << endl;
  string each_line;
  ifstream reader_by_lines("test.txt");
  if(!reader_by_lines.is_open()){
    cout << "An error has occured while creating the reader_by_lines" << endl;
    return -1;
  }else{
    while(getline(reader_by_lines, each_line)){
      cout << each_line << "\n";
    }
    reader_by_lines.close();
  }

  cout << "this will be reading by characters::\n" << endl;
  char each_letter_read;
  ifstream reader_by_chars("test.txt");
  if(!reader_by_chars.is_open()){
    cout << "An error has occured while creating the reader_by_chars" << endl;
    return -1;
  }else{
    for (int i = 0; !reader_by_chars.eof(); i++)
    {
      reader_by_chars.get(each_letter_read);
      cout << each_letter_read;
    }
    cout << endl;
    reader_by_chars.close();
  }

  return 0;
}