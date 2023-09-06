#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<cwchar>
#include<windows.h>    // Header file to change color of text and background
#include<cstdio>
#include<cmath>
#include <ctime>
#include<dos.h>//for time delay
  
using namespace std;
class directory{
	int PhNo;
    char fname[50], lname[50];
    string  address, org, relation;
    int pd, pm, py, bd, bm, by;
    int y;
 
    public:
    
	    void phonebook()
		{
			system("cls");
			time_t t = time(NULL);
            tm* timePtr = localtime(&t);
			cout << "\t\t\t\t\t\t\t\t\t\t Date:" <<(timePtr->tm_mday)<<"/"<< (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_year)+1900;
            cout <<" Current Time:" << (timePtr->tm_hour)<<":"<< (timePtr->tm_min)<<":"<< (timePtr->tm_sec) << endl;
    
			cout<<"\n\n\t\t\t\t------------PHONEBOOK------------\n\n";
		}
		

    
    //help from user
    void help()
	{
 	system("cls");
 	phonebook();
	
    cout<<"\n\t\t----------Help----------";
	cout<<"\n\n\t\t1.ABOUT OUR PROGRAM";
	cout<<"\n\n\t\t2. MENU";
	
	cout<<"\n\t\t\tENTER YOUR CHOICE...";
	PQ:
	    switch(getch())
	    {
		    case '1':  aboutinhelp();
            break;
            case '2':  menu();
            break;
            default:  cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
			cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
			if(getch()==13)
			system("cls");
			goto PQ;
	    }
	
	getch();	
    }

 
  void aboutinhelp()
   {
	system("cls");
	phonebook();
    cout << "\n\n\t\t-----------ABOUT OUR PROGRAM-------------\n\n";

 	cout<<"\n\t\tPhone Book System is an application developed by mini-project students.";
	cout<< "\n\n\t\tIn the olden days, we stored all our important contact details in books and papers.\t\t"; 
	cout<< "\n\t\tHere we procured a new system by using this application we can store all the details \n\t\tin a central repository.";
 	cout<<"\n\n\t\tIn the manual method if we forget the information book then it is very difficult to \n\t\tget the contact details.";
	cout<<" By using this application, we can see your contacts anywhere\n\t\tin the world, here we will have security to the login page and no one can see our contacts \n\t\twithout proper authentication.";
	cout<<"\n\n\t\tIn this project, we can save our contacts and we can search them by name and we can see all\n\t\tof them at a time.";
 	cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO HELP.";
        getch();
        system("cls");
        help();
       
	} 	

   
   void aboutinhomepage()
   {
	system("cls");
	phonebook();
    cout << "\n\n\t\t-----------ABOUT OUR PROGRAM-------------\n\n";

 	cout<<"\n\t\tPhone Book System is an application developed by mini-project students.";
	cout<< "\n\n\t\tIn the olden days, we stored all our important contact details in books and papers.\t\t"; 
	cout<< "\n\t\tHere we procured a new system by using this application we can store all the details \n\t\tin a central repository.";
 	cout<<"\n\n\t\tIn the manual method if we forget the information book then it is very difficult to \n\t\tget the contact details.";
	cout<<" By using this application, we can see your contacts anywhere\n\t\tin the world, here we will have security to the login page and no one can see our contacts \n\t\twithout proper authentication.";
	cout<<"\n\n\t\tIn this project, we can save our contacts and we can search them by name and we can see all\n\t\tof them at a time.";
 	
  cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO HOMEPAGE.";
        getch();
        system("cls");
        homepage();
       
	 	

   }
   
   

     void settings()
	{
	    system("cls");
	    int a;
	    phonebook();
	    PQ:
        
       
		cout<<"\n\t\t\t---------SETTINGS---------";
		
    
		cout<<"\n\t\t\t_______________________";
		cout<<"\n\t\t\t1.TEXTCOLOR";
		cout<<"\n\t\t\t2.FONTSIZE";
		cout<<"\n\n\t\t3.FONTSTYLE";
		cout<<"\n\n\t\t4.MENU";
		cout<<"\n\t\t\t________________________";
		cout<<"\n\t\t\tENTER YOUR CHOICE-";
		
	    
	    switch(getch())
		{
		case '1':  textcolor();
            break;
        case '2': fontsize();
            break;
        case '3': fontstyle();
            break;
        case '4': menu();
        
        default:  cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
        cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
        if(getch()==13)
        system("cls");
        goto PQ;
        
      	}
	
	    getch();	
    }
    

    int textcolor()
    {
        int P;
		system ("cls");
		phonebook();
		cout<<"\n\t\t\t---------SETTINGS---------";
	    cout<<"\n\n\t\t\t\t------------FONT COLOR-----------";
	// Color of the console
        HANDLE console_color;
        console_color = GetStdHandle(
        STD_OUTPUT_HANDLE);
        // Print different colors from 1
        // to 50 on the output screen
        P=0;
        SetConsoleTextAttribute( console_color, P);
        cout<<"0 = Black";
        P=1;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t1 = Blue";
        P=2;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t2 = Green";
        P=3;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t3 = Aqua";
        P=4;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t4 = Red";
        P=5;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t5 = Purple";
        P=6;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t6 = Yellow";
        P=7;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t7 = White";
        P=8;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t8 = Gray";
        P=9;
        SetConsoleTextAttribute( console_color, P);
        cout<<"\n\t9 = Light Blue";
        
        
        //changing color back to white
		P=7;
        SetConsoleTextAttribute( console_color, P);
        
    cout<<"\n\nEnter your choice:";
    cin>>P;
    
   
        SetConsoleTextAttribute( console_color, P);
      
    cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO SETTINGS.";
    getch();
    system("cls");
    settings(); 
  
    return 0;
   }


    
    void fontsize()
    {
	
	    CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 6;
                  // Width of each character in the font better stay fixed
		phonebook();
		cout<<"\n\t\t\t---------SETTINGS---------";
		
	    cout<<"\n\n\t\t\t\t------------FONT COLOR-----------";
		
		int n;
		EF:
		cout<<"Fontsize allowed from 20 to 25 only.";
		cout<<"\nEnter fontsize:";
		cin>>n;
		switch(n)
		{
			
			case 20: 
			         cfi.dwFontSize.Y = 20;
			         cfi.dwFontSize.X = 0; 
			         SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		             	break;
			case 21: 
		         	cfi.dwFontSize.Y = 21;
		         	cfi.dwFontSize.X = 0; 
			        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			             break;
			case 22: 
		        	cfi.dwFontSize.Y = 22;
					cfi.dwFontSize.X = 0; 
					SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			              break;
			case 23: 
			        cfi.dwFontSize.Y = 23; 
			        cfi.dwFontSize.X = 0; 
					SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			                break;
			case 24: 
			        cfi.dwFontSize.Y = 24;
			         cfi.dwFontSize.X = 0; 
					 SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			                break;
			case 25: 
			        cfi.dwFontSize.Y = 25;
			        cfi.dwFontSize.X = 0; 
			        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			                break;
			default: 
			        cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
                    cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
					if(getch()==13)
					system("cls");
					goto EF;	
		}
		cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO SETTINGS.";
    getch();
    system("cls");
    settings();
	
    }



