#include <iostream>
#include <unistd.h>
using namespace std;

// loading screen
void loading ();

int jobchoice;
int choice;
int printOptions();
int money;
int printStore(int &funcmoney);
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
cout << "Debug mode on.\n";
cout << "Insert money:";
cin >> money;

  while (looper!=2735){
cout << "Balance: " << money << endl;
returner=printOptions();
if (returner==-1){
  //work
while (looper!=5){
cout << "Choose a job:\n";
cout << "| (1)Pizza Delivery\n|(2)Shrek's Pizza Manager\n";
cin >> jobchoice;
  looper=5;
  }
switch (jobchoice){
  case 1 :
  // delivery
  cout << "You deliver a fresh pizza\n";
money = money + 7;
  break;
  case 2 :
  cout << "While managing Shrek's Pizza, \n you find some tips.\n";
  money = money + 16;
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
}
  //store
}else if(returner==-3){
  cout << "- - Items - -\n";
  if (chancla>0){
    cout << "| Chancla " << chancla << endl;
  }
  if (fortnitecard>0){
    cout << "| Fortnite Card " << fortnitecard << endl;
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

int printStore(int &funcmoney){
funcmoney=money;
cout << "- - - - - - - - - - -\n";
cout << "| - - Store Menu - - |\n";
cout << "| (0) Leave shop     |\n";
cout << "| (1) Chancla [$5]   |\n";
cout << "| (2) FN Card [$19] |\n";
cout << "| (3)To be added     |\n";
cout << "| (4)To be added     |\n";
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
        cout << "\b\." << flush;
        sleep(1);
        cout << "\b.." << flush;
        sleep(1);
        cout << "\b." <<  flush;
        sleep(1);
        cout << "\b.." << flush;
      break;
    }
}