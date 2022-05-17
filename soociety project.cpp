#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cctype>
using namespace std;

int main()

{


    bool quit = false;

    string search;

    string taskAdded;

    int amount2Add;

    vector<string> subjectTitles;

 

    vector<string>::iterator myterator;

    vector<string>::iterator iter;

 

    string removedTitles = "";

 

    cout << "Welcome to your Favourite Game Title Manager.\n";



    while(!quit)

    {

        string choice;

        cout << "\nWhat would you like to do?\n";

        cout << "\n1) Add a subject title. ( Please type ADD )\n";

        cout << "\n2) Remove a subject title.( Please type REMOVE )\n";

        cout << "\n3) List all subject titles.( Please type LIST )\n";

        cout << "\n4) Quit Program. ( Please type QUIT )\n";

        cout << "\nEnter your selection: ";

        cin >> choice;

     

        if((choice == "add") || (choice == "ADD"))

        {

        

            cout << "\nHow many game subject would you like to add?\n";

            cin >> amount2Add;

 

            for(int i = 0; i < amount2Add; ++i)

            {

                cout << "\nEnter subject title.\n";

                cin >> taskAdded;

                subjectTitles.insert(subjectTitles.end(), taskAdded);

            }

 

        }

        else if((choice == "remove") || (choice == "REMOVE"))

        {


            cout << "\nSearch for a title\n";

            cin >> search;

                         

            iter = find(subjectTitles.begin(),subjectTitles.end(), search);
            if (iter != subjectTitles.end())

            {
                cout << "\n" << *iter << " was found and deleted.\n";

                subjectTitles.erase(iter);

                 

            }
            else

            {

                cout << "\nsubject title not found.\n";

            }

        }

        else if((choice == "list") || (choice == "LIST"))

        { 

            cout << "\nList of subject titles.\n";

            for(iter = subjectTitles.begin(); iter != subjectTitles.end(); ++iter)

            {

                cout << *iter << endl;

            }

        }

        else if((choice == "quit") || (choice == "QUIT"))

        {

            cout << "\nGood Bye, Thanks for the visit!! :)/>\n" << endl;

            quit = true;

        }

        else
        {

            cout << "\nInvalid Selection. Please follow instructions.\n";

        }
    }

    return 0;
}

