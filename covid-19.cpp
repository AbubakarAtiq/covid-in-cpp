#include <Windows.h>
#include <conio.h>
#include <direct.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <wctype.h>
#include <wingdi.h>

using namespace std;
// First we should make class for welcome message
class welcomeMessage {
public:
  static void displayMessage(void) {
    cout << "--------------------------------Welcome to this Program "
            "Covid-19,2021--------------------------------"
         << endl;
    cout << "--------------------------------Written By "
            "A.Atiq,---------------------------------------------------"
         << endl;
    cout << "--------------------------------Version "
            "1.0.1---------------------------------------------------------\nI'"
            "m AI written in C++, I can answer some question for you related "
            "to this virus"
         << endl;
    cout << "----------------------------Copyright.Abubakar Atiq(2021)[April "
            "21th 2:42PM]-----------------------------"
         << endl;
  }
};
class reason {
public:
  static void displayMessage1(void) {
    cout << "You must be wondering why, Mr.Abubakar Atiq Created me -_- ";
    cout << "Only the Author knows the best!" << endl;
    cout << "The main reason was to educate peoples how to use there knowledge "
            "to help human,I think!"
         << endl;
  }
};
class introGuide {
public:
  static void displayMessage2(void) {
    cout << "There are some Instruction before you start testing me!" << endl;
    cout << "=================================================================="
            "======================================="
         << endl;
    cout << "If you want to stop the program just cancel it,or continue asking "
            "relevant question and put required data in type(?),it will help "
            "me to string data properly"
         << endl;
  }
};
class CoronaSong {
public:
  static void displayMessage3(void) {
    string user_say_yesorno;
    cout << "Will you like to listen Niki corona virus song (Y|N):";
    getline(cin, user_say_yesorno);
    if ((user_say_yesorno == "Y") || (user_say_yesorno == "y") ||
        (user_say_yesorno == "YES") || (user_say_yesorno == "yes")) {
      cout << "You are about to see corono virus song by Niki" << endl;
      cout << "Next step will open youtube,in your browser.I know you will be "
              "feeling bored.Let play it"
           << endl;
      system("pause");
      system("cmd /c start "
             "https://www.youtube.com/watch?v=Eufjp7T6PVk&feature=youtu.be");
    } else if ((user_say_yesorno == "N") || (user_say_yesorno == "n") ||
               (user_say_yesorno == "NO") || (user_say_yesorno == "no")) {
      cout << "As we wish,jumping to next section" << endl;
    }
    // cout<<"You are about to see corono virus song by Niki"<<endl;
    // cout<<"Next step will open youtube,in your browser.I know you will be
    // feeling bored.Let play it"<<endl; system("pause"); system("cmd /c start
    // https://www.youtube.com/watch?v=Eufjp7T6PVk&feature=youtu.be");
  }
};
class coronaWebsite {
public:
  static void displayMessage4(void) {
    cout << "\n\n" << endl;
    string user_say_yesorno;
    cout << "Will you like to see the Corona affected countries? (Y|N):";
    getline(cin, user_say_yesorno);
    if ((user_say_yesorno == "Y") || (user_say_yesorno == "y") ||
        (user_say_yesorno == "YES") || (user_say_yesorno == "yes")) {
      cout << "Let me show you corona affected countries!,In browser it will "
              "open when you press key"
           << endl;
      cout << "There you go "
           << "Just a sec,press the key " << endl;
      system("pause");
      system("cmd /c start "
             "https://www.worldometers.info/coronavirus/"
             "countries-where-coronavirus-has-spread/");
    } else if ((user_say_yesorno == "N") || (user_say_yesorno == "n") ||
               (user_say_yesorno == "NO") || (user_say_yesorno == "no")) {
      cout << "As we wish,jumping to next section" << endl;
    }
    // cout<<"Let me show you corona affected countries!,In browser it will open
    // when you press key"<<endl; cout<<"There you go "<<"Just a sec,press the
    // key "<<endl; system("pause"); system("cmd /c start
    // https://www.worldometers.info/coronavirus/countries-where-coronavirus-has-spread/");
  }
};
class goingOutside {
public:
  static void displayMessage5(void) {
    cout << "Kindly read these Instructions and stay safe,stay home" << endl;
    cout << "Make sure your device is connected to the internet,just a sec"
         << endl;
    // system("pause");
    // system("cmd /c start
    // https://www.canada.ca/en/public-health/services/diseases/2019-novel-coronavirus-infection/prevention-risks/about-non-medical-masks-face-coverings.html");
    string user_say_yesorno;
    cout << "Will you like to see instructions given W.H.O for covid? (Y|N):";
    getline(cin, user_say_yesorno);
    if ((user_say_yesorno == "Y") || (user_say_yesorno == "y") ||
        (user_say_yesorno == "YES") || (user_say_yesorno == "yes")) {
      cout << "You are about to see instruction given by W.H.O" << endl;
      system("pause");
      system("cmd /c start "
             "https://www.who.int/emergencies/diseases/novel-coronavirus-2019/"
             "advice-for-public");

    } else if ((user_say_yesorno == "N") || (user_say_yesorno == "n") ||
               (user_say_yesorno == "NO") || (user_say_yesorno == "no")) {
      cout << "As we wish,jumping to next section" << endl;
    }
    // //Creat its object
    // cout<<"You are about to see instruction given by W.H.O"<<endl;
    // system("pause");
    // system("cmd /c start
    // https://www.who.int/emergencies/diseases/novel-coronavirus-2019/advice-for-public");
  }
};
class loadingData // It work, modify it
{
public:
  static void main(void) {
    cout << "\n\n\n\t\t\t\tPlease wait while loading\n\n\n\t\t\t\t";
    char a, b;
    cout << "\t\t\t\t";
    for (int i = 0; i <= 15; i++)
      cout << a;
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i <= 15; i++) {
      cout << b;
      for (int j = 0; j <= 1e8; j++)
        ;
    }
    cout << "\n\n\n\n\n\n\t\t\tMade,M.A.Atiq:";
    // getch();
  }
};
int main() {
  string Start;
  cout << "Type (start):" << Start;
  getline(cin, Start); // It will take the info from the user and represent it
                       // in above code
  cout << endl;
  welcomeMessage::displayMessage(); // call object to displaymessage function
  string username;
  cout << "What is your name: ";
  getline(cin, username);
  cout << "Nice seeing you," << username << "!";
  cout << endl;
  reason::displayMessage1();     // call reason object to display message
  introGuide::displayMessage2(); // Call introGuide Object to display message
                                 // function
  /* Start asking question */
  cout << "Tell me about your self:(" << username << ")" << endl;
  string usrIntro; /*Question number one*/
  cout << "Type here your Introduction " << username << ":";
  getline(cin, usrIntro);
  cout << "I see,hmm!" << username << endl;

  cout << "#######################(network signal "
          "low)##################(stable now)"
       << endl;
  cout << "Really,Wow,I like it " << username << " I like your skills,LOL"
       << endl;
  string usr1, usr01; /*Q2: Ask how do you know the Author*/
  cout << "So tell me " << username
       << " How do you know the author of this AI program?.\nType here:";
  getline(cin, usr1);
  cout << endl;
  cout << "I see," << username
       << ",I hope you both are very good friends right?"
       << "Type(Yes we are or no)\n>>>";
  getline(cin, usr01);
  cout << usr01 << ",Hmm!,Anyways I don't know," << username << endl;
  CoronaSong::displayMessage3();    // call function to display message
  coronaWebsite::displayMessage4(); // display corona effected countries
  cout << "\n"
       << username << "!,"
       << "Read this website carefully,it show how many nations are suffering "
          "with just one carelessness"
       << endl;
  cout
      << "There are few things,you should know before going-outside your place,"
      << username << ","
      << "Let's " << Start << endl;
  loadingData::main(); // call
  // Make obejct
  goingOutside::displayMessage5(); // call the object to display function
  cout << "Please it My humble request,kindly read above mentioned "
          "instruction.Before going outside"
       << endl;
  cout << "Thanks for testing it," << username << endl
       << "\tProgram ended!" << endl;
  cout << "\nProgram restarted again!" << main();
}