 void fontstyle()
    {
	int n;
	    CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0; 
		           // Width of each character in the font better stay fixed
		
		int x;
		FS:
		// Width of each character in the font better stay fixed
		phonebook();
		cout<<"\n\t\t\t---------SETTINGS---------";
	   
		cout << "\n\n\t\t-----------FONT STYLE-------------\n\n";
		cout<<"\n\t1.Calibiri";
		cout<<"\n\t2.Consolas";
		
		
		cout<<"\nEnter fontstyle:";
		cin>>n;
		switch(n)
		{
			
			case 1: std::wcscpy(cfi.FaceName, L"Calibiri or Original");
			SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			break;
			case 2: std::wcscpy(cfi.FaceName, L"Consolas");
			SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
			break;
			
			default: 
			        cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
                    cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
					if(getch()==13)
					system("cls");
					goto FS;		
		}
		cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO SETTINGS.";
    getch();
    system("cls");
    settings();
    }
    
    void display()
    {
	phonebook();
	string filename="Directory.dir";
                 	
                 	fstream myfile(filename.c_str(), ios_base::in);
	                
	                if (!myfile) {
		            cout << "File Opening Error!!!";
	                }
	                else
	                {
	            	    string line;
						cout<<endl<<"---------Contacts In Directory----------\n";
						cout<<"\tName\t\tPhNo"<<endl;
                        while (!myfile.eof())
		                {
			                getline(myfile,line);
			                if(myfile.good())
			                {
				                cout<<"    "<<line<<endl;
		                    }
                        }
		                myfile.close();    
	                 } 
	                 cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO MENU.";
                    getch();
                    
                    menu();
        
}
	
	
	
    
    void menu()
	{
     	int choice;
     	
		phonebook();
		cout<<"\n\n\t\t\t\t\t\tMENU\t\t";
        cout<<"\n\t\t\t\t___________________________________________\n\n";
		cout<<"\n\t\t\t\t\t1.Enter New Contacts";
		cout<<"\n\t\t\t\t\t2.View The Contact List";
		cout<<"\n\t\t\t\t\t3.Search / Sort Existing Contact";
		cout<<"\n\t\t\t\t\t4.Delete Existing Contact";
		cout<<"\n\t\t\t\t\t5.Modify Existing Contact";
		cout<<"\n\t\t\t\t\t6.Emergency Conatcts List";
		cout<<"\n\t\t\t\t\t7.Favourite Contacts List";
		cout<<"\n\t\t\t\t\t8.Help";
		cout<<"\n\t\t\t\t\t9.Settings";
		cout<<"\n\t\t\t\t\t10.Log Out";
		cout<<"\n\t\t\t\t\t11.Log Out and Exit\n";
		cout<<"\n\t\t\t\t______________________________________________\n\n";
		cout<<"\nPlease enter your choice: ";
		pqr:
		cin >> choice;
		lok:
		switch (choice)
		{
		case 1: GetDetails(); 
	    break;
		case 2: display(); 
	     break;
	     case 3: searchmenu(); 
	     break;
		case 4: deletecontact();
	     break;
		 case 5: mod();
		 break;
		 case 6: showemergencylist();
		 break;
		 case 7: showfavlist();
		 break;
		 case 8: help();
         break;
		case 9: settings();
		 break;
		case 10: cout<<"\nLogged out successfully!\n";
         system("pause");
         back();
		case 11: back();
		default: 
		cout << "\nWrong Input! Try Again... "; 
		goto pqr;
        }
    }



	
    
    void menufromadmin()
	{
     	int choice;
     	
		phonebook();
		cout<<"\n\n\t\t\t\t\t\tMENU\t\t";
        cout<<"\n\t\t\t\t___________________________________________\n\n";
		cout<<"\n\t\t\t\t\t1.Enter New Contacts";
		cout<<"\n\t\t\t\t\t2.View The Contact List";
		cout<<"\n\t\t\t\t\t3.Search / Sort Existing Contact";
		cout<<"\n\t\t\t\t\t4.Delete Existing Contact";
		cout<<"\n\t\t\t\t\t5.Modify Existing Contact";
		cout<<"\n\t\t\t\t\t6.Emergency Conatcts List";
		cout<<"\n\t\t\t\t\t7.Favourite Contacts List";
		cout<<"\n\t\t\t\t\t8.Help";
		cout<<"\n\t\t\t\t\t9.Settings";
		cout<<"\n\t\t\t\t\t10.AdminMenu ";
		cout<<"\n\t\t\t\t\t11.Log Out";
		cout<<"\n\t\t\t\t\t12.Log Out and Exit\n";
		cout<<"\n\t\t\t\t______________________________________________\n\n";
		cout<<"\nPlease enter your choice: ";
		pqr:
		cin >> choice;
		lok:
		switch (choice)
		{
		case 1: GetDetails(); 
	    break;
		case 2: display(); 
	     break;
	     case 3: searchmenu(); 
	     break;
		case 4: deletecontact();
	     break;
		 case 5: mod();
		 break;
		 case 6: showemergencylist();
		 break;
		 case 7: showfavlist();
		 break;
		 case 8: help();
         break;
		case 9: settings();
		 break;
		 case 10: adminmenu();
		 break;
		case 11: cout<<"\nLogged out successfully!\n";
         system("pause");
         back();
		case 12: back();
		default: 
		cout << "\nWrong Input! Try Again... "; 
		goto pqr;
        }
    }

    
     
    
    
    int checkphnno(string a)
	{
	    int flag=0;
		string b;
		fstream f1("Directory.dir",ios::in);
		while(f1)
		{
		    f1 >> b;
		    if(b==a)
			{
		        flag = 1; 
				break;
		    }
        }
        f1.close();
		if(flag==1)
		{
            cout << "\nSorry! Contact already exists. \nPlease try another: ";
			system("pause");
			return 1;
		}
		return 0;
    }


    
            
      void GetDetails()
	{
	    ooo:
		string fname, lname, PhNo;
		char choice = 'y';
		if(choice=='Y'||choice=='y')
	    {
		system("cls");
		
		fstream my_file("Directory.dir",ios::in|ios::out|ios::app);
		ILY:
		    system("cls");
		    phonebook();
		    cout<<"\n\t\t\t---------MENU---------";
	        cout<<"\n\n\t\t\t\t------------GET DETAILS-----------";
	        cout << "\n\nEnter First Name : ";
	        
	        cv:
		     cin >> fname;
		     int flag=0;
             string b;
		     string a=fname;
             fstream f1;
			 f1.open("Directory.dir",ios::in| ios::out|ios::app);
             while(f1)
             {
                f1 >> b;
                if(b==a)
                {
                flag = 1; break;
                }
             }
             f1.close();
             if(flag==1)
             {
		        cout << "\nSorry! Contact name already exists. ";
		        OO:
				cout<<"\n\t\tPress [1] To Edit This Contact";
		        cout<<"\n\t\tPress [2] To Add New Conact ";
		        
		        cout<<"\n\t\tEnter Your Choice: ";
		        char a;
		        cin>>a;
						switch(a)
                        {
                            case '1': mod();
			                break;
			                case '2': goto ILY;
			                break;
		                    default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
			                cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
			                if(getch()==13)
			                
			                goto OO;
                            getch();             
                        }
             }
	        
	        string filename=fname;
	        fstream myfile;
            myfile.open(filename.c_str(), ios::out|ios::in|ios::app);
	        if (!myfile)
	     	{
		        cout << "File not created!";
	        }
	        else
	        {
	    
			        
		            cout<<"Enter Last name:";
                    cin>>lname;
                    myfile<<" First Name: "<<fname<<endl;
                    myfile <<" Last Name: " <<lname << endl;
                    
                    cout<<"Enter Phonenumber:";
                    cin>>PhNo;
                    int check=checkphnno(PhNo);
		            if(check==1)
		            {
	                    cout<<"\n\nContact Number Already Exists";
			            goto ooo;
                    }
		            else
		            {
	                    myfile <<" PhoneNumber: "<< PhNo << endl;
	                    
	                    myfile.close();
	                    my_file <<fname<<" "<<lname<<"\t\t"<<PhNo<<endl;
	                    my_file.close();
	                    
						cout<<"Record Saved";
						cout<<"\nPress [1] To Enter More Contact";
						cout<<"\nPress [2] To Add More Details Of The Contact";
						cout<<"\nPress [3] To Exit";
						TY:
						cout<<"\nEnter Your Choice: ";
						switch(getch())
                        {
                            case '1': addmore();
			                break;
			                case '2': details(fname);
			                break;
			                case '3': menu();
		                 	break;
		                    default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
			                cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
			                if(getch()==13)
			                system("cls");
			                goto TY;
                            getch();             
                        }
					
	             	}
	        	}
	    }
	    else {
	    	menu();
		}
	}
	
	
	
    
    
    
    //to add more records
    void addmore()
    {
    char ans;
    
    cout<<"\n\t\t\tWOULD YOU LIKE TO ADD MORE CONTACTS(Y/N)?";
    cin>>ans;
    GH:
    if(ans == 'y' || ans == 'Y')
    {
    GetDetails();
    }       
    else if (ans == 'n' || ans == 'N')
	menu();  
	else  cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
        cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
        if(getch()==13)
        system("cls");
        goto GH;
    }
        

