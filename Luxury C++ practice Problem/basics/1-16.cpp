#include <iostream>
using namespace std;

int main(){
  char text[10000];
  fill_n(text,10000,'\0');
  cout << "Please enter text. Draw a histogram.\n" << "The end of the text is ';'. Up to 1,000.\n";
  cin.getline(text,10000,';');
  int i=0,j;
  int numberofalphabets[27];
  fill_n(numberofalphabets,27,0);
  char alphabets[27] ={'\0','a','b','c','d','e','f','g','h','i','j','k','l','m','n',
  'o','p','q','r','s','t','u','v','w','x','y','z'};

  while(text[i] != '\0'){
    for(int g = 1; g < 27; g++){
      if(tolower(text[i]) == alphabets[g]){
        numberofalphabets[g]++;
        numberofalphabets[0]++;
      }
    }
    i++;
  }

  cout << "What's the total number of alphabets? "<< numberofalphabets[0];
  cout << "\n";

  for(int j = 1; j < 27 ; j++){
    cout << alphabets[j] <<" ("<< numberofalphabets[j] << ") "<< ": ";
    for(int l = 0 ; l < numberofalphabets[j]; l++){
      cout << "*";
    }
    cout << "\n";
  }
}
