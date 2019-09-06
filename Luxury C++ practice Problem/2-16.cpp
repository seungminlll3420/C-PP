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
  while(text[i] != ';'){
    if(text[i] == 'a'){
      numberofalphabets[1]++;
    }
    if(text[i] == 'b'){
      numberofalphabets[2]++;
    }
    if(text[i] == 'c'){
      numberofalphabets[3]++;
    }
    if(text[i] == 'd'){
      numberofalphabets[4]++;
    }
    if(text[i] == 'e'){
      numberofalphabets[5]++;
    }
    if(text[i] == 'f'){
      numberofalphabets[6]++;
    }
    if(text[i] == 'g'){
      numberofalphabets[7]++;
    }
    if(text[i] == 'h'){
      numberofalphabets[8]++;
    }
    if(text[i] == 'i'){
      numberofalphabets[9]++;
    }
    if(text[i] == 'j'){
      numberofalphabets[10]++;
    }
    if(text[i] == 'k'){
      numberofalphabets[11]++;
    }
    if(text[i] == 'l'){
      numberofalphabets[12]++;
    }
    if(text[i] == 'm'){
      numberofalphabets[13]++;
    }
    if(text[i] == 'n'){
      numberofalphabets[14]++;
    }
    if(text[i] == 'o'){
      numberofalphabets[15]++;
    }
    if(text[i] == 'p'){
      numberofalphabets[16]++;
    }
    if(text[i] == 'q'){
      numberofalphabets[17]++;
    }
    if(text[i] == 'r'){
      numberofalphabets[18]++;
    }
    if(text[i] == 's'){
      numberofalphabets[19]++;
    }
    if(text[i] == 't'){
      numberofalphabets[20]++;
    }
    if(text[i] == 'u'){
      numberofalphabets[21]++;
    }
    if(text[i] == 'v'){
      numberofalphabets[22]++;
    }
    if(text[i] == 'w'){
      numberofalphabets[23]++;
    }
    if(text[i] == 'x'){
      numberofalphabets[24]++;
    }
    if(text[i] == 'y'){
      numberofalphabets[25]++;
    }
    if(text[i] == 'z'){
      numberofalphabets[26]++;
    }
    i++;
    numberofalphabets[0]++;

  }

  cout << "What's the total number of alphabets? "<< i;
  cout << "\n";
  for(int j = 1; j <= i ; j++){

    cout << alphabets[j] <<" ("<< numberofalphabets[j] << ") "<< ": ";

    for(int l = 0 ; l <numberofalphabets[j]; l++){

      cout << "*";

    }

    cout << "\n";

  }

}
