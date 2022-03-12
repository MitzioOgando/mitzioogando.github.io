#include <iostream>
#include <unistd.h>
#include <thread>
#include <chrono>
using namespace std;

void sign (double &funcmoney);
//trello link https://trello.com/invite/b/EXeBDcQ0/1135132e6ba9562fa16a5d1db1b3beef/shreks-pizza
//money multi .pliers for late game
float percent;

float multiplier=1;

int bulk=1;
int swamp(float &percentage, double &funcmoney);
int swamppin;
string swampkey;
// loading screen
void loading ();
void working1();
void working2();
int working3();
void baking();
int cook;
//work is loading screen for wokring
string yesno; 
int jobchoice;
int choice;
int printOptions();
double money;
int printStore(double &funcmoney,int &bulk);
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
  double funcmoney;
  sign (money);
money=funcmoney;

    
  loading();

  int returnBulk;
  returnBulk=bulk;
  multiplier=1;
  while (looper!=2735){

multiplier = multiplier + percent;
cout << "Balance: $" << money << endl;
returner=printOptions();
if (returner==-1){
  //work
while (looper!=5){
cout << "Choose a job:\n";
cout <<  "| (1)Pizza Delivery\n| (2)Shrek's Pizza Manager\n| (3)Pizza Chef\n";
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
  break;
  case 3 :
  cook=working3();
  if (cook==1){
    cout << "No money has been rewarded\n";
  }else if (cook==8){
  cout << "You have been rewarded with "<< 15 * multiplier << " dollars.\n";
  money = money + (15 * multiplier);
  }else{
    cout << "???\n";
  }

}
}else if(returner==-2){
//items purchase saver
itemsCheck=printStore(money,returnBulk);
  //switch case for purchase
switch (itemsCheck){
  case 1 :
  cout << "Chancla purchased\n";
  chancla = chancla + 1 * returnBulk;;
  break;
  case 2 :
  cout << "Fortnite Card purchased\n";
  fortnitecard = fortnitecard + 1 * returnBulk;
  break;
  case 3 :
  cout << "1.5x Multiplier purchased\n";
  multiplier=1.5;
  break;
  case 4 : 
  cout << "2x Multiplier purchased\n";
  multiplier=2;
  break;
  case 5 : 
  cout << "Swamp permit key purchased.\n";
 swamppin=1;
cout << "Swamp access key is: abc123.\n";
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
  if (multiplier>1){
    cout << "| Multiplier: " << multiplier << endl;
  }else {
    cout << "| Multiplier: N/A\n";
  }
}else if (returner==-4){
  int percentage;
  swamp(percent,money);
  multiplier=multiplier + percent;
  cout << "Cash multiplier at: " << multiplier << "%" << endl;
}else if (returner==-5){
  this_thread::sleep_for(chrono::seconds(1));
  cout << ".";
  this_thread::sleep_for(chrono::seconds(1));
  cout << ".";
  this_thread::sleep_for(chrono::seconds(1));
  cout << ".\n";
  cout << "* Welcome to the Market *\n";
  cout << "* Pick an item to sell: \n";
  if (chancla>0){
    cout << "| (1) Chancla " << chancla << endl;
  }
  if (fortnitecard>0){
    cout << "| (2) Fortnite Card " << fortnitecard << endl;
  }
  if ((fortnitecard<1) and (chancla<1)){
    cout << "You have no items to sell!\nPlease come back once you do.\n";
  }
   cin >> choice;
  switch (choice){
    case 1 : 
    cout << "| Chanclas - Sell amount: \n";
    cin >> choice;
    if (choice<=chancla){
    chancla = chancla - choice;
    money = money + (choice * 7);
    cout << "| Sell successful.\nSold: " << choice << " chanclas for $7 each.\n";
    break;
    }else if (choice>chancla){
      cout << "You are trying to sell more\n chanclas than you own!\n";
      break;
    }
    break;
    case 2 :
    cout << "| FN Card - Sell amount: \n";
    cin >> choice;
    if (choice<=fortnitecard){
      fortnitecard=fortnitecard-choice;
      money=money+(choice*21);
        cout << "| Sell successful.\nSold: " << choice << " FN cards with a profit of $3 each.\n";
      break;
      }else if (choice>chancla){
      cout << "You are trying to sell more\nfortnite cards than you own!\n";
    }
    break;
    default :
    cout << "Error, unknown input detected.\n";
  }
  
  }

    }

//item purchase checker here
// work -1
// store -2
// items -3
  
  }  




int printOptions(){

  cout << "- - Select Action - -\n";
  cout << "| (1) Work (Gains Money)\n";
  cout << "| (2) Go to shop (Buy)\n";
  cout << "| (3) Check items\n";
if (swamppin==1){
  cout << "| (4) Travel to Swamp.\n";
}
  cout << "| (5) Sell items on Market\n";
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
    case 4 : 
    if (swamppin==1){
      cout << "Enter the swamp access key:\n";
    cin >> swampkey;
    if (swampkey=="abc123"){
    return -4;
    }else{
      cout << "Incorrect key detected.\n";
    }
    }else{
      cout << "You did not purchase a key, did you?\n";
    }
    case 5 :
    cout << "Loading market...\n";
    return -5;
    default : 
    cout << "Error: Unkown input detected.\n";
    break;
    main();
  }
  return 0;
}

