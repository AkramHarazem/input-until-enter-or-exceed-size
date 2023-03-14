#include <iostream>
#include <string>
#include <conio.h>
#include  <bits/stdc++.h>
#include <iomanip>
#define MAX 10

using namespace std;

int main()
{
    char ch;
    int i=0;
    char str[MAX+1];
    cout << "Write maximum "<< MAX <<" characters: "<<endl;
    do{
        ch = getche();
        str[i] = ch;
        i++;
    }while(ch!='\r' && strlen(str)<MAX);
    cout<<endl;
    cout <<str<<endl;
    return 1;
}









//int main()
//{
//    cout << "Please enter your name: ";
//    char word[10];
//    cin >> setw(5) >> word;
//    cout << endl;
//    cout << "Your name is: " << word << endl;
//    system("pause");
//    return 0;
//}


////macro definitions
//#define MAX_NAME_LEN 6  // Maximum len of your name can't be more than 60
//#define MAX_ADDRESS_LEN 6  // Maximum len of your address can't be more than 120
//#define MAX_ABOUT_LEN 6 // Maximum len of your profession can't be more than 250
//
//int main () {
//    int i;
//  char y_name[MAX_NAME_LEN], y_address[MAX_ADDRESS_LEN], about_y[MAX_ABOUT_LEN];
//
//do {
//  cout << "Enter your name: ";
//  cin.getline (y_name, MAX_NAME_LEN);
//
// i++;
//} while(strlen(y_name)<=MAX_NAME_LEN);
//
//  cout << "\nEntered details are:\n"<<'\n';
//  cout << "Name: " << y_name << endl;
//}




//#include <iostream>
//#include <string>
//
// int main(){
//char c;
//int MAXIMUM_CHARS = 8;
//size_t chars_read;
//std::cout << "Enter name";
//std::string name;
//while (std::cin >> c)
//{
//  if (c)
//  {
//    name += c;
//  }
//  else
//  {
//    break;
//  }
//  ++chars_read;
//  if (chars_read < MAXIMUM_CHARS)
//  {
//    break;
//  }
//}
// }





//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#define SIZ 8
//
//using namespace std;
//
//int main()
//{
//    int i=0;
//    string str;
//        cout << "Enter characters, Press Enter to stop\n";
//
//    do
//    {
//        str[i] = getchar();
//         if (str.size() <SIZ)
//        {
//            break;
//        }
////        str[i] = c;
//        i++;
//
//    } while(str.size() < SIZ);
//
//    //while(c!='\r'&& strlen(str)<8);
//
//    cout << str;
//    return 0;
//}
