#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>
#include <ctime>
#include <climits>
#include <cctype>

using namespace std;

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

// init_ptr.cpp -- initialize a pointer
/* int main()
{
    using namespace std;
    int higgens=5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;
    return 0;
} */

// use_new.cpp -- using the new operator
/* int main()
{
    using namespace std;
    int nights = 1001;
    int *pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of * pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    return 0;
} */

// arraynew.cpp -- using the new operator for arrays
/* int main()
{
    using namespace std;
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;
    delete[] p3;
    return 0;
} */

// addpntrs.cpp -- pointer addition
/* int main()
{
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    double *pw = wages;
    short *ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "acces two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    return 0;
} */

// ptrstr.cpp -- using pointers to strings
/* int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;
    cout << animal << " and ";
    cout << bird << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout<< animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    return 0;
} */

// newstrct.cpp -- using new with a strcture
/* struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin>>(*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
    return 0;
} */

// delete.cpp -- using the delete operator
/* char *getname(void);
int main()
{
    using namespace std;
    char *name;
    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete[] name;
    name = getname();
    cout << name << " at " << (int *)name << "\n";
    delete[] name;
    return 0;
}
char*getname()
{
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
} */

// mixtypes.cpp -- some type combinations

/* struct antarctica_year_end
{
    int year;
};

int main()
{
    antarctica_year_end s01, s02, s03;
    s01.year = 1998;
    antarctica_year_end *pa = &s02;
    pa->year = 1999;
    antarctica_year_end trio[3];
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_year_end *arp[3] = {&s01, &s02, &s03};
    std::cout << arp[1]->year << std::endl;
    const antarctica_year_end **ppa = arp;
    auto ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;
    return 0;
} */

// choices.cpp -- array variations
/* int main()
{
    using namespace std;
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);
    a2[0] = 1.0 / 3.0;
    a2[1] = 1.0 / 5.0;
    a2[2] = 1.0 / 7.0;
    a2[3] = 1.0 / 9.0;
    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    a1[-2] = 20.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    return 0;
} */

// forloop.cpp -- introducing the for loop
/* int main()
{
    using namespace std;
    int i;
    for (i = 0; i < 5;i++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";
    return 0;
} */

// num_test.cpp -- use numeric test in for loop
/* int main()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i;i--)
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";
    return 0;
} */

// express.cpp -- values of expressions
/* int main()
{
    using namespace std;
    int x;
    cout << "The expression x = 100 has the value ";
    cout << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "The expression x < 3 has the value ";
    cout << (x < 3) << endl;
    cout << "The expression x < 3 has the value ";
    cout << (x > 3) << endl;
    return 0;
} */

// formore.cpp -- more looping with for
/* const int arsize = 21;
int main()
{
    long long factorials[arsize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < arsize;i++)
        factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < arsize;i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
} */

// bigstep.cpp -- count as directed
/* int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100;i=i+by)
        cout << i << endl;
    return 0;
} */

// forstr1.cpp -- using for with a string
/* int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    for (int i = word.size() - 1; i >= 0;i--)
        cout << word[i];
    cout << "\nBye.\n";
    return 0;
} */

// plus_one.cpp -- the increment operator
/* int main()
{
    using std::cout;
    int a = 20;
    int b = 20;
    cout << "a   = " << a << ":   b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a   = " << a << ":   b = " << b << "\n";
    return 0;
} */

// block.cpp -- use a block statement
/* int main()
{
    using namespace std;
    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5;i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
} */

// dorstr2.cpp -- reversing an array
/* int main()
{
    using namespace std;
    cout << "Enter a wood: ";
    string word;
    cin >> word;
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i;--i,++j)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    };
    cout << word << "\nDone\n";
    return 0;
} */

// equal.cpp -- equality vs assignment
/* int main()
{
    using namespace std;
    int quizscores[10]={20,20,20,20,20,19,20,18,20,20};
    cout << "Doing it right:\n";
    int i;
    for (i = 0; quizscores[i] == 20;i++)
        cout << "quiz " << i << " is a 20\n";
    cout << "Doing it dangerously wrong:\n";
    for (i = 0; quizscores[i] = 20;i++)
        cout << "quiz " << i << " is a 20\n";
    return 0;
} */

