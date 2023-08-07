#include <iostream>
#include <cctype>

using namespace std;

// cctypes.cpp -- using the ctype.h library

/* int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type @ to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, " << whitespace << " whitespace, " << digits << " digits, " << punct << " punctuations, " << others << " others.\n";
    return 0;
} */

// condit.cpp -- using the conditional operator

/* int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b; // c = a if a > b, else c = b
    cout << " is " << c << endl;
    return 0;
} */

// switch.cpp -- using the switch statement
/* void showmenu();
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                cout << "\a\n";
                break;
                case 2:
                report();
                break;
                case 3:
                cout << "Thr boss was in all day.\n";
                break;
                case 4:
                comfort();
                break;
                default:
                cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}

void showmenu()
{
    cout << "Please enter 1,2,3,4, or 5:\n"
            "1) alarm           2) report\n"
            "3) alibi           4)comfort\n"
            "5) quit\n";
}

void report()
{
    cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
            "in the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";
} */

// enum.cpp -- using enum
/* enum
{
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    indigo
};

int main()
{
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
        case red:
            cout << "Her lips were red.\n";
            break;
            case orange:
            cout << "Her hair was orange.\n";
            break;
            case yellow:
            cout << "Her shoes were yellow.\n";
            break;
            case green:
            cout << "Her nails were green.\n";
            break;
            case blue:
            cout << "Her swearsuit was blue.\n";
            break;
            case violet:
            cout << "Her eyes were violet.\n";
            break;
            case indigo:
            cout << "Her mood was indigo.\n";
            break;
        }
        cout << "Enter color code(0-6): ";
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
} */

// jump.cpp -- using continue and break
/* const int arsize = 80;
int main()
{
    char line[arsize];
    int spaces = 0;

    cout << "Enter a line of text:\n";
    cin.get(line, arsize);
    cout << "Complete line:\n"
         << line << endl;
    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }
    cout << "\n"
         << spaces << " spaces\n";
    cout << "Done.\n";
    return 0;
}
 */

// cinfish.cpp -- non_numeric input terminates loop
/* int main()
{
    const int max = 5;
    double fish[max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << max << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < max && cin >> fish[i])
    {
        if (++i < max)
            cout << "fish #" << i + 1 << ": ";
    }
//calculate average
    double total = 0.0;
    for (int j = 0; j < i;j++)
        total += fish[j];
//report results
    if(i==0)
        cout << "No fish\n";
        else
        cout << total / i << " = average weight of " << i << " fish\n";
        cout << "Done.\n";
        return 0;
} */

//cingolf.cpp -- non-numberic input skipped