	 void details(string name)
            {
            	//	fstream myfile(filename.c_str(), std::ios_base::in);
            	string PhNo;
				string  address, org, relation;
				int pd, pm, py, bd, bm, by;
				GS:	
				system("cls");
				cout<<"\n\t\t\t---------MENU---------";
	            cout<<"\n\n\t\t\t\t------------GET DETAILS-----------";
            	cout<<"\n\n\t\t\t\t\t\t------------ADD MORE DETAILS-----------";
            	
	            string filename=name;
	            fstream myfile(filename.c_str(), ios::in|ios::out|ios::app);
				EF:
					system ("cls");
		            cout<<"\nPress [1] To Add Address";
		            cout<<"\nPress [2] To Add Organzation";
		            cout<<"\nPress [3] To Add Relationship";
					cout<<"\nPress [4] To Add Date Of Birth";
		            cout<<"\nPress [5] To Add The Record To Favourite List";
		            cout<<"\nPress [6] To Add The Record To Emergency Contact List";
		            cout<<"\nPress [7] To Add Social Media Handle";
		            cout<<"\nPress [8] To Go Back To Menu";
					
						cout<<endl;
					cout<<setfill ('-') << setw (30);
					cout<<"\nEnter Your Choice: ";
					char b;	
					cin>>b;
					switch(b)
                    {
                        case '1': {
                        	        cout<<"\nEnter Address: ";
                                    cin>>address;
								    myfile << " Address: "<<address<< endl;
                                    
                                    addaddress(name,PhNo,address);
                                   goto EF;
								   break;
							}
			            case '2': {
			            	         cout<<"\nEnter Organization: ";
                                    cin>>org;
								    myfile <<" Organization: "<< org<< endl;
                                   
                                    addorg(name,PhNo,org);
			                      goto EF;
			                      break;
						          }
			            case '3': {
						        cout<<"\nEnter Realtionship: ";
			                       cin>>relation;
			                       myfile <<" Relationship: "<< relation << endl;
			                       goto EF;
			                   	break;
						        }
			            case '4': {
							       cout<<"Note: If You Dont Know Date and Month Kindly Input In This Format";
                                   cout<<" \n\t\tEnter the birth date in the format dd mm yyyy :1 1 XXXX ";
                                   cout<<"\n--------------------------------------------------------\n";
								   cout << " Enter the birth date in the format dd mm yyyy : ";
								   cin >> bd >> bm >> by;
								   myfile<<" Date Of Birth: "<<by<<"/"<<bd<<"/"<<bm<<endl;
								   char a;
								   cout<<" Would you like to calculate age?";
								   cin>>a;
								   if (a == 'y')
								   {
								        cout << " Enter the present date in the format dd mm yyyy : ";
										cin >> pd >> pm >> py;
								        age(pd, pm, py, bd, bm, by);
							        }
								   else if(a == 'n'){
								   goto EF;
								   }
								    
								   
			                      
			                     break;
			                    }
			            case '5': {
							cout<<"Do you want to add this contact to favourite list? ";
			                      char choice;
			                      cin>>choice;
			                     
			                      myfile <<" Favourite: "<< choice <<endl;
			                        if (choice=='Y'||'y')
			                        {
			                      	    addtofav(name,PhNo);
								    }
								    else if(choice=='n') 
								    {
									
								    goto EF;
								}
			                    break;
			                     }
			            case '6':{
							 cout<<"Do you want to add this contact to emergency list? ";
			                      char choice;
			                      cin>>choice;
			                      myfile<<" Emergency: "<<choice<<endl;
			                        
			                        if (choice=='y')
			                        {
			                      	    addtoemergency(name,PhNo);
								    }
								    else if(choice=='n') 
								    {
									
								    goto EF;
								}
			            break;
			        }
			            case '7':{
			            	social(name);
							break;
						} 
			            
			            case '8':{cout<<"\n\n-----------Additional Details Saved.------------\n\n ";
			            system("pause");
			            	menu();
							break;
						}
						default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
						cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
						if(getch()==13)
						system("cls");
						goto GS;
						getch();             
                    }
		            myfile.close();
		            
		            
	            }
	            
	            
	            
	            
                             
                              void contactsofaddress(string address){
                              	    string filea=address;
                                    fstream myfilea(filea.c_str(), ios::in);
                                    string word;
                                    cout<<endl<<"---------Contacts Under Address:"<<address<<"---------\n";
                                    while (myfilea >> word)
                                    {
                                        cout<<endl;
							            cout <<"\t\t"<<word;
                                    }
                                   myfilea.close();
                              	
							  }
							  
							   void addorg(string name,string PhNo, string org)
	                        {
								
								   
                                   string filename=org+" contacts.dat";
								   fstream myfileo;
                                   myfileo.open(filename.c_str(), ios::out|ios::app);
                                   if (!myfileo) {
		                            cout << "Organization not saved!";
	                                }
	                                else
                                   	{
									   
                                   myfileo << name<<"\t\t"<<PhNo<<endl;
                                   myfileo.close();
                                   }
                                   cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADDING MORE DETAILS.";
                                    getch();
                                    system("cls");
                                    details(name);
                                    
							}
						

