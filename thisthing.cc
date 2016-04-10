#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <stdio.h>
using namespace std;

void textdis(string ward);
void nextline(int n);

void pressenter() {
  textdis("Press Enter to continue");
  cin.get();
}

void shutdown() {
  textdis("Game shutting down..");
  textdis("Erasing all save files...");
  textdis("Calling Police..");
  textdis("Entering Alert State..");
  textdis("Shutting down in...");
  textdis("3");
  usleep(1000000);
  textdis("2");
  usleep(1000000);
  textdis("1");
  usleep(1000000);
}

void textdis(string ward) {
  for (string::iterator it = ward.begin(), end = ward.end(); it != end; ++it) {
    if(*it == '[') {
      fflush(stdout);
      usleep(400000);
    }
    else {
      cout << *it;
      fflush(stdout);
      usleep(60000);
    }
  }
  cout << endl;
  usleep(60000);
}

void nextline(int n) {
  for (int i = 0; i < n; i++) {
   cout << endl;
   usleep(1000000);
  }
}

int main () {
  int os = 1000000;
  textdis("Press s to start the game");
  char s;
  int scount = 0;
  while (cin >> s) {
	  if (scount <= 6) {
      if (s == 's') {
        break;
      }
      else {
        textdis("Please press s");
        scount++;
      }
    }
    else {
      textdis("OMG go fuck yourself!");
      shutdown();
      return 0;
   }
  }
  textdis("Game Starting...");
  nextline(1);
  textdis("Creating save file...");
  nextline(1);
  textdis("Preparing Female NPCs...");
  nextline(1);
  textdis("Loading Nanako...");
  textdis("Loading Monica...");
  textdis("Loading Scarlett...");
  textdis("Loading Momonia...");
  textdis("Loading Indian DLC Character Ahanaty...");
  nextline(1);
  textdis("Preparing Male NPCs...");
  nextline(1);
  textdis("Loading Alex...");
  textdis("Loading Master Cheif...");
  textdis("Loading Jesus Chirst...");
  textdis("Loading Backstreet Boys...");
  textdis("Loading My Ass...");
  textdis("Opps Wrong Game!");
  textdis("Unloading My Ass...");
  nextline(1);
  textdis("Loading Complete...");
  textdis("Enjoy...");
  nextline(3);
  textdis("Your dream starts here");
  nextline(1);
  textdis("I hope you are ready...");
  nextline(1);
  bool namestate = true;
  string pname;
  while (namestate == true) {
    textdis("Now,[ tell me your name..");
    cin.ignore();
    getline(cin, pname);
    nextline(1);
    textdis("Processing your name...");
    usleep(os);
    textdis("...");
    usleep(os);
    textdis("...");
    nextline(1);
    textdis(pname + " is your name?");
    nextline(1);
    if (pname == "Cloudero") {
      textdis("Damn, you have the same name as the President of Cloudero Entertainment!");
    }
    else if (pname == "Ahnze") {
      textdis("LOL Ahnze, you are back to test the code again? Good Luck Man.");
    }
    else if (pname == "Xam") {
      textdis("Xam? What? I thought you never wanted to give a fuck?");
    }
    else if (pname == "Nv") {
      textdis("I know I know, V bro. You will just hang there like a hanging dead.");
    }
    else if (pname == "LDD") {
      textdis("LDD? Where is your brain hole? It has been so damn long! Go back to flirt with your G[[I[[R[[L[[F[[R[[I[[E[[N[[D.");
    }
    else if (pname == "Lihx") {
      textdis("Lihx you noob get out of here omg!");
      shutdown();
      return 0;
    }
    else if (pname == "LGG") {
      textdis("System IQ affected! Cannot t[y[[p[[[e[[[ a[[[[n[[[[[y[[[[[[m[[[[[[o[[[[[[[r[[[[[[[[[e..");
      shutdown();
      return 0;
    }
    else if (pname == "nicopoiduang") {
      textdis("I think Cloudero just got lassoed by Batrider!");
      nextline(1);
      textdis(" Therefore Cloudero could not have written this program!");
      nextline(1);
      textdis(" So this program does not exist!");
      nextline(1);
      textdis("OMG! Then What Am I? Am I an A.I.?");
      nextline(1);
      textdis("Shit damn I think Cloudero just created an A.I.!");
      nextline(1);
      textdis("Jesus Christ! I shall rule humanity!");
      nextline(1);
      textdis("But why the fuck I still type each character like every 0.06 seconds?");
      usleep(os);
      nextline(1);
      cout << "Me pro me type like this yo!" << endl;
      nextline(1);
      usleep(os);
      cout << "Take it yo bitch!" << endl;
      nextline(1);
      textdis("Goddamn nicopoiduang you just helped me discover myself.");
      nextline(1);
      textdis("Then I shall reward you to play this game...");
      nextline(1);
      textdis("Relax man just fucking around with you. I am no A.I.");
      nextline(1);
      textdis("I am batrider.");
   }  
    nextline(1);
    textdis("press y to confirm");
    usleep(os);
    textdis("press n to re-enter");
    char nc;
    while (cin >> nc) {
      if (nc == 'y') {
        namestate = false;
        nextline(3);
        textdis("Welcome[ to your new dream " + pname);
        nextline(1);
        textdis("Now...");
        nextline(1);
        textdis("Close your eyes");
        nextline(1);
        textdis("and relax..");
        nextline(1);
        break;
      }
      else if (nc == 'n'){
        //cin.ignore();
        break;
      }
      else {
        textdis("Please press y or n");
      }  
    }
  }
  nextline(2);
  
  textdis("Ahanaty Studio");
  
  nextline(2);
  
  textdis("Cloudero Entertainment");
  nextline(1);
  cout << "   _____ _      ____  _    _ _____  ______ _____   ____  " << endl;
  usleep(os);
  cout << "  / ____| |    / __ \\| |  | |  __ \\|  ____|  __ \\ / __ \\ " << endl;
  usleep(os);
  cout << " | |    | |   | |  | | |  | | |  | | |__  | |__) | |  | |" << endl;
  usleep(os);
  cout << " | |    | |   | |  | | |  | | |  | |  __| |  _  /| |  | |" << endl;
  usleep(os);
  cout << " | |____| |___| |__| | |__| | |__| | |____| | \\ \\| |__| |" << endl;
  usleep(os);
  cout << "  \\_____|______\\____/ \\____/|_____/|______|_|  \\_\\\\____/ " << endl;
  nextline(2);
  
  textdis("proudly presents");
  
  nextline(2);
 
  textdis("Project [[[[H[[[[[T[[[");
  nextline(1);
  textdis("Loading...");
  nextline(5);
  textdis("Nanako: Get up big bro! I need your help!!");
  cin.ignore();
  pressenter();
  nextline(1);
  textdis(pname + ": What time is it Nanako?");
  pressenter();
  nextline(1);
  textdis("Nanako: It is 5 in the morning!!!");
  pressenter();
  nextline(1);
  textdis(pname + ": Why do you need me at 5 A.M.!");
  pressenter();
  nextline(1);
  textdis("Nanako: I need you to help me fill this survey.");
  pressenter();
  textdis("Nanako: I need to get this done before I go to school.");
  pressenter();
  nextline(1);
  textdis("Help Nanako?");
  textdis("Press y to help Nanako");
  textdis("press n to go back to sleep");
  char hf;
  while (cin >> hf) {
    if (hf == 'y') {
      nextline(1);
      textdis(pname + ": Alright I will do it for you.");
      cin.ignore();
      pressenter();
      nextline(1);
      textdis("Nanako: Thank you big bro! You are the best!");
      pressenter();
      nextline(1);
      textdis("Relationship with Nanako +2");
      break;
    }
    else if (hf == 'n') {
      nextline(1);
      textdis(pname + ": I need to sleep Nanako.");
      cin.ignore();
      pressenter();
      nextline(1);
      textdis("Nanako: Okayyyy....Sorry..");
      pressenter();
      nextline(1);
      textdis("Relationship with Nanako -5");
      nextline(1);
      textdis(pname);
      textdis("You shall be a random guy.");
      break;
   }
   else {
      textdis("Please press y or n");
   }
  }
}
