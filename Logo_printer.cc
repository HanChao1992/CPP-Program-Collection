#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <stdio.h>
using namespace std;

void textdis(string ward) {
  for (string::iterator it = ward.begin(), end = ward.end(); it != end; ++it) {
    if(*it == '[') {
      fflush(stdout);
      usleep(300000);
    }
    else {
      cout << *it;
      fflush(stdout);
      usleep(40000);
    }
  }
  cout << endl;
  usleep(20000);
}

int main() {
  textdis("   _____ _      ____  _    _ _____  ______ _____   ____  ");
  textdis("  / ____| |    / __ \\| |  | |  __ \\|  ____|  __ \\ / __ \\ ");
  textdis(" | |    | |   | |  | | |  | | |  | | |__  | |__) | |  | |");
  textdis(" | |    | |   | |  | | |  | | |  | |  __| |  _  /| |  | |");
  textdis(" | |____| |___| |__| | |__| | |__| | |____| | \\ \\| |__| |");
  textdis("  \\_____|______\\____/ \\____/|_____/|______|_|  \\_\\\\____/ ");
}