	      void addtoemergency(string name, string PhNo)
				{
					string filename="emergencylist.dat";
                 	fstream my_file;
	                my_file.open(filename.c_str(),ios::out|ios::app);
	                if (!my_file) {
		            cout << "Contact not added to Emergency List!";
	                }
	                else
	                {
		            my_file << name<<"\t\t"<<PhNo<<endl;
		            my_file.close();
		            cout << "\n----------\nContact Added To The Emergency List!\n----------\n";
		            getch();
	                }
	                cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADDING MORE DETAILS.";
                                    getch();
                                    system("cls");
                                    details(name);
             }
			void addtofav(string name, string PhNo)
                {	
                	string filename="favouritelist.dat";
                 	fstream my_file;
	                my_file.open(filename.c_str(),ios::out|ios::app );
	                if (!my_file) {
		            cout << "Contact not added to Favourite List!";
	                }
	                else
	                {
	            	
		            my_file <<name<<"\t\t"<<PhNo<<endl;
		            my_file.close();
		            cout << "\n----------\nContact Added To The Favourite List!\n----------\n";
		            getch();
					  
             	    }
             	    cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADDING MORE DETAILS.";
                                    getch();
                                    system("cls");
                                    details(name);
                 }
	  
    
void showfavlist()
    {
    	phonebook();
    	
	string filename="favouritelist.dat";
                 	
                 	fstream myfile(filename.c_str(), ios_base::in);
	                
	                if (!myfile) {
		            cout << "File Opening Error!!!";
	                }
	                else
	                {
	            	    string line;
						cout<<endl<<"---------Contacts In Favourite List----------\n";
						cout<<"\tName\t\tPhNo"<<endl;
                        while (!myfile.eof())
		                {
			                getline(myfile,line);
			                if(myfile.good())
			                {
				                cout<<"\t"<<line<<endl;
		                    }
                        }
		                myfile.close();    
	                 } 
	                 cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO MENU.";
                    getch();
                    
                    menu();
        
}
	

void showemergencylist()
{
phonebook();
string filename="emergencylist.dat";
                 	fstream my_file;
                 	fstream myfile(filename.c_str(), ios_base::in);
	                
	                if (!my_file) {
		            cout << "File Opening Error!!!";
	                }
	                else
	                {
	            	    string line;
						cout<<endl<<"\n---------Contacts In Emergency List----------\n";
                        cout<<"\tName\t\tPhNo"<<endl;
                        while (!myfile.eof())
		                {
			                getline(myfile,line);
			                if(myfile.good())
			                {
				                cout<<"\t"<<line<<endl;
		                    }
                        }
		                myfile.close();    
	                } 
	                cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO MENU.";
                    getch();
                    menu();                   
	}  


    void social(string name)
    {
	
	string filename=name;
	fstream myfile(filename.c_str(),ios::out|ios::app);
    
	cout<<"\n\n--------To Add Social Media Handle Of This Contact--------\n";
	cout<<"\nChoose The Social Media Platforms: "<<endl;
	cout<<" Press[1] For Instagram"<<endl;
	cout<<" Press[2] For Facebook"<<endl;
	cout<<" Press[3] For Twitter"<<endl;
	cout<<" Press[4] For LinkedIn"<<endl;
	cout<<" Press[5] For TikTok"<<endl;
	cout<<" Press[6] For Others"<<endl;
	cout<<" Press[7] To Go Back To Adding More Details"<<endl;
	HE:
			cout<<endl;
			cout<<setfill ('-') << setw (30);
			cout<<"\nEnter Your Choice: ";	
		switch(getch())
        {
            case '1': {
			    string ig;
            	cout<<" Instagram: ";
            	cin>>ig;
            	myfile<<" Instagram: "<<ig<<endl;;
            	
            	goto HE;
				break;
			}
			case '2': {
				string fb;
            	cout<<" Facebook: ";
            	cin>>fb;
            	myfile<<" Facebook: "<<fb<<endl;
            	
            	goto HE;
				break;
			}
			case '3':
			{
			    string tw ;
            	cout<<" Twitter: ";
            	cin>>tw;	
            	myfile<<" Twitter: "<<tw<<endl;
            
            	goto HE;
				break;
			}
			case '4': {string li;
            	cout<<"LinkedIn: ";
            	cin>>li;
            	
            	myfile<<" LinkedIn: "<<li<<endl;
            	
				goto HE;
			}
			case '5':
			{
				string ti;
            	cout<<"TikTok: ";
            	cin>>ti;
            	myfile<<" TikTok: "<<ti<<endl;
            	
				goto HE;
				break;
			}
			case '6':
			{
				string ot;
				string os;
				cout<<"Other: ";
				cout<<"\nEnter Social Media Site: ";
				cin>>ot;
			
				cout<<"\nEnter Handle:";
				cin>>os;
					myfile<<" "<<ot<<": "<<os<<endl;
				goto HE;
				break;
			}
			case '7': details(name);
			
				
				break;
			
			
			
			default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
			cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
			if(getch()==13)
			system("cls");
			goto HE;
            getch();             
        }
        myfile.close();
}


void showsocial(string name)
{
	string filename=name;
	char ch;
	fstream myfile(filename.c_str(),ios::in);
	while(!myfile.eof())
	{
		myfile.get(ch);
		if(ch==9)
		{ 
			cout<<"\t";
		}
		cout<<ch;
	}
	myfile.close();
	cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADDING MORE DETAILS.";
        getch();
        system("cls");
        details(name);
       
}
      
	   
void age(int pd, int pm, int py,int bd, int bm, int by)
    {
    	
        int d, m, y;
        int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        y = py - by;
        if (pm < bm)
        {
            y--;
            m = 12 - (bm - pm);       
        }
        else
           {
		   m = pm - bm;
		   }
        if (pd < bd)
        {
            m--;
    d = md[pm - 1] - (bd - pd);
  }
  else
  {d = pd - bd;}
  cout <<" Age is : \n";
  cout << y << " years " ;
  getch();
  
}
/*
void dateofbirth()
{
  int pd, pm, py, bd, bm, by;
  
  
  cout<<"\n--------------------------------------------------------\n";
  cout<<"Note: If You Dont Know Date and Month Kindly Input In This Format";
  cout<<" \n\t\tEnter the birth date in the format dd mm yyyy :1 1 XXXX ";
  cout<<"\n--------------------------------------------------------\n";
  
	
    
  cout << " Enter the birth date in the format dd mm yyyy : ";
   cin >> bd >> bm >> by;
   char d = (char)bd;
   char m = (char)bm;
   char y = (char)by;
   cout << " Enter the present date in the format dd mm yyyy : ";
  cin >> pd >> pm >> py;
  string name;
   string filename=name;
   
   fstream myfile(filename.c_str(), ios_base::in);
   myfile<<" Date of Birth: "<<by<<"/"<<bm<<"/"<<bd<<endl;
   myfile.close();
     age(pd, pm, py, bd, bm, by);

}
   
 */  
       void searchanddisplaydetails()
   {
   		string name;
		   phonebook();
		    cout<<"\n\t\t\t---------MENU---------";
	        cout<<"\n\n\t\t\t\t------------SEARCH AND DISPLAY-----------";
	        cout<<"\n\n\tEnter name: ";
	        cin>>name;
	        
	string	filename=name;
	fstream myfile(filename.c_str(), ios_base::in);
//	fstream myfile(filename.c_str(), std::ios_base::in);
    if (!myfile) {
		cout << "File not found!";
	}
	else{
	
    while (!myfile.eof())
    {
        string line;
        getline(myfile, line);
        if(myfile.good()){
        	cout<<line<<endl;
		}
    }
    myfile.close();
	}
	
	cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO SEARCHMENU.";
        getch();
        system("cls");
        searchmenu();
       
	
}
            
   	    
 
	

    

void searchmenu()
   
