#include <bits/stdc++.h>
using namespace std;

class restarurant

{
public:
    string name;
    void welcome()
    {
        system("CLS");
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "             @        WELCOME         @" << endl;
        cout << "             @        TO  THE         @" << endl;
        cout << "             @  ROMAN'S GRILL HOUSE   @" << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    }
    void time()
    {
        float t;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Please  " << name << "  enter the time when you arrived (enter like this-- 12.00)" << endl;
        cout << " Time : ";
        cin >> t;

        system("CLS");

        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "             @                        @" << endl;
        cout << "             @     TABLE BOOKING      @" << endl;
        cout << "             @                        @" << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " Now time to table booking " << endl;
        cout << " We have 12 tables " << endl;
        if (t <= 1.00 || t >= 6.00)
        {
            cout << endl;
            cout << endl;
            cout << " Table ON: 1,2,3,10,11,12 are booked already " << endl;
            cout << " You can choose any table  from it 4,5,6,7,8,9  " << endl;
            int tab;
            cout << endl;

            cout << " choose your  table :: ";
            cin >> tab;
            cout << tab << " ON TABLE IS BOOKED FOR YOU " << endl;
        }
        else if (t <= 7.00 || t >= 12.00)
        {
            cout << endl;
            cout << endl;
            cout << " Table ON:  4,5,6,7,8,9  are booked already " << endl;
            cout << " You can choose any table  from it 1,2,3,10,11,12 " << endl;
            int tab;
            cout << endl;

            cout << " choose your  table :: ";
            cin >> tab;
            cout << tab << " ON TABLE IS BOOKED FOR YOU " << endl;
        }
    }
    int arr[16];

