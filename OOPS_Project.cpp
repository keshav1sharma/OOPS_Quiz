#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main()
{
    cout << "1."
         << "   Take Quiz" << endl;
    cout << "2."
         << "   View Previous Results" << endl;
    cout << "3."
         << "   View Rankings" << endl;
    int Input;
    cout << "Enter the index of the related class : ";
    cin >> Input;
    switch (Input)
    {
    case 1:
    {
        cout << "Enter Name : ";
        string name;
        cin >> name;

        double marks = 0, oops = 0, stl = 0, general = 0, file = 0, exception = 0, percentage = 0;
        int ques = 1;
        {
            cout << ques << ". "
                 << " When is the 'new' keyword used ?" << endl;
            cout << "a. "
                 << "At Runtime"
                 << "    "
                 << "b."
                 << " At Compile time" << endl;
            cout << "c. "
                 << "Depends on code"
                 << "   "
                 << "d."
                 << " None" << endl;
            char ans;
            cin >> ans;
            if (ans == 'a')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Total types of constructors in C++ are?" << endl;
            cout << "a. "
                 << "1"
                 << "    "
                 << "b."
                 << " 2" << endl;
            cout << "c. "
                 << "3"
                 << "   "
                 << "d."
                 << " 4" << endl;
            char ans;
            cin >> ans;
            if (ans == 'c')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Which of the following is not a type of inheritance in C++?" << endl;
            cout << "a. "
                 << " Multiple"
                 << "    "
                 << "b."
                 << " Multilevel" << endl;
            cout << "c. "
                 << "Distributed"
                 << "   "
                 << "d."
                 << " Heirarchical" << endl;
            char ans;
            cin >> ans;
            if (ans == 'c')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Identify operators that cannot be overloaded?" << endl;
            cout << "a. "
                 << "?:"
                 << "    "
                 << "b."
                 << " .(dot)" << endl;
            cout << "c. "
                 << ">>"
                 << "   "
                 << "d."
                 << " a&b" << endl;
            char ans;
            cin >> ans;
            if (ans == 'd')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " By default fields or members in structure and class are _____respectively." << endl;
            cout << "a. "
                 << "public, protected"
                 << "    "
                 << "b."
                 << " Protected, private" << endl;
            cout << "c. "
                 << "private, private"
                 << "   "
                 << "d."
                 << " Public, private" << endl;
            char ans;
            cin >> ans;
            if (ans == 'd')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " When a base class pointer points to derived class object then by default which class constructor is called?" << endl;
            cout << "a. "
                 << "derived class"
                 << "    "
                 << "b."
                 << " Base class" << endl;
            cout << "c. "
                 << "base class then derived class"
                 << "   "
                 << "d."
                 << " Derived class then base class" << endl;
            char ans;
            cin >> ans;
            if (ans == 'c')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Choose the option for which instance of a class cannot be created" << endl;
            cout << "a. "
                 << "Anonymous class"
                 << "    "
                 << "b."
                 << " Parent class" << endl;
            cout << "c. "
                 << "nested class"
                 << "   "
                 << "d."
                 << " Abstract class" << endl;
            char ans;
            cin >> ans;
            if (ans == 'd')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " What is generic class?" << endl;
            cout << "a. "
                 << "Template class"
                 << "    "
                 << "b."
                 << "  Final class" << endl;
            cout << "c. "
                 << "Abstract class"
                 << "   "
                 << "d."
                 << " Generic class" << endl;
            char ans;
            cin >> ans;
            if (ans == 'a')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " What is a virtual function mainly used to achieve?" << endl;
            cout << "a. "
                 << "function code polymorphism"
                 << "    "
                 << "b."
                 << " Interpreter polymorphism" << endl;
            cout << "c. "
                 << "compile time polymorphism"
                 << "   "
                 << "d."
                 << " Runtime polymorphism" << endl;
            char ans;
            cin >> ans;
            if (ans == 'd')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << "  how many catch blocks can one try Block have?" << endl;
            cout << "a. "
                 << "1"
                 << "    "
                 << "b."
                 << " 2" << endl;
            cout << "c. "
                 << "According to need"
                 << "   "
                 << "d."
                 << " Maximum 256" << endl;
            char ans;
            cin >> ans;
            if (ans == 'c')
            {
                marks++;
                exception++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Choose which of the following is not a type of constructor." << endl;
            cout << "a. "
                 << " copy constructor"
                 << "    "
                 << "b."
                 << " Friend constructor" << endl;
            cout << "c. "
                 << "parameterised constructor"
                 << "   "
                 << "d."
                 << " Default constructor" << endl;
            char ans;
            cin >> ans;
            if (ans == 'b')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " What is it 'cout' ?" << endl;
            cout << "a. "
                 << " operator"
                 << "    "
                 << "b."
                 << " Object" << endl;
            cout << "c. "
                 << "function"
                 << "   "
                 << "d."
                 << " Macro" << endl;
            char ans;
            cin >> ans;
            if (ans == 'b')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Who develop object-oriented programming?" << endl;
            cout << "a. "
                 << " Dennis Ritchie"
                 << "    "
                 << "b."
                 << " Charles Babbage" << endl;
            cout << "c. "
                 << "Andrea Ferro"
                 << "   "
                 << "d."
                 << "Alan Kay" << endl;
            char ans;
            cin >> ans;
            if (ans == 'd')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Which was first purely OOP language developed?" << endl;
            cout << "a. "
                 << "Objective-C"
                 << "    "
                 << "b."
                 << " C++" << endl;
            cout << "c. "
                 << "SmallTalk"
                 << "   "
                 << "d."
                 << " Java" << endl;
            char ans;
            cin >> ans;
            if (ans == 'c')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << "  Which feature of OOP is shown in code below" << endl;
            cout << "class student{int marks;};"
                 << "\n"
                 << "class topper : public student{\nint age;" << endl;
            cout << "topper(int t)"
                 << "\n"
                 << "age = t;};" << endl;
            cout << "a. "
                 << " encapsulation, inheritance"
                 << "    "
                 << "b."
                 << "inheritance, polymorphism" << endl;
            cout << "c. "
                 << " polymorphism"
                 << "   "
                 << "d."
                 << " Inheritance" << endl;
            char ans;
            cin >> ans;
            if (ans == 'a')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " What type of access does friend function of a class have?" << endl;
            cout << "a. "
                 << " public, protected"
                 << "    "
                 << "b."
                 << " Public, protected, private" << endl;
            cout << "c. "
                 << "public"
                 << "   "
                 << "d."
                 << " No access" << endl;
            char ans;
            cin >> ans;
            if (ans == 'b')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " How are destructors called in inheritance?" << endl;
            cout << "a. "
                 << "first base class then inherited class"
                 << "    "
                 << "b."
                 << " First inherited then bass class" << endl;
            cout << "c. "
                 << "only base class"
                 << "   "
                 << "d."
                 << " None" << endl;
            char ans;
            cin >> ans;
            if (ans == 'a')
            {
                marks++;
                oops++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " In file handling by default in what mode does a file open?" << endl;
            cout << "a. "
                 << "ios::in"
                 << "    "
                 << "b."
                 << " ios::app" << endl;
            cout << "c. "
                 << "ios::trunc"
                 << "   "
                 << "d."
                 << " ios::binary" << endl;
            char ans;
            cin >> ans;
            if (ans == 'c')
            {
                marks++;
                file++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << "  In a map class key values can be same." << endl;
            cout << "a. "
                 << "True"
                 << "    "
                 << "b."
                 << " False" << endl;

            char ans;
            cin >> ans;
            if (ans == 'b')
            {
                marks++;
                stl++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " We can add elements from front as well as back in Vector" << endl;
            cout << "a. "
                 << "True"
                 << "    "
                 << "b."
                 << " False" << endl;

            char ans;
            cin >> ans;
            if (ans == 'b')
            {
                marks++;
                stl++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " Which operator is used for accessing a member of namespace?" << endl;
            cout << "a. "
                 << ":"
                 << "    "
                 << "b."
                 << " ::" << endl;
            cout << "c. "
                 << "->"
                 << "   "
                 << "d."
                 << " .(dot)" << endl;
            char ans;
            cin >> ans;
            if (ans == 'b')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            cout << ques << ". "
                 << " What is output of the following code?" << endl;
            cout << "namespace A \n{var=10;}\n"
                 << "namespace B\n{var=5;}\n"
                 << endl;
            cout << "int main(){\n using namespace B;\n cout<<A::var<<endl;" << endl;
            cout << "a. "
                 << "10"
                 << "    "
                 << "b."
                 << " 5" << endl;
            cout << "c. "
                 << "10 5"
                 << "   "
                 << "d."
                 << " Error" << endl;
            char ans;
            cin >> ans;
            if (ans == 'a')
            {
                marks++;
                general++;
            }
            ques++;
        }
        {
            percentage = (marks / 22) * 100;
            cout << "Marks obtained : " << marks << "/22" << endl;
            cout << "Percentage : " << percentage << "%" << endl;
            cout << "Topic Wise Score : " << endl;
            cout << "OOPS : " << oops << "/10" << endl;
            cout << "General Knowledge : " << general << "/7" << endl;
            cout << "STL : " << stl << "/3" << endl;
            cout << "File Handeling : " << file << "/1" << endl;
            cout << "Exception Handeling : " << exception << "/1" << endl;
        }
        {

            ofstream ofs("results.txt", ios::app);
            ofs << name << "    " << to_string(marks) << "    " << to_string(percentage) << endl;
            ofs.close();
        }
    }
    break;
    case 2:
    {
        string line;
        ifstream infile("results.txt");
        if (infile.is_open())
        {
            while (getline(infile, line))
            {
                cout << line << '\n';
            }
            infile.close();
        }
        else
            cout << "file not open" << endl;
    }

    break;
    case 3:
    {
        string line;
        ifstream infile("results.txt");
        if (infile.is_open())
        {
            cout << endl;
            int Marks, Percent;
            vector<int> a;
            int i = 0;
            while (infile.eof() == 0)
            {
                string Nam, Mark, Perc;

                infile >> Nam >> Mark >> Perc;
                stringstream M(Mark);
                M >> Marks;
                a.push_back(Marks);
                cout << Marks;
                // cout<<Nam<<" "<<Mark<<" "<<Perc;
                cout << endl;
                i++;
            }
            vector<int>::iterator itr;
            for (itr = a.begin(); itr != a.end(); itr++)
            {
                cout << *itr << " ";
            }
            infile.close();
        }
        else
            cout << "file not open" << endl;
    }
    break;
    default:
        cout << "Incorrect Input" << endl;
    }
}