   {     
            string address,org;
   	phonebook();
		    
	        cout<<"\n\n\t\t\t\t------------SEARCH AND SORT MENU-----------";
	        	
        cout<<"\n\n\n\t\t\t\t___________________________________________";
		cout << "\n\n\t\t\t\t\t1.SEARCH BY NAME";
		cout <<"\n\t\t\t\t\t2.SEARCH AND DISPLAY DETAILS";
		cout<<"\n\t\t\t\t\t3.SORT BY ADDRESS";
		cout<<"\n\t\t\t\t\t4.SORT BY ORGANIZATION";
		cout<<"\n\t\t\t\t\t5.GO BACK TO MENU";
		cout<<"\n\t\t\t\t______________________________________________\n\n";
		cout<<"\nPlease enter your choice: ";
		pqr:
		int choice;
		cin >> choice;
		lok:
		switch (choice)
		{
		case 1: SearchAndDisplay(); 
	    break;
		case 2: searchanddisplaydetails();
	     break;
		case 3: contactsofaddress();
	     break;
		 case 4: contactsoforg();
		 break;
		 case 5:  menu();
		 break;
		 
		default: 
		cout << "\nWrong Input! Try Again... "; 
		goto lok;
        }
   	
   }   
   
  
void SearchAndDisplay()
    {
	    string line;
		string fName,lName,tNumber, strFName, strLName;
		char choice;
		int flag=0;
		int nextLoc=0;
		
		system("cls");
		do
		{
			phonebook();
		    cout<<"\n\t\t\t---------MENU---------";
	        cout<<"\n\n\t\t\t\t------------SEARCH AND DISPLAY NUMBER-----------";
            
			flag=0;
			ifstream myfile ("Directory.dir");
			if (myfile.is_open())
			{
                cout<<endl<<"Enter First Name: ";
				cin>>strFName;
				cout<<"Enter Last Name: ";
				cin>>strLName;
				while (! myfile.eof() )
				{
				     getline (myfile,line);
					 nextLoc=line.find(" ");
					 fName=line.substr(0,nextLoc);
					 line = line.substr(nextLoc+1,line.length());
					 nextLoc=line.find(" ");
					 lName=line.substr(0,nextLoc);
					 line = line.substr(nextLoc+1,line.length());
					 tNumber = line;
					 if(fName==strFName && lName==strLName)
                     {
					 cout<<"\nFound!!"<<endl;
					 cout<<endl<<"First Name: "<<fName<<"\n"<<"Last Name: "<<lName<<"\n"<<"Telephone Number: "<<tNumber<<endl ;
					 flag=1;
					 break;
					 }
			    }
			}
			else
			{
			    cout << "Unable to open file"<<endl;
				exit(0);
			}
			if(flag==0)
			{
			    cout<<"Not Found...Sorry."<<endl;
			}
			
		}while(choice=='y');
		searchcontinue();
		return;
	}
	
								
void contactsofaddress()
	 {
	 	string address;
	 	phonebook();
	 	cout<<"\n\n\t\t----------------SORT BY ADDRESS------------";
	 	cout<<"\n\n\t\tEnter address: ";
	 	cin>>address;
		string filename=address+" contacts.dat";
		fstream myfilea(filename.c_str(), ios::in);
		string line;
		cout<<endl<<"---------Contacts Under "<<address<<"---------\n";
		cout<<"\tName\t\tPhNo"<<endl;
		while (!myfilea.eof())
		{
			getline(myfilea,line);
			if(myfilea.good())
			{
				
				cout<<"\t"<<line<<endl;
		    }
        }
		myfilea.close();
		cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO SEARCHMENU.";
		getch();
		system("cls");
		searchmenu();
    }
		
    
    void addaddress(string name, string PhNo, string address)
	                        {
		                           
                                   string filename=address+" contacts.dat";
                                   fstream myfilea;
								   myfilea.open(filename.c_str(), ios::out|ios::app);
								   if (!myfilea) {
		                            cout << "Address not saved!";
	                                }
	                                else
                                   	{
									   
                                   myfilea << name<<"\t\t"<<PhNo<<endl;
                                   myfilea.close();
                                   }
                                   cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADDING MORE DETAILS.";
                                    getch();
                                    system("cls");
                                    details(name);
                                    
								}
    
							  
							  void contactsoforg(string org)
							{
                              	    string fileo=org;
                                    fstream myfileo(fileo.c_str(), ios::in);
                                    string word;
                                    cout<<endl<<"---------Contacts Under Organization"<<org<<"---------\n";
                                    while (myfileo >> word)
                                    {
                                        cout<<endl;
							            cout <<"\t\t"<<word;
                                    }
                                   myfileo.close();
                              	
							  }

	      
							  
							  
							  
							  
	void contactsoforg()
							{
								string org;
								phonebook();
	                         	cout<<"\n\n\t\t----------------SORT BY ORGANIZATION------------";
								
								cout<<"\n\n\t\t\tEnter Organization:";
								cin>>org;
                              	string filename =org+" contacts.dat";
                                fstream myfileo (filename.c_str(), ios::in);
                                    string line;
                                    cout<<endl<<"---------Contacts Under "<<org<<"---------\n";
                                    cout<<"\tName\t\tPhNo"<<endl;
                                    while (!myfileo.eof())
		                            {
			                            getline(myfileo,line);
										if(myfileo.good())
										{
										    cout<<"\t"<<line<<endl;
		                                }
                                     }
		
                                   myfileo.close();
                              	cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO SEARCHMENU.";
                                getch();
                               system("cls");
                                searchmenu();
							  }
	//CONTINUE SEARCHING
    void searchcontinue()
    {
    char ans;
    cout<<"\n\t\t\tWOULD YOU LIKE TO SEARCH MORE CONTACTS(Y/N)?";
    cin>>ans;
    IJ:
    if(ans == 'y' || ans == 'Y')
    {
        SearchAndDisplay();
    }       
    else if(ans == 'n' || ans == 'N')
	{
	    searchmenu();
	} 
	
}
	
 
    void deletecontact()
    {
	    system("cls");
		string line, fName, lName, strLName, tNumber;
		char strFName[20]; 
		int nextLoc=0,flag=0;
		afg:
		phonebook();
		cout<<"\n\t\t\t---------MENU---------";
	    cout<<"\n\n\t\t\t\t------------DELETE CONTACTS-----------";
		cout << "\nPlease enter the first name of record you want to delete: ";
		cin>>strFName;
		cout << "\nPlease enter the last name of record you want to delete: ";
		cin>>strLName;
		ifstream myfile;
		ofstream temp;
		myfile.open("Directory.dir");
		temp.open("temp.dir");
		while (!myfile.eof())
		{
		    getline (myfile,line);
			nextLoc=line.find(" ");
			fName=line.substr(0,nextLoc);
			line = line.substr(nextLoc+1,line.length());
			nextLoc=line.find(" ");
			lName=line.substr(0,nextLoc);
			line = line.substr(nextLoc+1,line.length());
			tNumber = line;
			if(!(fName==strFName&&lName==strLName))
			temp << fName <<" "<< lName <<" "<< tNumber<< endl;
			else
			flag++;
        }
		if(flag==0)
		{
		    cout<<"\nRecord not found. Try again!!\n\n";
		    getch();
			goto afg;
		}
		
		
		
		int status;
		
    status = remove(strFName);
    if(status==0)
        
		cout << "The record with the name " << strFName <<" "<<strLName<< " has been deleted " << endl;
    else
        cout<<"\nError Occurred!";
    cout<<endl;
		
		myfile.close();
		temp.close();
		remove("Directory.dir");
		rename("temp.dir", "Directory.dir");
		
		deletecontinue();
    }
    
    
    void deletecontinue()
    {   
    char ans;
    cout<<"\n\t\t\tWOULD YOU LIKE TO DELETE MORE CONTACTS(Y/N)?";
    cin>>ans;
    KL:
    if(ans == 'y' || ans == 'Y')
    {
    deletecontact();
    }       
    else if(ans == 'n' || ans == 'N'){
	 menu();
	 } 
    else cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
        cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
        if(getch()==13)
        system("cls");
        goto KL;
    }

    
    //edit existing records
    void mod()
	{
	    system("cls");
		
		char strFName[20];
		string line,fName,  lName, strLName , tNumber;
		int nextLoc=0,flag=0;
		phonebook();
		cout<<"\n\t\t\t\t\t\t---------MENU---------";
	    cout<<"\n\n\t\t\t\t------------EDIT CONTACTS-----------";
		afgh:
		cout << "\nPlease enter the first name of record you want to modify: ";
		cin>>strFName;
		cout << "\nPlease enter the last name of record you want to modify: ";
		cin>>strLName;
		ifstream myfile;
		ofstream temp;
		myfile.open("Directory.dir");
		temp.open("temp1.dir");
		while (!myfile.eof())
		{
		    getline (myfile,line);
			nextLoc=line.find(" ");
			fName=line.substr(0,nextLoc);
			line = line.substr(nextLoc+1,line.length());
			nextLoc=line.find(" ");
			lName=line.substr(0,nextLoc);
			line = line.substr(nextLoc+1,line.length());
			tNumber = line;
			if(!(fName==strFName || lName==strLName))
                temp << fName <<" "<< lName <<" "<< tNumber<< endl;
            else
			    flag++;
		}
		    if(flag==0)
		   {
		    cout<<"\nRecord not found!! Try Again.\n\n";
			goto afgh;
		   }
		myfile.close();
		temp.close();
		remove("Directory.dir");
		rename("temp1.dir", "Directory.dir");
		char fname2[20];
		string  lname2, tnumber2;
		fstream myfile2("Directory.dir",ios::app);
		cout << "\n\nEnter New First Name : ";
		cin >> fname2;
		check(fname2);
		myfile2 <<endl <<fname2 << " ";
		cout << "\nEnter New Last Name : ";
		cin >> lname2;
		myfile2 << lname2 << " ";
		cout << "\nEnter New Phone Number : ";
		cin >> tnumber2;
		checkphnno(tnumber2);
		myfile2 << tnumber2;
		myfile2.close();
		
		int status;
        
    
   if (rename(strFName, fname2) != 0)
		perror("Error In Editing Record");
	else
		cout << "Record Edited Successfully";
		
		
		editcontinue();
		return;
    }




//CONTINUE EDITING
    void editcontinue()
    {
        char ans;
        cout<<"\n\t\t\tWOULD YOU LIKE TO EDIT MORE CONTACTS(Y/N)?";
		cin>>ans;
		IJ:
		if(ans == 'y' || ans == 'Y')
		{
		    mod();
		}       
        else if (ans == 'n' || ans == 'N'){
		    menu();
        }
        else 
		{
		    cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
			cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
			if(getch()==13)
			system("cls");
			goto IJ;
        }
    } 
    
    
    
