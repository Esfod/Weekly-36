#include <iostream>
#include <windows.h> 
#include <string>

class tasks
{
public:
    void taskOne()
    {
        system("cls");
        std::string fullname;
        char inital;
        int age;
        long pnum;
        std::string birthday;
        std::cout << "Task 1;\n";
        std::cout << "Please type your full name\n";
        std::cin.ignore();
        std::getline(std::cin, fullname);
        inital = fullname[0];
        std::cout << "Please type your age\n";
        std::cin >> age;
        std::cout << "Please type your phone number\n";
        std::cin >> pnum;
        std::cout << "Please type your birthday eks(26/03/2001)\n";
        std::cin >> birthday;
        system("cls");
        std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
        std::cout << "Name      | " + fullname << "\n";
        std::cout << "Inital    | " + inital << "\n";
        std::cout << "Age       | " + age << "\n";
        std::cout << "Phone num | " + pnum << "\n";
        std::cout << "Birthday  | " + birthday << "\n";
        std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n";
    }

    void taskTwo()
    {
        system("cls");
        std::string name;
        std::string yesOrNoo;
        std::string anwser;
        int age;
        std::cout << "Task 2\n";
        std::cout << "Please type your name\n";
        std::cin >> name;
        std::cout << "Please type your age\n";
        std::cin >> age;
        std::cout << "Do you like coffee?(type Yes or No)\n";
        std::cin >> yesOrNoo;
        system("cls");
        if (yesOrNoo == "Yes") anwser = "Seems you like coffee";
        else if (yesOrNoo == "No") anwser = "Oh you don't like coffee";
        std::cout << "Your name is: " << name << std::endl;
        std::cout << "Your are " << age << " years old" << std::endl;
        std::cout << anwser;
    }

    void taskThree()
    {
        system("cls");
        int age;
        std::cout << "Task 3\n";
        std::cout << "Please type your age\n";
        std::cin >> age; 
        system("cls");
        if (age < 20) std::cout << "You are young\n";
        else if (age >= 20 && age <= 40) std::cout << "You are a grown up\n";
        else if (age > 40 && age < 60) std::cout << "You are old\n";
        else if (age >= 60) std::cout << "You ARE really old\n";
    }

    void taskFour()
    {
        system("cls");
        std::string drinks[3]{ "Sprite is delicious","Fanta exotic gives peace of mind", "Coca Cola will give you a white smile" };
        int answer;
        std::cout << "Task 4\n";
        std::cout << "Whitch of thees three drinks is your favorite\nJust type the number\n";
        std::cout << "1. Sprite\n2. Fanta exotic \n3. Coca Cola\n";
        std::cin >> answer;
        system("cls");
        std::cout << drinks[answer - 1];
    }
    void taskFive()
    {
        system("cls");
        int num[5]{ 1,2,3,4,5 };
        int numLength{ std::size(num) };
        char star = '*';
        std::string lines[11]{ "    1   2   3   4   5 \n", "   --- --- --- --- ---\n","A : * : * : * : * : * : A\n", "   --- --- --- --- ---\n", "B : * : * : * : * : * : B\n" ,"   --- --- --- --- ---\n","C : * : * : * : * : * : C\n","   --- --- --- --- ---\n","D : * : * : * : * : * : D\n","   --- --- --- --- ---\n","    1   2   3   4   5 \n" };
        HANDLE  console = GetStdHandle(STD_OUTPUT_HANDLE);
        for (int i = 0; i < 11; i++)
        {
            if (lines[i].find(star) != std::string::npos)
            {
                SetConsoleTextAttribute(console, 4);
                std::cout << lines[i];
                SetConsoleTextAttribute(console, 7);
            }
            else
            std::cout << lines[i];

        }
        /* 
        std::cout << "    1   2   3   4   5 \n";
        std::cout << "   --- --- --- --- ---\n";
        std::cout << "A :   :   :   :   :   : A\n";
        std::cout << "   --- --- --- --- ---\n";
        std::cout << "B :   :   :   :   :   : B\n";
        std::cout << "   --- --- --- --- ---\n";
        std::cout << "C :   :   :   :   :   : C\n";
        std::cout << "   --- --- --- --- ---\n";
        std::cout << "D :   :   :   :   :   : D\n";
        std::cout << "   --- --- --- --- ---\n";
        std::cout << "    1   2   3   4   5 \n";*/
           
    }
};

int main()
{
    tasks glup;
    bool tasks[5]{};
    int tasknum;
    std::cout << "Which task do you want to see\n";
    std::cin >> tasknum;
    if (tasknum == 1) glup.taskOne();
    else if (tasknum == 2) glup.taskTwo();
    else if (tasknum == 3) glup.taskThree();
    else if (tasknum == 4) glup.taskFour();
    else if (tasknum == 5) glup.taskFive();
    else std::cout << "Please type a number between 1 and 5\n";
    std::cin >> tasknum;
    return 0;
}