    int item;
    void menu()
    {
        int am;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "  " << name << "   which menu i will provide you ?? " << endl;
        cout << " LUNCH or DINNER " << endl
             << "  FOR LUNCH PRESS '1' AND FOR DINNER PRESS '2' " << endl;
        cin >> am;
        system("CLS");
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "             @                        @" << endl;
        cout << "             @      ---MENU---        @" << endl;
        cout << "             @                        @" << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        if (am == 1)
        {
            cout << " ----------LUNCH MENU----------" << endl;
            cout << "1 ---- Plain Rice" << endl;
            cout << "2 ---- Biriyani Rice " << endl;
            cout << "3 ---- Vegetable Biriyani " << endl;
            cout << "4 ---- Chicken Biriyani Fish Biriyani " << endl;
            cout << "5  ----Meat Biriyani Chicken with Rice " << endl;
            cout << "6 ---- Fish with Rice " << endl;
            cout << "7 ---- Meat with Rice" << endl;
            cout << "8 ---- Vegetable with Rice " << endl;
            cout << "9 ---- Fish Masala Fish Fry " << endl;
            cout << "10---- Chicken Khurma " << endl;
            cout << "11---- Meat Masala " << endl;
            cout << "12 ----Chicken Masala " << endl;
            cout << "13 ----Chicken Gizard Liver Masala" << endl;
            cout << "14 ----Brain Fry Chicken Fry" << endl;
            cout << "15 ----Dal" << endl;
            cout << "16 ----Vegetable and keema " << endl;

            cout << endl;
            cout << "How many item you want to order (input between 1 to 16)---  " << endl;

            cin >> item;
            cout << endl;

            cout << " Input your item's number for order ( one by one) " << endl;
            for (int i = 0; i < item; i++)
            {
                cin >> arr[i];
            }

            cout << " Your ordered  items is " << endl;
            for (int i = 0; i < item; i++)
            {

                if (arr[i] == 1)
                {
                    cout << "Plain Rice,"
                         << " ";
                }

                else if (arr[i] == 2)
                {
                    cout << " Biriyani Rice,"
                         << " ";
                }

                else if (arr[i] == 3)
                {
                    cout << "Vegetable Biriyani,"
                         << " ";
                }

                else if (arr[i] == 4)
                {
                    cout << "Chicken Biriyani Fish Biriyani,"
                         << " ";
                }

                else if (arr[i] == 5)
                {
                    cout << "Meat Biriyani Chicken with Rice,"
                         << " ";
                }

                else if (arr[i] == 6)
                {
                    cout << "Fish with Rice,"
                         << " ";
                }

                else if (arr[i] == 7)
                {
                    cout << "Meat with Rice,"
                         << " ";
                }

                else if (arr[i] == 8)
                {
                    cout << "Vegetable with Rice, "
                         << " ";
                }

                else if (arr[i] == 9)
                {
                    cout << " Fish Masala Fish Fry,"
                         << " ";
                }

                else if (arr[i] == 10)
                {
                    cout << " Chicken Khurma,"
                         << " ";
                }

                else if (arr[i] == 11)
                {
                    cout << " Meat Masala,"
                         << " ";
                }

                else if (arr[i] == 12)
                {
                    cout << "Chicken Masala,"
                         << " ";
                }

                else if (arr[i] == 13)
                {
                    cout << "Chicken Gizard Liver Masala,"
                         << " ";
                }

                else if (arr[i] == 14)
                {
                    cout << "Brain Fry Chicken Fry,"
                         << " ";
                }

                else if (arr[i] == 15)
                {
                    cout << "Dal"
                         << " ";
                }

                else if (arr[i] == 16)
                {
                    cout << "Vegetable and keema"
                         << " ";
                }
            }
        }
        else
        {
            cout << " ----------DINNER MENU----------" << endl;
            cout << "1----Chicken Bhuna" << endl;
            cout << "2----Chicken Jhal Fry" << endl;
            cout << "3----Chicken Korma" << endl;
            cout << "4----Tomato Chicken" << endl;
            cout << "5----Butter Chicken" << endl;
            cout << "6----Chicken Roast" << endl;
            cout << "7----Chicken Moglai" << endl;
            cout << "8----Mutton Kosha" << endl;
            cout << "9----Mutton Rojan Josh" << endl;
            cout << "10----Mutton Korma" << endl;
            cout << "11----Egg Mutton Curry" << endl;
            cout << "12----Beef Bhuna" << endl;
            cout << "13----Beef Ki Badsha" << endl;
            cout << "14----Shahi Beef" << endl;
            cout << "15 ----Dal" << endl;
            cout << "16 ----Vegetable and keema " << endl;

            cout << endl;
            cout << "How many item you want to order (input between 1 to 16)---  " << endl;
            
            cin >> item;
            cout << endl;

            cout << " Input your item's number for order ( one by one) " << endl;
            for (int i = 0; i < item; i++)
            {
                cin >> arr[i];
            }
            system("CLS");
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
            cout << "             @                        @" << endl;
            cout << "             @    -ORDERED ITEMS-     @" << endl;
            cout << "             @                        @" << endl;
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << " Your ordered  items is " << endl;
            for (int i = 0; i < item; i++)
            {

                if (arr[i] == 1)
                {
                    cout << "Chicken Bhuna,"
                         << " ";
                }

                else if (arr[i] == 2)
                {
                    cout << " Chicken Jhal Fry,"
                         << " ";
                }

                else if (arr[i] == 3)
                {
                    cout << "Chicken Korma,"
                         << " ";
                }

                else if (arr[i] == 4)
                {
                    cout << "Tomato Chicken,"
                         << " ";
                }

                else if (arr[i] == 5)
                {
                    cout << "Butter Chicken,"
                         << " ";
                }

                else if (arr[i] == 6)
                {
                    cout << "Chicken Roast,"
                         << " ";
                }

                else if (arr[i] == 7)
                {
                    cout << "Chicken Moglai,"
                         << " ";
                }

                else if (arr[i] == 8)
                {
                    cout << "Mutton Kosha, "
                         << " ";
                }

                else if (arr[i] == 9)
                {
                    cout << " Mutton Rojan Josh,"
                         << " ";
                }

                else if (arr[i] == 10)
                {
                    cout << " Mutton Korma,"
                         << " ";
                }

                else if (arr[i] == 11)
                {
                    cout << " Egg Mutton Curry,"
                         << " ";
                }

                else if (arr[i] == 12)
                {
                    cout << "Beef Bhuna,"
                         << " ";
                }

                else if (arr[i] == 13)
                {
                    cout << "Beef Ki Badsha,"
                         << " ";
                }

                else if (arr[i] == 14)
                {
                    cout << "Shahi Beef,"
                         << " ";
                }

                else if (arr[i] == 15)
                {
                    cout << "Dal,"
                         << " ";
                }

                else if (arr[i] == 16)
                {
                    cout << "Vegetable and keema"
                         << " ";
                }
            }
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
        }
    }

    void enterval()
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "             @                        @" << endl;
        cout << "             @    FEW MOMENTS LATER   @" << endl;
        cout << "             @                        @" << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