int printStore(double &funcmoney, int &bulk){
do {
funcmoney=money;
cout << "- - - - - - - - - - -\n";
cout << "| - - Store Menu - - |\n";
if (bulk>1){
  cout << "| Bulk amount: " << bulk << endl;
}
cout << "| (0) Leave shop     |\n";
cout << "| (1) Chancla  [" << 5 * bulk << "]  \n";
cout << "| (2) FN Card  [" << 19 * bulk << "] \n";
if (multiplier==1){
cout << "| (3) 1.5x $$$ [$50] \n";
  }else if (multiplier==1.5){
cout << "| (4) 2x   $$$ [$125]\n";
  }
cout << "| (5) Bulk Buy Mode   \n";
cout << "| (6) Swamp Access Key [$150]\n";
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
  if (funcmoney>=5 * bulk){
  cout << "Scanning..\n";
  funcmoney = money - (5 * bulk);
  return 1;
  break;
  }else if (money<5 * bulk){
  cout << "Insufficient money\n";
  break;
// money if and else if
  }else{
    break;
  }
  case 2 :
  cout << "| Purchasing FortniteCard\n";
  if (funcmoney>=19 * bulk){
  cout << "Scanning..\n";
  funcmoney = money - (19 * bulk);
  return 2;
  break;
  }else if (money<19 * bulk){
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
  case 5 :
  cout << "Select the amount you want to buy of an item.\n";
  cout << "To turn off bulk mode, set the amount to 1.\n";
  cin >> bulk;
  break;
  case 6 :
    cout << "| Unlocking access key.\n";
  if (funcmoney>=150){
  cout << "Scanning..\n";
  funcmoney = money - 150;
  return 5;
  break;
  }else if (money<150){
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
  } while (bulk>1);
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

void sign (double &funcmoney) {

cout << "\nHello, welcome to...\n" <<endl;


cout << "\033[32m░██████╗██╗░░██╗██████╗░███████╗██╗░░██╗██╗░██████╗  ██████╗░██╗███████╗███████╗░█████╗░\n██╔════╝██║░░██║██╔══██╗██╔════╝██║░██╔╝╚█║██╔════╝  ██╔══██╗██║╚════██║╚════██║██╔══██╗\n╚█████╗░███████║██████╔╝█████╗░░█████═╝░░╚╝╚█████╗░  ██████╔╝██║░░███╔═╝░░███╔═╝███████║\n░╚═══██╗██╔══██║██╔══██╗██╔══╝░░██╔═██╗░░░░░╚═══██╗  ██╔═══╝░██║██╔══╝░░██╔══╝░░██╔══██║\n██████╔╝██║░░██║██║░░██║███████╗██║░╚██╗░░░██████╔╝  ██║░░░░░██║███████╗███████╗██║░░██║\n╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚══════╝╚═╝░░╚═╝░░░╚═════╝░  ╚═╝░░░░░╚═╝╚══════╝╚══════╝╚═╝░░╚═╝\n\n";
        this_thread::sleep_for(chrono::seconds(2));

  cout << "\033[37mDo you want to turn on debug mode? y/n?\n";
     this_thread::sleep_for(chrono::seconds(1));

cin >> yesno;
if (yesno=="Fortnite13"){
cout << "Insert money.\n";
cin >> funcmoney;
  }else {
  cout << "Starting...\n";
  }
  }
int working3(){
int baked=0;
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
  return 1;
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
return 0;
}

int swamp(float &percentage, double &funcmoney){
do {
cout << "- - Welcome to the - -\n";
cout << "|  -REDACTED- Store!\n";
if (bulk>1){
  cout << "| Bulk buy amount: " << bulk << endl;
}
cout << "| (0) Return to pizzeria\n";
cout << "| (1) +1% Money [$" << 5 * (percentage+bulk) << "]\n";
cout << "| (2) +5% Money [$" << 15 * (percentage+bulk) << "]\n";
cout << "| (3)+10% Money [$" << 25 * (percentage+bulk) << "]\n";
cout << "| (4) Bulk Buy \n";
int idk;
cin >> idk;
switch (idk){
  case 0 :
  cout << "Leaving store...\n";
  bulk=1;
  break;
  case 1 :
  cout << "| Purchasing +1% money\n";
  if (funcmoney>=5*percentage){
  cout << "Scanning..\n";
  funcmoney = funcmoney - 5 * (percentage + bulk);
  percentage=percentage + (.01 * bulk);
  return percentage;
  break;
  }else if (money<5 * percentage){
  cout << "Insufficient money.\n";
  break;
}
  case 2 : cout << "| Purchasing +5% money\n";
  if (funcmoney>=15*percentage){
  cout << "Scanning..\n";
  funcmoney = funcmoney - 15 * (percentage + bulk);
  percentage=percentage + (.05 * bulk);
  return percentage;
  break;
  }else if (money<15 * percentage){
  cout << "Insufficient money.\n";
  break;
}
  case 3 :
  cout << "| Purchasing +10% money\n";
  if (funcmoney>=25*percentage){
  cout << "Scanning..\n";
  funcmoney = funcmoney - 25 * (percentage + bulk);
  percentage=percentage + (.1 * bulk);
  return percentage;
  break;
  }else if (money<25 * percentage){
  cout << "Insufficient money.\n";
  break;
}
  case 4 :
  cout << "Select the amount you want to buy of an item.\n";
  cout << "To turn off bulk mode, set the amount to 1.\n";
  cin >> bulk;
  break;
}
  }while(bulk>1);
return 0;
  }
