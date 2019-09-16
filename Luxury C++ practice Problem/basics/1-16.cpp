#include <iostream>
using namespace std;
#define alphabet_27 27

int main(){
  char text[10000];
  fill_n(text,10000,'\0');
  cout << "Please enter text. Draw a histogram.\n" << "The end of the text is ';'. Up to 1,000." << endl << endl;
  cin.getline(text,10000,';');
  int i=0,j,g=97;
  int numberofalphabets[alphabet_27];
  fill_n(numberofalphabets,alphabet_27,0);
  char alphabets[alphabet_27] ={'\0','a','b','c','d','e','f','g','h','i','j','k','l','m','n',
  'o','p','q','r','s','t','u','v','w','x','y','z'};


  while(text[i] != '\0'){
    for(g = 1; g < alphabet_27; g++){
      if(tolower(text[i]) == alphabets[g]){
        numberofalphabets[g]++;
        numberofalphabets[0]++;
      }
    }
    i++;
  }

  cout << endl <<"What's the total number of alphabets? "<< numberofalphabets[0] << endl;
  cout << "\n";

  for(j = 1; j < alphabet_27 ; j++){
    cout << alphabets[j] <<" ("<< numberofalphabets[j] << ") "<< ": ";
    for(int l = 0 ; l < numberofalphabets[j]; l++){
      cout << "*";
    }
    cout << "\n";
  }
}
