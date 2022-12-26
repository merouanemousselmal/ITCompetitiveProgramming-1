

using namespace std;
string engtomol (string, string[]);
string moltoeng (string, char[]);

int main ()
{
    char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string morse[81] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string text, morsecode;


    cout << "NOTE. DO NOT INPUT A NON ENGLISH CHARACTER. THIS TRANSLATOR EXCLUSIVELY TRANSLATES ENGLISH TEXTS (CAPITALIZED AND NON CAPITALIZED).\n";
        cout << "Enter a text to translate, each word seperated by a space if you want to translate more than one word: ";
        cin.get();
        getline(cin,text);
        cout << "TEXT: " << text << endl;
        cout << "MORSE CODE: " << engtomol(text, morse) << endl;
