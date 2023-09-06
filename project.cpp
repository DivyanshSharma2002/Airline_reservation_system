#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std ;

void mainMenu();
class Management{
public:
Management(){
    mainMenu();
}
};

class Details{
   public:
   static string name,gender;
   int phone;
   int age;
   string add;
   static int id;
   char arr[100];

   void information()
   {
      cout<<"\nEnter the customer ID :";
      cin>>id;
      cout<<"\nEnter the name :";
      cin>>name;
      cout<<"\nEnter the age :";
      cin>>age;
      cout<<"\nEnter your address:";
      cin>>add;
      cout<<"\nGender:";
      cin>>gender;
      cout<<"Your details are saved\n"<<endl;
   }
};
int Details::id;
string Details::name;
string Details::gender;
 class registration{
   public:
   static int choice;
   int choice1;
   int back;
   static float charges;

   void flights(){
      string flightN[5]={"Dubai","Canada","Germeny","USA","Japan"};
      for(int i=0;i<5;i++){
         cout<<(i+1)<<".flight to "<<flightN[i]<<endl;
      }
      cout<<"\nWelcome to Divyansh Airlines!"<<endl;
      cout<<"Press the number of the country for which you want to book the flight:";
      cin>>choice;
      
      switch(choice){
         case 1:
         {
            cout<<"______________Welcome to Dubai Emirates___________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights  \n"<<endl;
            cout<<"1. DUB - 460"<<endl;
            cout<<"\t01-06-2023 7:00AM 10 hrs Rs.14000"<<endl;
            cout<<"2. DUB - 500"<<endl;
            cout<<"\t01-06-2023 1:00PM 9 hrs Rs.17000"<<endl;
            cout<<"3. DUB - 640"<<endl;
            cout<<"\t01-06-2023 8:00PM 8 hrs Rs.18000"<<endl;
            
            cout<<"\nSelect the flight according to your convienience :";
            cin>>choice1;
             if(choice1==1){
               charges=14000;
               cout<<"\nYou have successfully booked the flight DUB - 460"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==2){
               charges=17000;
               cout<<"\nYou have successfully booked the flight DUB - 500"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==3){
               charges=18000;
               cout<<"\nYou have successfully booked the flight DUB - 640"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else{
               cout<<"Invalid input"<<endl;
               flights();
             }
             cout<<"Press any key to go back to the main menu :"<<endl;
             cin>>back;
             if(back==1){
               mainMenu();
             }
             else{
               mainMenu();
             }
                     }
        case 2:
        {
         cout<<"______________Welcome to Air Canada___________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights  \n"<<endl;
            cout<<"1. CA - 190"<<endl;
            cout<<"\t01-06-2023 6:00AM 16 hrs Rs.50000"<<endl;
            cout<<"2. CA - 250"<<endl;
            cout<<"\t01-06-2023 5:00PM 20 hrs Rs.36000"<<endl;
            cout<<"3. CA - 140"<<endl;
            cout<<"\t01-06-2023 10:00PM 18 hrs Rs.42000"<<endl;
            
            cout<<"\nSelect the flight according to your convienience :";
            cin>>choice1;
             if(choice1==1){
               charges=50000;
               cout<<"\nYou have successfully booked the flight CA - 190"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==2){
               charges=36000;
               cout<<"\nYou have successfully booked the flight CA - 250"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==3){
               charges=42000;
               cout<<"\nYou have successfully booked the flight CA - 140"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else{
               cout<<"Invalid input"<<endl;
               flights();
             }
             cout<<"Press any key to go back to the main menu :"<<endl;
             cin>>back;
             if(back==1){
               mainMenu();
             }
             else{
               mainMenu();
             }
        }     
        case 3:
        {
          cout<<"______________Welcome to Lufthansa___________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights  \n"<<endl;
            cout<<"1. GER - 200"<<endl;
            cout<<"\t02-06-2023 2:00AM 12 hrs Rs.49000"<<endl;
            cout<<"2. GER - 280"<<endl;
            cout<<"\t02-06-2023 4:45PM 19 hrs Rs.39000"<<endl;
            cout<<"3. GER - 300"<<endl;
            cout<<"\t02-06-2023 11:30PM 16 hrs Rs.44000"<<endl;
            
            cout<<"\nSelect the flight according to your convienience :";
            cin>>choice1;
             if(choice1==1){
               charges=49000;
               cout<<"\nYou have successfully booked the flight GER - 200"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==2){
               charges=39000;
               cout<<"\nYou have successfully booked the flight GER - 280"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==3){
               charges=43000;
               cout<<"\nYou have successfully booked the flight GER - 300"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else{
               cout<<"Invalid input"<<endl;
               flights();
             }
             cout<<"Press any key to go back to the main menu :"<<endl;
             cin>>back;
             if(back==1){
               mainMenu();
             }
             else{
               mainMenu();
             }
        }
        case 4:
        {
          cout<<"______________Welcome to American Airlines___________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights  \n"<<endl;
            cout<<"1. AMR - 400"<<endl;
            cout<<"\t03-06-2023 3:00AM 17 hrs Rs.60000"<<endl;
            cout<<"2. AMR - 120"<<endl;
            cout<<"\t03-06-2023 3:30PM 20 hrs Rs.48000"<<endl;
            cout<<"3. AMR - 390"<<endl;
            cout<<"\t03-06-2023 9:00PM 22 hrs Rs.40000"<<endl;
            
            cout<<"\nSelect the flight according to your convienience :";
            cin>>choice1;
             if(choice1==1){
               charges=60000;
               cout<<"\nYou have successfully booked the flight AMR - 400"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==2){
               charges=48000;
               cout<<"\nYou have successfully booked the flight AMR - 120"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==3){
               charges=40000;
               cout<<"\nYou have successfully booked the flight AMR - 390"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else{
               cout<<"Invalid input"<<endl;
               flights();
             }
             cout<<"Press any key to go back to the main menu :"<<endl;
             cin>>back;
             if(back==1){
               mainMenu();
             }
             else{
               mainMenu();
             }
        }
        case 5:
        {
          cout<<"______________Welcome to jetstar japan___________\n"<<endl;
            cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
            cout<<"Following are the flights  \n"<<endl;
            cout<<"1. JAP - 100"<<endl;
            cout<<"\t03-06-2023 1:00AM 16 hrs Rs.55000"<<endl;
            cout<<"2. JAP - 110"<<endl;
            cout<<"\t03-06-2023 5:00PM 21 hrs Rs.44000"<<endl;
            cout<<"3. JAP - 200"<<endl;
            cout<<"\t03-06-2023 11:00PM 19 hrs Rs.42000"<<endl;
            
            cout<<"\nSelect the flight according to your convienience :";
            cin>>choice1;
             if(choice1==1){
               charges=55000;
               cout<<"\nYou have successfully booked the flight JAP - 100"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==2){
               charges=44000;
               cout<<"\nYou have successfully booked the flight JAP - 110"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else if(choice1==3){
               charges=42000;
               cout<<"\nYou have successfully booked the flight JAP - 200"<<endl;
               cout<<"You can collect the ticket from the main menu"<<endl;
             }
             else{
               cout<<"Invalid input"<<endl;
               flights();
             }
             cout<<"Press any key to go back to the main menu :"<<endl;
             cin>>back;
             if(back==1){
               mainMenu();
             }
             else{
               mainMenu();
             }
        }
default:
{
   cout<<"Invalid input,we are shiting you to the main menu !"<<endl;
   mainMenu();
   break;
}
      }
   }
 };
 float registration::charges;
 int registration::choice;

 class ticket: public registration,Details
 {
   public:
   void Bill()
{string destination="";
ofstream outf("records.txt");
{
   outf<<"___________ Divyansh Airlines___________"<<endl;
   outf<<"_______________Ticket________________"<<endl;
   outf<<"_______________________________________"<<endl;

   outf<<"customer ID :"<<Details::id<<endl;
   outf<<"customer Name :"<<Details::name<<endl;
   outf<<"customer Gender :"<<Details::gender<<endl;
   outf<<"\tDescription"<<endl<<endl;
   if(registration::choice==1){
      destination="Dubai";
   }
   if(registration::choice==2){
      destination="Canada";
   }
   if(registration::choice==3){
      destination="Germany";
   }
   if(registration::choice==4){
      destination="USA";
   }
   if(registration::choice==5){
      destination="Japan";
   }
   outf<<"Destination\t\t"<<destination<<endl;
   outf<<"Flight cost :\t\t"<<registration::charges<<endl;
}
outf.close();
} 
void dispBill()
{
   ifstream ifs("records.txt");
   {
      if(!ifs)
      {
         cout<<"File error!"<<endl;
      }
      while(!ifs.eof())
      {
         ifs.getline(arr,100);
         cout<<arr<<endl;
      }
   }
   ifs.close();
}
};
void mainMenu(){
    int lchoice;
    int schoice;
    int back;
    cout<<"\t_________Divyansh Airlines_____________ \n"<<endl;
    cout<<"\t____________Main Menu__________________ \n"<<endl;
    cout<<"\t_______________________________________ \n"<<endl;
    cout<<"     |\t\t\t\t\t\t|"<<endl;
    cout<<"     |\tPress 1 to add the cousomer details  \t|"<<endl;
    cout<<"     |\tPress 2 to add the registration  \t|"<<endl;
    cout<<"     |\tPress 3 to add the Ticket and charges  \t|"<<endl;
    cout<<"     |\t\t\t\t\t\t|"<<endl;
cout<<"\t_______________________________________ \n"<<endl;

cout<<"Enter the choice : ";
cin>>lchoice;
Details d;
registration r;
ticket t;
switch(lchoice){
case 1:
      {
        cout<<"_______Customer_________\n"<<endl;
        d.information();
        cout<<"Press any key to go back to the main menu";
        cin>>back;
         if(back==1){
            mainMenu();
         }
         else{
            mainMenu();
         }
         break;
      }
case 2:
          {
            cout<<"___________Book a flight _________\n"<<endl;
            r.flights();
            break;
          }
case 3:
             {
                cout<<"_______Get Your Ticket__________\n"<<endl;
                t.Bill();
                cout<<"Your ticket is printed ,now you can collect it \n"<<endl;
                cout<<"Press 1 to display your ticket ";
                cin>>back;
                if(back==1){
                    t.dispBill();
                     cout<<"Press any key to go back to main menu :";
                     cin>>back;
                      if(back==1){
            mainMenu();
         }
         else{
            mainMenu();
         }
                }
             else{
            mainMenu();
         }
         break;
             }          
case 4:
            {
               cout<<"\n\n\t________Thank You_______"<<endl;
               break;
            }
default:
            {
               cout<<"Invalid input,please try again\n"<<endl;
               mainMenu();
               break;
            }
}

}



int main(){
    Management obj;
    return 0;
}
