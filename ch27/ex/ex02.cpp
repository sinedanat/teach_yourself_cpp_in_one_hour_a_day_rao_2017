// BUG BUSTERS: Find the error in the following code:
// ifstream myFile("SomeFile.txt");
//
// if (myFile.is_open())
// {
//     myFile << "This is some text" << endl;
//     myFile.close();
// }

// You cannot write to ifstream and should use std::getline() to read a line.
// 
// ifstream myFile("SomeFile.txt");
// 
// if (myFile.is_open())
// {
//     std::string line;
// 
//     while (myFile.good())
//     {
//         std::getline(myFile, line);
//         cout << line << endl;
//     }
// 
//     myFile.close();
// }
