#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// cingolf.cpp -- non-numeric input skipped
/* int main()
{
    const int max = 5;
    int golf[max];
    cout << "Please enter your golf scores.\n";
    cout << "You musst enter " << max << " rounds.\n";
    int i;
    for (i = 0; i < max;i++)
    {
        cout << "round #" << i + 1 << ": ";
        while(!(cin>>golf[i]))
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for (i = 0; i < max;i++)
        total += golf[i];
    cout << total / max << " average score " << max << " rounds\n";
    return 0;
} */

// outfile.cpp -- writing to a file
/* int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carrinfo.txt");

    cout << "Enter the make and model of automobilde: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter athe original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << a_price << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();
    return 0;
} */

// sumafile.cpp -- functions with an array argument

/* int main()
{
    const int size = 60;
    char filename[size];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename,size);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Progrom terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while(inFile.good())
    {
        ++count;
        sum += value;
        inFile >> value;
    }
    if(inFile.eof())
        cout << "End of file reached.\n";
        else if(inFile.fail())
        cout << "Input terminated by data mismatch.\n";
        else
        cout << "Input terminated for unknown reason.\n";
        if(count==0)
        cout << "No data processed.\n";
        else
        {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
        }
        inFile.close();
        return 0;
} */

// calling.cpp -- defining, prototyping, and calling a function

/* void simple();

int main()
{
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() id finished with the simple() function.\n";
    return 0;
}

void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
} */

// protos.cpp -- using prototypes and function calls

/* void cheers(int);
double cube(double x);
int main()
{
    cheers(5);
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
} */

// twoarg.cpp -- a function with 2 arguments
/* void n_chars(char, int);
int main()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while(ch!='q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of time is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

void n_chars(char c,int n)
{
    while (n-->0)
    {
        cout << c;
    }

} */

// lotto.cpp -- probability of winning

/* long double probability(unsigned numbers, unsigned picks);

int main()
{
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n";
    "the number of picks allowed:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
} */

// arrfun1.cpp -- dunctions with an array argument
/* const int arsize = 8;
int sum_arr(int arr[], int n);
int main()
{
    int cookies[arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sum_arr(cookies, arsize);
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}

int sum_arr(int arr[],int n)
{
    int total = 0;
    for (int i = 0; i < n;i++)
        total = total + arr[i];
    return total;
} */

// arrfun2.cpp -- function eith an array argument
/* const int arsize = 8;
int sum_arr(int arr[], int n);
int main()
{
    int cookies[arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";
    int sum = sum_arr(cookies, arsize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);
    std::cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    std::cout << arr << " = arr, ";
    std::cout << sizeof arr << " = sizeof arr\n";
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
} */

// arrfun3.cpp -- array functions and const

/* int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
    const int max = 5;
    double properties[max];
    int size = fill_array(properties, max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
} */

// arrfun4.cpp -- functions with an array range
/* int sum_arr(const int *begin, const int *end);
int main()
{
    const int arsize = 8;
    int cookies[arsize] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sum_arr(cookies, cookies + arsize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8);
    cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

int sum_arr(const int *begin, const int *end)
{
    const int *pt;
    int total = 0;
    for (pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
} */

// strgfun.cpp -- functions with a string argument
/* unsigned int c_in_str(const char *str, char ch);
int main()
{
    char mmm[15] = "minimum";
    char *wail = "ululate";
    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u chaeacters in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
    unsigned int count = 0;
    while (*str)
    {
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
} */