// compstr1.cpp -- comparing string using arrays
/* int main()
{
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate");ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends,word is " << word << endl;
    return 0;
} */

// compstr2.cpp -- comparing strings using arrays
/* int main()
{
    using namespace std;
    string word = "?ate";
    for (char ch = 'a'; word != "mate";ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends,word is " << word << endl;
    return 0;
} */

// while.cpp -- introducing the while loop
/* const int arsize = 20;
int main()
{
    char name[arsize];
    cout << "Your first name,please: ";
    cin >> name;
    cout << "Here is your name,verticalized and ASCIIized:\n";
    int i = 0;
    while(name[i]!='\0')
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
} */

// waiting.cpp -- using clock() in a time-delay loop
/* int main()
{
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "starting\a\n";
    clock_t start = clock();
    while(clock()-start<delay)
        ;
    cout << "done \a\n";
    return 0;
} */

// dowhile.cpp -- exit-condition loop
/* int main()
{
    int n;
    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;
    } while (n != 7);
    cout << "Yes, 7 is my favorite.\n";
    return 0;
} */

// tectin1.cpp -- reading chars with a while loop
/* int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;
    while(ch!='#')
    {
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl
         << count << " characters read\n";
    return 0;
} */

// textin2.cpp -- using cin.get(char)
/* int main()
{
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " characters read\n";
    return 0;
} */

// textin3.cpp -- reading chars to end of file
/* int main()
{
    char ch;
    int count = 0;
    cin.get(ch);
    while(cin.fail()==false)//while(!cin.fail())
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl
         << count << " characters read\n";
    return 0;
} */

// textin4.cpp -- reading chars with cin.get()
/* int main(void)
{
    int ch;
    int count = 0;
    while((ch=cin.get())!=EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl
         << count << " characters read\n";
    return 0;
} */

// nested.cpp -- nested loops and 2-D array
/* const int Cities = 5;
const int Years = 4;
int main()
{
    const char *cities[Cities] =
        {
            "Gribble City",
            "Gribbletown",
            "New Gribble",
            "San Gribble",
            "Gribble Vista"};

    int maxtemps[Years][Cities] =
        {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}};
    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities;++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    return 0;
} */

// if.cpp -- using the if statement
/* int main()
{
    using std::cin;
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
} */

// ifelseif.cpp -- using if else if else
/* const int Fave = 27;
int main()
{
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if(n<Fave)
            cout << "Too low -- guess again: ";
            else if(n>Fave)
            cout << "Too high -- guess again: ";
            else
            cout << Fave << " is right!\n";
    } while (n!=Fave);
    return 0;
} */

// or.cpp -- using the logical OR operator
/* int main()
{
    cout << "This program may reformat your hard disk\n"
         << "and destroy all your data.\n"
         << "Do you wish ti continue?<y/n>";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "You were wared!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wish choice ... bye\n";
    else
        cout << "That wasn't a y or n! Apparently you can't follow\ninstructions, so I'll trash your disk anyway.\a\a\a\n";
    return 0;
} */

// and.cpp -- using the logical AND operator
/* const int arsize = 6;
int main()
{
    float naaq[arsize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) of\nyour neighbors. Program terminates when you make\n"
         << arsize << " entries or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < arsize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if (i < arsize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0)
        cout << "No data--bye\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " of your neighbors have greater awareness of\nthe New Age than you do.\n";
    }
    return 0;
}
 */

// more_and.cpp -- using the logical AND  operator
/* const char *qualify[4] =
    {
        "10,000-meter race.\n",
        "mud tug-of-war.\n",
        "masters canoe jousting.\n",
        "pie-throwing festival.\n"};
int main()
{
    int age;
    cout << "Enter your age in years: ";
    cin >> age;
    int index;
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    cout << "You qualify for the " << qualify[index];
    return 0;
} */

// not.cpp -- using the not opertor
/* bool is_int(double);
int main()
{
    double num;
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num))
    {
        cout << "Out of range -- please try aagain: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    else
        return false;
} */

//cctypes.cpp -- using the ctype.h library
int main()
{
    cout << "Enter text for analysis, and tye @ to terminate input.\n";
    return 0;
}