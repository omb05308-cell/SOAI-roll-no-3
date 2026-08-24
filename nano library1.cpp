#include<iostream>
#include<string>
using namespace std;
int main()
{
        int id1, id2, id3;
        string title1, title2, title3;

        cout<<"Enter book1 id ";
        cin>>id1;

        cin.ignore();
        cout<<"Enter book 1 title: ";
        getline(cin ,title1);

        cout<<"Enter book2 id ";
        cin>>id2;

        cin.ignore();
        cout<<"Enter book 2 title:";
        getline(cin,title2);

        cout<<"Enter book3 id";
        cin>>id3;

        cin.ignore();
        cout<<"Enter book 3 tile :";
        getline(cin, title3);

        //Dispay books
        cout<<"\n===== LIBRARY BOOKS ======";
 
        cout<<"\nBOOK ID :"<< id1;
        cout<<"\nBOOK Title :"<< title1;

        cout<<"\nBOOK ID:"<<id2;
        cout<<"\nBOOK Title :"<<title2;

        cout<<"\nBOOK ID :"<<id3;
        cout<<"\nBOOK Title :"<<title3;
        return 0;
}
