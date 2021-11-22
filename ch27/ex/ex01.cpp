// BUG BUSTERS: Find the error in the following code:
// fstream myFile;
// myFile.open("HelloFile.txt", ios_base::out);
// myFile << "Hello file!";
// myFile.close();

// Missing check myFile.is_open().

// fstream myFile;
// myFile.open("HelloFile.txt", ios_base::out);
// 
// if (myFile.is_open())
// {
//     myFile << "Hello file!";
//     myFile.close();
// }
