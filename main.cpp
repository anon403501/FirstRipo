#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

  string action;
  string Notes;
  string Ntext;
  string trash;

  while(1)
  {

    cout << "press 0 to exit 1 to change current text 2 to read current text : " << flush;
    cin >> action;

    if(action == "0")
    {
      cout << "see ya" << endl;
      exit(1);
    }

    else if(action == "1")
    {
      cout << "what do you want to write to the file? start typing below :" << endl << endl;
      cin >> Ntext;

      ofstream MyFile("Notes.txt");
      // Write to the file
      MyFile << Ntext;

      cout << "done??" << endl;
      MyFile.close();


    }

    else if(action == "2")
    {
      cout << endl << "START OF Notes..." << endl << endl;
      ifstream MyReadFile("Notes.txt");

      while (getline (MyReadFile, Notes))
      {
        // Output the text from the file
        cout << Notes << endl;

        cout << endl << "END OF Notes..." << endl << endl;
      }
      MyReadFile.close();
    }
    else
    {
      cout << endl << "sorry... wrong input" << endl << endl;
    }


    cout << "Ntext = " << Ntext << endl;

  }
  return 0;
}
