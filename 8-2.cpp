#include <iostream>
using namespace std;

// show hex and octal literals
/*int main(){
    using namespace std;
    int chest = 42;//decimal-十进制 integer-整数 literal-字面上的
    int waist = 0x42;//hexadecimal-十六进制 integer literal
    int inseam = 042;//octal-八进制 integer literal

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << "(42 in decimal)\n";
    cout << "waist = " << waist << "(0x42 in hex)\n";
    cout << "inseam = " << inseam << "(042 in octal)\n";
    return 0;
    //在默认情况下，cout以十进制格式显示整数
} */

// display values in hex and octal
/* int main()
{
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << "(decimal for 42)" << endl;
    cout << hex;//修改cout显示整数的方式
    cout << "waist = " << waist << "(hexadecimal for 42)" << endl;
    cout << oct;
    cout << "inseam = " << inseam << "(cotal for 42)" << endl;
    return 0;
} */

// the char type
/* int main()
{
    using namespace std;
    char ch; // declare a char variable
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola!";
    cout << "Thank you for the " << ch
         << " character." << endl;
    return 0;
} */

// morechar.cpp -- the char type and int type contrasted
/* int main()
{
    using namespace std;
    char ch = 'M'; // assign ASCII code for M to ch
    int i = ch;    // store same code in an int
    cout << "The ASCII code for" << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch):";
    cout.put(ch);

    // using cout.put() to display a char constant
    cout.put('!');

    cout << endl << "Done" << endl;
    return 0;
} */

/* int main()
{
    using namespace std;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    return 0;
} */

// 创建常量通用格式：const type name = value
//floatnum.cpp -- floating-point types

/* int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);//fixed-point
    float tub = 10.0 / 3.0;//good to about 6 places
    double mint = 10.0 / 3.0;//good to about 15 places
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ",a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = " << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = " << million * mint << endl;
    return 0;
} */

//fltadd.cpp -- precision problems with float
/* int main()
{
    using namespace std;
    float a = 2.34e+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
} */

//arith.cpp -- some C++ arithmetic
/* int main()
{
    using namespace std;
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a unmber: ";
    cin >> hats;/
    cout << "Enter another unmber: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0;
} */

//divide.cpp -- integer and floating-point division
/* int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl; // 乱码了，不知道为什么--Floating鈥攑oint
    cout << "Floating—point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1.e7f / 9.0f << endl;
    return 0;
} */

//modulus.cpp -- uses % operator to convert lbs to stone
/* int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << "pounds are " << stone << " stone, " << pounds << " pound(s).\n";
    return 0;
} */

//init.cpp -- type changes on initialization
/* int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2e12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
} */

//typecast.cpp -- forcing type changes
/* int main()
{
    using namespace std;
    int auks, bats, coots;

    //the following statement adds the values as double,
    //then converts the result to int
    auks = 19.9 + 11.99;

    //these statements add values as int
    bats = (int)19.9 + (int)11.99;//old C syntax
    coots = int(19.99) + int(11.99);//new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is " << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;
    return 0;
} */