    //HOMEPAGE
	void start()
	{
	system("cls");
	
	cout<<"\n\n\t\t\t";
	cout<<"LOADING...";
	system("cls");
	
	int a;
         cout<<"\n\n\n\n\n\n\n\t\t";
        for(a=1; a<=70; a++)
	    {
            cout<<"*";
		}
		
		cout<<"\n\n\n\t\t\t\tWELCOME TO APS' PHONEBOOK APPLICATION\n\n\n\t\t";
		for(a=1; a<=70; a++)
		{
            cout<<"*";
		}
        
		cout<<"\n\n\n\n\t\t\tPress Enter to proceed...";
		if(getch()==13)
		system("cls");
		
		homepage();
		
		
		getch();            
	}
	
	
	
	
	
	void homepage()
        {
		
		
		
		ST:
		phonebook();
		cout<<"\n\n\t\t\tPress [1] About us";
		cout<<"\n\n\t\t\tPress [2] Get Started"; 
		cout<<"\n\n\t\t\tPress [3] Contact Us";
		cout<<"\n\n\t\t\tPress [4] Emergency Contacts";
		cout<<"\n\n\t\t\tPress [5] Exit";
		cout<<"\n\n\t\t\tChoose between [1] to [5]: ";
		
		
		switch(getch())
        {
		    
			case '1':  aboutinhomepage();
			    break;
			case '2':  regandlog();
				break;
			case '3':  contactus();
				break;
            case '4':  emergency();
                break;
            case '5':   homepageexit();
                break;
 
            default: printf("\n\n\t\t\t\tNO MATCH FOUND!!!");
            printf("\n\n\t\t\tPress Enter to re-Enter the choice");
            if(getch()==13)
            system("cls");
            goto ST;
                
            getch();             
		}
		
	}
		
		
		
	void homepageexit()
	{
		char c;
	    system("cls");
    
        char choice;
        while(1)
		{
	
		    cout<<"\n\n\n\t\t\tARE YOU SURE YOU WANT TO QUIT?(Y/N):";
	     	cin>>choice;
		
	    	if(choice =='Y' || choice == 'y')
		    {
	    		system("cls");
                cout<<"\n\n\n\n\t\t\tPROCESSING...";
				getch();
				system("cls");
				cout<<"\n\n\n\n";
				exit(0);
		    }
		     else if(choice == 'N' || choice == 'n');
		    {
			    homepage();
		    }
		
        }
		
	}
	
	
	
	//exit
	void back()
    {
    	
        char c;
	    system("cls");
    
        char choice;
        while(1)
		{
	
		    cout<<"\n\n\n\t\t\tARE YOU SURE YOU WANT TO QUIT?(Y/N):";
	     	cin>>choice;
		
	    	if(choice =='Y' || choice == 'y')
		    {
	    		system("cls");
                cout<<"\n\n\n\n\t\t\tPROCESSING...";
				getch();
				system("cls");
				cout<<"\n\n\n\n";
				exit(0);
		    }
		     else if(choice == 'N' || choice == 'n');
		    {
			     menu();
		    }
		
        }

    }
   
    
    
    
    
 //registrationa nd login zone    
    void regandlog()
	{
	  
		int choice3, returnedValue;
		char choice2='y'; 
		string pword;
		
		dkj:
		system("cls");
		phonebook();
		cout<<"\n\t\t\t---------GET STARTED---------";
        
    
		cout << "\n\n\t\tPlease Sign-In to Continue:";
		cout << "\n\n\t1.  Sign-In to an Existing Account\n\t\n\t2.  Exit\n";
		cout << "\nPlease Enter your choice: ";
		cin >> choice3;
		
		if(choice3==1)
		{
			
	        returnedValue=SignIn();
			if(returnedValue==1)
			{
                SignUp();
		    }
		    
			else if(returnedValue==2)
			{
				yz:
				pword=getpword();
				if(pword=="Root")
			    {
			        system("cls");
					cout << "WELCOME, ADMIN.\n";
					system("pause");
					
					adminmenu();
				}
			    else
			    { 
			    cout << "\nPassword Incorrect! Please Enter Again: ";
				goto yz;
				}
		    } 
		    else if(returnedValue==3)
		    {
	            vwx:
				pword=getpword();
				if(pword=="root")
				{
		            system("cls");
					cout << "Admin Signed In\n";
					system("pause");
					cout<<"\n\n----You are on admin menu----";
					adminmenu();
			    }
			    else
			    {
		            cout << "\nPassword Incorrect. Please Enter Again: ";
			        goto vwx;
			    }
		    }
        }
	    else if(choice3==2)
        {
	        jkl:
		    homepageexit();
	    }
        else
	    {
	    back();
	    }
     }
    
      
    
    
void adminmenu()
	{
		EF:
        system("cls");
        phonebook();
	    cout<<"\n\n\t\t\t\t\t ADMIN MENU\t\t";
		cout<<"\n\t\t\t\t____________________________\n";
		cout<<"\n\t\t\t\t1. Create a new Account  ";
		cout<<"\n\t\t\t\t2. View User List  ";
		cout<<"\n\t\t\t\t3. Delete an Account  ";
		cout<<"\n\t\t\t\t4. MENU ";
		cout<<"\n\t\t\t\t5. HOMEPAGE";
		cout<<"\n\t\t\t\t6. EXIT";
	    cout<<"\n\t\t\t\t____________________________\n\n";
		cout<<"\n\t\t\tENTER 1 TO 5.\n";

		switch(getch())
        {
            case '1': SignUp();
            goto EF;
			break;
			case '2': userlist();
			goto EF;
			break;
			case '3': deleteuser();
			break;
			case '4': menufromadmin();
			goto EF;
			break;
			case '5': homepage();
			goto EF;
			break;
			case '6': adminexit();
			
			default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
			cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
			if(getch()==13)
			system("cls");
			goto EF;
            getch();             
        }
    }
 		
 	
	 
