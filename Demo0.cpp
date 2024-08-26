#include <iostream>
using namespace std;

	 void listFile(){
	int num;
	cout << "   List File Detail     "<< ;
	cout << "1. List All Files "<< ;
	cout << "2. List of Extension Files " << ;
	cout << "3.List of Name Wise"<<;
	cout << "Enter your Choice: ";
		cin >> num;
		
		if(num == 1){
	cout << "\nList of All(*.*) Files "<< ;
	cout << "file1.txt"<< ;
	cout << "file2.cpp"<< ;
	cout << "report.doc"<< ;
	cout << "image.jpg"<< ;
	cout << "(continues...)"<< ;
	cout << "Total Files: 4"<< ;
	cout << "Press any key  to continue..."<< ;
	
		}
	}
	
	void createDirectory(){
	string Name;
	cout << "Enter the Directory name: "<< ;
		cin >> Name;
	cout << "Current directory: C: \\Users\\UserName\\Documents"<< ;
	cout << Name << "Directory Successfully Created"<< endl;
	cout << "Press any key to continue..."<< endl;
	}	
	
	
	void changeDirectory() {
    string Name;
    int num;
    cout << "\nCurrent Directory: C:\\Users\\UserName\\Documents\n" << endl;
    cout << "        Change Directory      "<< endl;
    cout << "1. Step by Step Backward"<< endl;
    cout << "2. Goto Root Directory"<< endl;
    cout << "3. Forward Directory"<< endl;
    cout << "Enter the Number: ";
    	cin >> num;
    cout <<""<<endl;
    cout << "Please enter the Directory Name: ";
    	cin >> Name;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\\" << Name << endl;
    cout << "Press any key  to continue...\n"<< endl;
	}
	
	
	int main(){
	int num;
	 do{
	 	cout << "         MAIN MENU       "  << endl;
	 	cout << "1. To Display List of Files"<< endl;
	 	cout << "2. To Create New Directory"<< endl;
	 	cout << "3. To Change the Working Directory"<< endl;
	 	cout << "4. Exit"<< endl;
	 	cin >> num;
	 	
	 	 if (num == 1){
        	listFile();
			}else if(num == 2){
				createDirectory();
			}else if(num == 3){
				changeDirectory();
			}else if(num == 4){
				cout << "Exiting..." << endl;
			}else {
				cout << "Invalid choice! Try again." << endl;
			}

    	} while (num != 4);

	 
	 
	
	return 0;
	
}
