#include <iostream>
#include <cstring>
#include <string>

// arrayone.cpp -- small arrays of integers
/* int main()
{
    using namespace std;
    int yams[3];  //creates array with three elements
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};//create,initialize array
    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams cost " << yamcosts[1] << " cent per yam.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";
    return 0;
} */

// strings.cpp -- storing strings in an array
/* int main()
{
    using namespace std;
    const int size = 15;
    char name1[size];
    char name2[size] = "C++owoby";
    cout << "Howdy!I'm " << name2 << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    return 0;
} */

// instr1.cpp -- reading more than onr string
/* int main()
{
    using namespace std;
    const int arsize = 20;
    char name[arsize];
    char dessert[arsize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favortite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
} */

// instr2.cpp -- reading more than one word with getline
/* int main()
{
    using namespace std;
    const int arsize = 20;
    char name[arsize];
    char dessert[arsize];

    cout << "Enter your name:\n";
    cin.getline(name, arsize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, arsize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
} */

// instr3.cpp -- reading more than one word with get() & get()
/* int main()
{
    using namespace std;
    const int arsize = 20;
    char name[arsize];
    char dessert[arsize];

    cout << "Enter your name:\n";
    cin.get(name, arsize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, arsize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
} */

// numstr.cpp -- following number input with line input
/* int main ()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year bulit: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
} */

// strtype1.cpp -- using the C++ string class
/* int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    cout << "The thrid letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;

    return 0;
} */

// strtype2 -- assigning, adding, and appending
/* int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings:s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \"for a day\"yields s2 = " << s1 << endl;
    return 0;
} */

// strtype3.cpp -- more string class features
/* int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains " << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

    return 0;
} */

// strtype4 -- line input
/* int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;
    return 0;
} */

// structur.cpp -- a simple structure
/* struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
        {
            "Glorious Gloria",
            1.88,
            29.99};
    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99};

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
} */

// assgn_st.cpp -- assigning structures

/* struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet = {
        "sunflowers",
        0.20,
        12.49};
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
} */

// arrstruc.cpp -- an array of structures
/* struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable guests[2] =
        {
            {"Bambi", 0.5, 21.99},
            {"Godzilla", 2000, 565.99}};
    cout << "The guests " << guests[0].name << " and " << guests[1].name << "\nhave a combined volume of " << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
} */

// address.cpp -- using the & operator to find addresses
/* int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value =" << donuts;
    cout << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
} */

// pointer.cpp -- our first pointer variable
/* int main()
{
    using namespace std;
    int updates = 6;
    int *p_updates;

    p_updates = &updates;

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses:&update = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
} */

//