	void adminexit()
	{
	
        char c;
	    system("cls");
    
        char choice;
        while(1)
		{
	
		    cout<<"\n\n\n\t\t\tARE YOU SURE YOU WANT TO QUIT?(Y/N):";
	     	cin>>choice;
		
	    	if(choice =='Y' || choice == 'y')
		    {
	    		system("cls");
                cout<<"\n\n\n\n\t\t\tPROCESSING...";
				getch();
				system("cls");
				cout<<"\n\n\n\n";
				exit(0);
		    }
		     else if(choice == 'N' || choice == 'n');
		    {
			    adminmenu();
		    }
	    }
    }
	
	 
	 
	 
	 
	 	/*
 		void userlist(){
 			system("cls");
 			string uname, struname, line, Password;
	fstream file1("Accounts.dir",ios_base::in);
//	fstream myfile(filename.c_str(), std::ios_base::in);
	
	cout<<endl<<"Userlist\n";
	cout<<"Username"<<setw(20)<<"Password"<<endl;
	 
while (file1 >> line)
    {
        
		cout<<setw(20);
		cout<<line<<endl;
    }
    file1.close();
	cout<<endl<<endl<<endl;
	getchar();getchar();
	cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO MENU.";
    

	 getch();
    system("cls");
    
     adminmenu();
}
*/

	
  void deleteuser()
    {
	    system("cls");
		string line, fName, pw;
		char strFName[20]; 
		int nextLoc=0,flag=0;
		afg:
		phonebook();
		cout<<"\n\t\t\t---------ADMIN MENU---------";
	    cout<<"\n\n\t\t\t\t------------DELETE USER-----------";
		cout << "\nPlease enter the user name you want to delete: ";
		cin>>strFName;
		
		ifstream myfile;
		ofstream temp;
		myfile.open("Accounts.dir");
		temp.open("temp.dir");
		while (!myfile.eof())
		{
		    getline (myfile,line);
			nextLoc=line.find("\t\t");
			fName=line.substr(0,nextLoc);
			line = line.substr(nextLoc+1,line.length());
			pw = line;
			if(!(fName==strFName))
			temp << fName <<"\t\t"<< pw<< endl;
			else
			flag++;
        }
		if(flag==0)
		{
		    cout<<"\nRecord not found. Try again!!\n\n";
		    getch();
			goto afg;
		}
		else cout<<" Username Has Been Deleted.";	
		myfile.close();
		temp.close();
		remove("Accounts.dir");
		rename("temp.dir", "Accounts.dir");
	
		
		
		
		cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADMIN MENU.";
    getch();
    system("cls");
    adminmenu();

    }
    	
	


void userlist()
    {
                 	
                 	fstream myfile("Accounts.dir", ios_base::in);
	                if (!myfile) {
		            cout << "File Opening Error!!!";
	                }
	                else
	                {
	            	    string line;
	            	    phonebook();
	            	     cout<<"\n\n\t\t\t---------ADMIN MENU---------\t\t";
						cout<<endl<<"\n\t\t\t---------User List----------\n\n\n";
						cout<<"\tName | PW"<<endl;
                        do
		                {
			                getline(myfile,line);
				                cout<<"\t"<<line<<endl;
                        } while (!myfile.eof());
						myfile.close();   
	                 } 
	                 cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADMINMENU.";
                    getch();
                    
                    adminmenu();
        
}
	
//	
//	{
//   fstream file;
//   string uname, struname,  Password;
//   string word;
//   fstream file1("Accounts.dir",ios_base::in);
//   //filename="Accounts.dir";
//   //file.open(filename.c_str());
//   cout<<endl<<"Userlist\n";
//	cout<<"Username"<<setw(20)<<"Password"<<endl;
//	 
//   while(file1 >> word) { //take word and print
//      cout << word;
//      cout<<setw(20);
//      cout << word;
//      cout<<endl;
//      
//   }
//   file1.close();
//   cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO ADMINMENU.";
//    
//
//	 getch();
//    system("cls");
//    
//     adminmenu();
//}

	
	
	
	
	
	
	
	
	
	
	
	
	
    
 
    
    
 	//checks name registered
 	int check(string a)
    {
        int flag=0;
        string b;
        fstream f1("Directory.dir",ios::in);
        while(f1)
        {
            f1 >> b;
            if(b==a)
            {
                flag = 1; break;
            }
        }
        f1.close();
        if(flag==1)
        {
		    cout << "\nSorry! Username already exists. \nPlease try another: ";
            return 1;
        }
        return 0;
    }
    
    
    
    
int checkashika(string a)
{

	string line, stringun;
	int flag;
	int nextLoc=0;
	ifstream myfile;
	ofstream temp;
	myfile.open("Accounts.dir");
	while (!myfile.eof())
	{
		getline (myfile,line);
		nextLoc=line.find(" ");
		stringun=line.substr(0,nextLoc);
			if(stringun==a)
			{
				flag=1;
				break;
			}
	}
	myfile.close();
	if(flag==1)
	{
		cout << "\nSorry! Username already exists. \nPlease try another: ";
		return 1;
	}
	return 0;

}
//	
//	int flag;
//	string b;
//	fstream f1("Accounts.dir",ios::in);
//	while (f1)
//	{
//		f1 >> b;
////		while(b!=EOF && b!='\n')
//		{
//		if(b==a)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	}
//	f1.close();
//	if(flag==1)
//	{
//		cout << "\nSorry! Username already exists. \nPlease try another: ";
//		return 1;
//	}
//	return 0;


///
//	{ 
//	    string uname, struname, line, Password;
//	    int n;
//		system("cls");
//		//phonebook();
//		cout<<"\n\t\t\t---------GET STARTED---------";
//	
//		cout << "\n\n\t\t-----------SIGN UP-------------\n\n";
//		fstream file1("Accounts.dir",ios::in|ios::out|ios::app);
//		cout << "Please Enter an Username: ";
//		cv:
//		cin >> struname;
//		     int flag=0;
//        string b;
//		string a=struname;
//        fstream f1("Accounts.dir",ios::in);
//        while(f1)
//        {
//            f1 >> b;
//            if(b==a)
//            {
//                flag = 1; break;
//            }
//        }
//        f1.close();
//        if(flag==1)
//        {
//		    cout << "\nSorry! Username already exists. \nPlease try another: ";
//        }
//		if(flag==1)
//		{
//		     goto cv;
//		}
//        cout << "Please Enter a Password: ";
//        Password=getpword();
//		file1 << "\n" << struname <<endl<< Password<<endl;
//		cout << "\nAccount Created Successfully\n\n";
//		system("pause");
//		cout<<"\n\n\t\tTRY LOG IN YOUR ACCOUNT??\n\n\t\t  ";
//        cout<<"> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t";
//        scanf("%d",&n);
//        AB:
//        switch(n)
//          {
//              case 1: system("cls");
//                    SignIn();
//                    break;
//              case 2: system("cls");
//                    cout<<"\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING!!!\n\n";
//                    exit(0);
//              default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
//        cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
//        if(getch()==13)
//        system("cls");
//		return;
//        }
//    }
    
