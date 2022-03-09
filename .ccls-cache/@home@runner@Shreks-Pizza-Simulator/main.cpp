#include <iostream>
#include <unistd.h>
#include <thread>
#include <chrono>
using namespace std;

void sign ();

//money multipliers for late game
float multiplier=1;
// loading screen
void loading ();
void working1();
void working2();
void working3();
//work is loading screen for wokring
string yesno; 
int jobchoice;
int choice;
int printOptions();
double money;
int printStore(double &funcmoney);
int returner;
int looper;
int storeSelection;
//items
int itemsCheck;
int chancla;
int fortnitecard;
//0=not there 1=there
//items

int main() {
  sign ();
cin >> yesno;
if ((yesno=="y") or (yesno=="Y")){
  cout << "Debug mode on.\n";
cout << "Insert money:";
cin >> money;
}else{
  loading();
}

  multiplier=1;
  while (looper!=2735){
cout << "Balance: $" << money << endl;
returner=printOptions();
if (returner==-1){
  //work
while (looper!=5){
cout << "Choose a job:\n";
cout <<  "| (1)Pizza Delivery\n| (2)Shrek's Pizza Manager\n";
cin >> jobchoice;
  looper=5;
  }
switch (jobchoice){
  case 1 :
  // delivery
  working1();
  cout << "You delivered a fresh pizza.\n";
  cout << "You gained " << 7 * multiplier << " dollars.\n";
money = money + 7 * multiplier;
  break;
  case 2 :
  working2();
  cout << "While managing Shrek's Pizza, \n you gained " << 25 * multiplier << " dollars.\n";
  money = money + 25 * multiplier;
}
}else if(returner==-2){
//items purchase saver
itemsCheck=printStore(money);
  //switch case for purchase
switch (itemsCheck){
  case 1 :
  cout << "Chancla purchased\n";
  chancla++;
  break;
  case 2 :
  cout << "Fortnite Card purchased\n";
  fortnitecard++;
  break;
  case 3 :
  cout << "1.5x Multiplier purchased\n";
  multiplier=1.5;
  break;
  case 4 : 
  cout << "2x Multiplier purchased\n";
  multiplier=2;
  break;
}
  //store
}else if(returner==-3){
  loading ();
  cout << "\n- - Items - -\n";
  if (chancla>0){
    cout << "| Chancla " << chancla << endl;
  }
  if (fortnitecard>0){
    cout << "| Fortnite Card " << fortnitecard << endl;
  }
  if (multiplier==1.5){
    cout << "| Multiplier: 1.5x\n";
  }else if (multiplier==2){
    cout << "| Multiplier: 2x\n";
  }else {
    cout << "| Multiplier: N/A\n";
  }
}

//item purchase checker here
// work -1
// store -2
// items -3
  
  }  
}



int printOptions(){
  cout << "- - Select Action - -\n";
  cout << "| (1) Work (Gains Money)\n";
  cout << "| (2) Go to shop (Buy)\n";
  cout << "| (3) Check items\n";
  cin >> choice;
  switch (choice){
    case 1 :
    // work (money)
    cout << "Work\n";
    return -1;
    break;
    case 2 :
    // shop
    cout << "Shop\n";
    return -2;
    break;
    case 3 :
    cout << "Items: \n";
    return -3;
    break;
    default : 
    cout << "Error: Unkown input detected.\n";
    break;
    main();
  }
  return 0;
}

int printStore(double &funcmoney){
funcmoney=money;
cout << "- - - - - - - - - - -\n";
cout << "| - - Store Menu - - |\n";
cout << "| (0) Leave shop     |\n";
cout << "| (1) Chancla  [$5]  |\n";
cout << "| (2) FN Card  [$19] |\n";
cout << "| (3) 1.5x $$$ [$50] |\n";
cout << "| (4) 2x   $$$ [$125]|\n";
cout << "| User input> ";
cin >> storeSelection;
switch (storeSelection){
  case 0 :
  cout << "Leaving shop....\n";
  return 0;
  break;
  case 1 :
  cout << "| Purchasing Chancla...\n";
  // money check
  if (funcmoney>=5){
  cout << "Scanning..\n";
  funcmoney = money - 5;
  return 1;
  break;
  }else if (money<15){
  cout << "Insufficient money\n";
  break;
// money if and else if
  }else{
    break;
  }
  case 2 :
  cout << "| Purchasing FortniteCard\n";
  if (funcmoney>=19){
  cout << "Scanning..\n";
  funcmoney = money - 19;
  return 2;
  break;
  }else if (money<19){
  cout << "Insufficient money.\n";
  break;
// money if and else if
  }else{
    break;
  }
  case 3 :
  cout << "| Purchasing 1.5x Multiplier\n";
  if (funcmoney>=50){
  cout << "Scanning..\n";
  funcmoney = money - 50;
  return 3;
  break;
  }else if (money<50){
  cout << "Insufficient money.\n";
  break;
// money if and else if
  }else{
    break;
  }
   case 4 :
  cout << "| Purchasing 2x Multiplier\n";
  if (funcmoney>=125){
  cout << "Scanning..\n";
  funcmoney = money - 125;
  return 4;
  break;
  }else if (money<125){
  cout << "Insufficient money.\n";
  break;
// money if and else if
  }else{
    break;
  }
  default :
  cout << "Unknown input detected.\n";
  main();
  break;
  }
  
  return 0;
  }

