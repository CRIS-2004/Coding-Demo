#include <iostream>
using namespace std;

	 void listFile(){
	int num;
	cout << "\n   List File Detail     "<< endl ;
	cout << " -------------------------   "<< endl ;	 
	cout << "1. List All Files "<< endl ;
	cout << "2. List of Extension Files " << endl;
	cout << "3.List of Name Wise"<< endl;
	cout << " Enter the Number of your Choice: ";
		cin >> num;
		
		if(num == 1){
	cout << "\nList of All(*.*) Files "<< endl;
	cout << "file1.txt"<< endl;
	cout << "file2.cpp"<< endl;
	cout << "report.doc"<< endl;
	cout << "image.jpg"<< endl;
	cout << "(continues...)"<< endl;
	cout << "\nTotal Files: 4"<< endl;
	cout << "Please Press any key  to continue...\n"<< endl;
	
		}
	}
	
	void createDirectory(){
	string Name;
	cout << "\nEnter the Directory name: ";
		cin >> Name;
	cout << "Current directory: C: \\Users\\UserName\\Documents"<< endl;
	cout << Name << " Directory Successfully Created"<< endl;
	cout << "Please Press any key to continue..."<< endl;
	}	
	
	
	void changeDirectory() {
    string Name;
    int num;
    cout << "\nCurrent Directory: C:\\Users\\UserName\\Documents\n" << endl;
    cout << "        Change Directory      "<< endl;
    cout << " -------------------------   "<< endl ;
    cout << "1. Step by Step Backward"<< endl;
    cout << "2. Goto Root Directory"<< endl;
    cout << "3. Forward Directory"<< endl;
    cout << "Enter the Number of your Choice: ";
    	cin >> num;
    cout <<""<<endl;
    cout << "Please Enter the Directory Name: ";
    	cin >> Name;
    cout << "Current Directory: C:\\Users\\UserName\\Documents\\" << Name << endl;
    cout << "Please Press any key  to continue...\n"<< endl;
	}
	
	
	int main(){
	int num;
	 do{
	 	cout << "\n         MAIN MENU       "  << endl;
		cout << " -------------------------   "<< endl ;
	 	cout << "1. To Display List of Files"<< endl;
	 	cout << "2. To Create New Directory"<< endl;
	 	cout << "3. To Change the Working Directory"<< endl;
	 	cout << "4. Exit"<< endl;
		cout << "Enter the Number of your Choice:"; 
	 	cin >> num;
	 	
	 	 if (num == 1){
        	listFile();
			}else if(num == 2){
				createDirectory();
			}else if(num == 3){
				changeDirectory();
			}else if(num == 4){
				cout << "Exiting" << endl;
			}else {
				cout << "Invalid Number! Please Try again." << endl;
			}

    	} while (num != 4);

	 
	 
	
	return 0;
	
}