 	int SignIn()
    {
        string uname, password, struname, strpassword, line;
        ghi:
        fstream file1("Accounts.dir");
        int flag=0, nextLoc=0;
        system("cls");
        
        
        phonebook();
		cout<<"\n\t\t\t---------GET STARTED---------";
	
        cout << "\n\n\t\t-----------SIGN IN-------------\n\n";
        cout << "Please Enter Your Username: ";
        cin >> struname;
        if (struname=="Admin")
         {
               return 2;
         }
         if (struname=="admin")
          {
            return 3;
         }
          while (! file1.eof() )
          {
                getline (file1,line);
				nextLoc=line.find(" ");
				uname=line.substr(0,nextLoc);
				line = line.substr(nextLoc+1,line.length());
				password=line;
				if(uname==struname)
				{
                    flag=1;
                    break;
				}
           }
 
            file1.close();
            if(flag==1)
			{
 
                def:
				strpassword=getpword();
				if(strpassword==password)
				{
				    cout << "\n\n\t\t-----------SIGN IN SUCCESSFUL!!!-------------\n\n";
				    cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO MENU.";
                    getch();
                    system("cls");
					menu();
				    
				}
				else
				{
				    cout << "\nWrong Password! ";
				    abcd:
				    cout<<"\n1. Try again!\n2. Go back to homepage.";
				    int a;
					cin>>a;
					switch(a)
					{
						case 1:	goto def;
						break;
						case 2:	homepage();
						break;
						default: 
		                cout << "\nWrong Input! Try Again... "; 
		                goto abcd;
						
					}
				
			    }
			}
			else
			{
			cout << "\n\nYour Username was not Found in our Database.\nPlease Sign-Up or Enter correct Username";
			cout << "\nPress   <1> To Sign-Up    OR\n        <2> To Sign-In Again\n";
			int choice1;
			cin >> choice1;
			if(choice1==1)
			{
			    return 1;
			}
			else
			{
                goto ghi;
			}
        }
        return 0;
    }
 //checks password
        string getpword()
        {
        char ch;
        string pass="";
        cout << "Please Enter the Password: ";
        oo:
        ch=getch();
        if(ch==8)
        {
           goto oo;
        }
        while(ch!=13)
        {
           if(ch==8)
           {
                if(pass.size()==0)
                {
                    goto ps;
                }
                pass.erase(pass.size()-1);
                cout << "\b \b";
                ps:
                goto pp;
            }
            pass.push_back(ch);
            cout << "*";
            pp:
            ch=getch();
        }
        return pass;
    }

    
    
 
 //register your name and create an account
    void SignUp()
	{ 
	    string uname, struname, line, Password;
	    int n;
		system("cls");
		phonebook();
		cout<<"\n\t\t\t---------GET STARTED---------";
	
		cout << "\n\n\t\t-----------SIGN UP-------------\n\n";
		fstream file1("Accounts.dir",ios::in|ios::out|ios::app);
		cout << "Please Enter an Username: ";
		cv:
		cin >> struname;
		     int flag=0;
        string b;
		string a=struname;
        fstream f1("Accounts.dir",ios::in);
        while(f1)
        {
            f1 >> b;
            if(b==a)
            {
                flag = 1; break;
            }
        }
        f1.close();
        if(flag==1)
        {
		    cout << "\nSorry! Username already exists. \nPlease try another: ";
        }
		if(flag==1)
		{
		     goto cv;
		}
        Password=getpword();
		file1 <<endl << struname <<" "<< Password;
		cout << "\nAccount Created Successfully\n\n";
		system("pause");
		 cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO MENU.";
        getch();
        system("cls");
               file1.close();
		return;
 
    }
    
    
    //logout
    void logout(){
	system("cls");
	phonebook();
     cout<<"\n\n\n\n\t\t\t";
    for(int a=1; a<=50; a++)
	{
    cout<<"*";
    }
	
	cout<<"\n\n\n\t\t\tLOG OUT";
	
	cout<<"\n\n\n\n\t\t\t";
    for(int a=1; a<=50; a++)
	{
    cout<<"*";
    }
	
	cout<<"\n\n\t\t\tPress 1 to go to menu";
	cout<<"\n\n\t\t\tPress 2 to log out";
	CD:
	switch(getch())
	{
        case '1':  directory::menu();
            break;
        case '2': regandlog();
            break;
        default: cout<<"\n\n\t\t\t\tNO MATCH FOUND!!!";
        cout<<"\n\n\t\t\tPress Enter to re-Enter the choice";
        if(getch()==13)
        system("cls");
        goto CD;
    }
    getch();
}



    void emergency()
	{
    	phonebook();
		
    	cout << "\n\n\t\t-----------Emergency Services Information-------------\n\n";
    	cout << "\n\n\t\t\tName of the Emergency service 	Short Number 	Charge\n";
        cout << "\t\t\t\tNepal Police 	                      100 	         Free\n";
        cout << "\t\t\t\tAmbulance 	                          102 	         Free\n";
        cout << "\t\t\t\tFire Brigade 	                      101 	         Free\n";
        cout << "\t\t\t\tChild Helpline (CWIN) 	              1098 	         Free\n";
        cout << "\t\t\t\tTourist Police 	                  1144 	         Free\n";
        cout << "\t\t\t\tChild Helpline                       104 	         Free\n";
        cout << "\t\t\t\tCIAA(Commission for the              107            Free\n";
		cout<<  "\t\t\t\tInvestigation of Abuse of ";
		cout<<  "\t\t\t\tAuthority)"  ;	 	
        cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO HOMEPAGE.";
        getch();
        system("cls");
        homepage();
	}
	

   
   void contactus()
   {
   	    phonebook();
   	    cout << "\n\n\t\t\t--------Contact Us----------\n\n"; 
		cout <<"\n\n\t\t\tMAIL:      apsphonebook@outlook.com";
   	    cout <<"\n\t\t\tINSTAGRAM: @apsphonebook";
   	    cout<<"\n\t\t\tFACEBOOK:   apsphonebook";
   	    
   	    cout<<"\n\n\n\t\t ENTER ANY KEY TO GO TO HOMEPAGE.";
        getch();
        system("cls");
        homepage();
   	   
   }
   	void firstpage(){
	system("cls");
	
	cout<<"\n\n\t\t\t";
	cout<<"LOADING...";
	
	delay(5000000000);
	

	start();
    	
	}
	
	 void delay(int a)
    {
    	int add;
    	int time;
    	int i;
    	time =a*10000000;
    	for (i=0;i<time;i++){
    		add*=i;
    		add++;
    		add++;
		}
	
	}  
   	
		
};



//main where everyhting starts

int main()
{
	directory d;
	d.firstpage();
	

}