void loading () {
   cout << "Loading";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b.." <<  flush;
      break;
    }
}
void working1 () { 
  
cout << "Grabbing pizza";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b..  \n" << flush;
      break;
    }
  cout << "Starting delivery vehicle";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b..\n" <<  flush;
      break;
    }
  cout << "Delivering pizza";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b.." <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
        sleep(1);
        cout << "\b.  " << flush;
        sleep(1);
        cout << "\b.. " << flush;
        sleep(1);
        cout << "\b.. " << flush;
        sleep(1);
        cout << "\b. \n" << flush;
      break;
    }
  } 

  void working2(){

  cout << "Monitoring staff";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b..\n" <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b..\n" <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
      break;
    }
      cout << "Collecting tips";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b..\n" <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
      break;
    }
    cout << "Re-monitoring staff";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b..\n" <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
        sleep(1);
        cout << "\b." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b..\n" <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
      break;
    }
          cout << "Collecting tips";
    cout << ' ' <<flush;
    for (;;) {
        sleep(1);
        cout << "\b.\n" <<  flush;
        sleep(1);
        cout << "\b\n" << flush;
      break;
    }
  } 

void sign () {

cout << "\nHello, welcome to...\n" <<endl;


cout << "\033[32m░██████╗██╗░░██╗██████╗░███████╗██╗░░██╗██╗░██████╗  ██████╗░██╗███████╗███████╗░█████╗░\n██╔════╝██║░░██║██╔══██╗██╔════╝██║░██╔╝╚█║██╔════╝  ██╔══██╗██║╚════██║╚════██║██╔══██╗\n╚█████╗░███████║██████╔╝█████╗░░█████═╝░░╚╝╚█████╗░  ██████╔╝██║░░███╔═╝░░███╔═╝███████║\n░╚═══██╗██╔══██║██╔══██╗██╔══╝░░██╔═██╗░░░░░╚═══██╗  ██╔═══╝░██║██╔══╝░░██╔══╝░░██╔══██║\n██████╔╝██║░░██║██║░░██║███████╗██║░╚██╗░░░██████╔╝  ██║░░░░░██║███████╗███████╗██║░░██║\n╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝░░░╚═════╝░  ╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░╚═╝\n\n";
        this_thread::sleep_for(chrono::seconds(2));

  cout << "\033[37mDo you want to turn on debug mode? y/n?\n";
     this_thread::sleep_for(chrono::seconds(1));

}

int working4(){
int baked;
int ingredient;
//this is for the new chef job
cout << "Select the ingredients in order.\n";
while (baked==0){
cout << "| (1) Cheese \n";
cout << "| (2) Tomato Sauce \n"; 
cout << "| (3) Bread \n";
cin >> ingredient;
if (ingredient==3){
cout << "Select the next ingredient.\n";
cout << "| (1) Cheese \n";
cout << "| (2) Tomato Sauce \n"; 
cout << "| (3) Bread \n";
cin >> ingredient;
if (ingredient==2){
cout << "Select the last ingredient.\n";
cout << "| (1) Cheese \n";
cout << "| (2) Tomato Sauce \n"; 
cout << "| (3) Bread \n";
cin >> ingredient;
if (ingredient==1){
cout << "Pizza completed.\n";
return 8;
}else{
  cout << "You forgot the cheese?\n";
}
}else{
  cout << "You were so close yet so far!\n";
  return 1;
}
}else{
  cout << "You ruined the pizza!\n";
  return 1;
}
}