        cout << endl;
        cout << endl;
        cout << endl;
    }

    void bill()
    {
        int sum = 0;
        cout << name << "  hope you enjoy the meal " << endl;
        cout << " Your bill is ";
        for (int i = 0; i < item; i++)
        {

            if (arr[i] == 1)
            {
                sum = sum + 50;
            }

            else if (arr[i] == 2)
            {
                sum = sum + 450;
            }

            else if (arr[i] == 3)
            {
                sum = sum + 300;
            }

            else if (arr[i] == 4)
            {
                sum = sum + 500;
            }

            else if (arr[i] == 5)
            {
                sum = sum + 500;
            }

            else if (arr[i] == 6)
            {
                sum = sum + 200;
            }

            else if (arr[i] == 7)
            {
                sum = sum + 300;
            }

            else if (arr[i] == 8)
            {
                sum = sum + 200;
            }

            else if (arr[i] == 9)
            {
                sum = sum + 250;
            }

            else if (arr[i] == 10)
            {
                sum = sum + 300;
            }

            else if (arr[i] == 11)
            {
                sum = sum + 350;
            }

            else if (arr[i] == 12)
            {
                sum = sum + 300;
            }

            else if (arr[i] == 13)
            {
                sum = sum + 150;
            }

            else if (arr[i] == 14)
            {
                sum = sum + 300;
            }

            else if (arr[i] == 15)
            {
                sum = sum + 100;
            }

            else if (arr[i] == 16)
            {
                sum = sum + 300;
            }
        }
        cout << sum;

        cout << " Please pay your bill" << endl;
        int tk;
        cin >> tk;
        if (sum == tk || sum < tk)
        {

            system("CLS");
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
            cout << "             @                        @" << endl;
            cout << "             @    ---THANK YOU---     @" << endl;
            cout << "             @                        @" << endl;
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

            cout << endl;
            cout << endl;
            cout << endl;

            cout << " Thank you " << name << "  for paying the bill" << endl;
        }
        else
        {
            int rem;
            cout << " you didn't pay the full bill" << endl;
            rem = sum - tk;
            cout << " you need to pay " << rem << " tk more" << endl;
            int take;
            cin >> take;

            system("CLS");
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
            cout << "             @                        @" << endl;
            cout << "             @    ---THANK YOU---     @" << endl;
            cout << "             @                        @" << endl;
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

            cout << endl;
            cout << endl;
            cout << endl;

            if (sum == (tk + take) || sum < (tk + take))
            {
                cout << " Thank you for paying the full bill" << endl;
            }
        }
    }
    void tips()
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "             @                        @" << endl;
        cout << "             @    ------TIPS-----     @" << endl;
        cout << "             @                        @" << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " Do you want to give some tips ??" << endl;
        int yes;
        float tip;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " If it 'YES' PRESS '1' ---- If it 'NO' PRESS '2' " << endl;
        cin >> yes;
        if (yes == 1)
        {
            cout<<" how much tips you want to give   ?????"<<endl;
            cin >> tip;
            system("CLS");
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
            cout << "             @                        @" << endl;
            cout << "             @    ---THANK YOU---     @" << endl;
            cout << "             @                        @" << endl;
            cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;

            cout << endl;
            cout << endl;
            cout << " thank you for the tips " << endl;
        }
        else
        {
            cout << " ----------------- (-_-)  ------------------" << endl;
        }
    }

    void end()
    {

        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "             @                        @" << endl;
        cout << "             @   ROMAN'S GRILL HOUSE  @" << endl;
        cout << "             @                        @" << endl;
        cout << "             @@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << endl;
        cout << endl;

        cout << "Thank you  " << name << " for choosing -------ROMAN'S GRILL HOUSE------------- " << endl;
    }
};

int main()
{
    vector<restarurant> customer;
    
    cout << " 1----------enter resttaurant-----------" << endl;
    cout << " 2----------exit resttaurant------------" << endl;
    int n;
    cin >> n;
    system("CLS");
    if (n == 1)
    {
        cout << endl;
        cout << endl;
        cout << "-----------enter your name ----------" << endl;
        string name;
        cin.ignore();
        getline(cin, name);
        restarurant roman;
        roman.name = name;
        customer.push_back(roman);
        int a = customer.size();
        customer[a - 1].welcome();
        customer[a - 1].time();
        customer[a - 1].menu();
        customer[a - 1].enterval();
        customer[a - 1].bill();
        customer[a - 1].tips();
        customer[a - 1].end();
        main();
    }
    else
    {

        return 0;
    }
}