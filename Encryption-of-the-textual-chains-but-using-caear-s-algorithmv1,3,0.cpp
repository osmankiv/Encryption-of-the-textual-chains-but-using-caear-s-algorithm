#include <iostream>
#include <string>
#include <map>

using namespace std;
char* itoa(int value,char* result,int base){
}
int main() {
    string text;
    int key;
    int numofchar;
    cout << "enter  text: ";
    getline(cin, text);
    cout << "enter  key: ";
    cin>> key;
    map<char, int> charToNum;
    map<int, char> NumTochar;

	for(int t=0;t<=text.size();t++){
//		cout<< text[t]<<endl;
	
		for(char c ='a';c<='z';++c){
			charToNum[c]=c-'a'+1;
			numofchar=charToNum[text[t]];
			if(charToNum[text[t]]>0){
				int c= numofchar+key;
				int ck=c%26;
//				cout<< ck;
				NumTochar[t]='a'+ck-1;
				cout<<NumTochar[t];
			
				
				
				break;
			}
		}
}
   
    return 0;
}
