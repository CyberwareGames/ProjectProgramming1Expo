// Including libraries
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#define size_Cars 5

using namespace std;

string Mercedes[size_Cars] = {"e300 2005", "c63 2015", "g63 2020", "rocket 900 2019", "cls 300 2015"};
char available_Mercedes[size_Cars] = {'y', 'y', 'y', 'y', 'y'};
string BMW[size_Cars] = {"e28 1801", "e30 1995", "e34 1993", "x5 2007", "x3 2004"};
char available_BMW[size_Cars] = {'y', 'y', 'y', 'y', 'y'};
string Toyota[size_Cars] = {"corolla 2005", "yaris 2020", "supra mk4 1999", "rav4 2003", "camry 2017"};
char available_Toyota[size_Cars] = {'y', 'y', 'y', 'y', 'y'};
string Nissan[size_Cars] = {"350z 2010", "370z 2015", "400z 2020", "gtr r34 1999", "gtr r35 2023"};
char available_Nissan[size_Cars] = {'y', 'y', 'y', 'y', 'y'};

// defining constant for how many re attempts you can have in hangman
const int MAX_WRONG = 8;

// defining the words for hangman
string words[7] = {"BASKETBALL", "VOLLEYBALL", "FOOTBALL", "SWIMMING", "RUNNING", "CYCLING", "TENNIS"};

// defining the TicTacToe variables
char square[26] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

// Display the menu of car models
void Display_Array(string menu[])
{
    cout << "Menu:\n";
    for (int i = 0; i < size_Cars; i++)
    {
        cout << i + 1 << ": " << menu[i] << endl;
    }
    cout << "6: Exit\nYour Choice: ";
}
void Fill_Array(string Cars[], char Is_Available[], string Type[], char Available_Type[], bool Done)
{
    for (int i = 0; i < size_Cars; i++)
    {
        if (Done)
        {
            Available_Type[i] = Is_Available[i];
        }
        else
        {
            Cars[i] = Type[i];
            Is_Available[i] = Available_Type[i];
        }
    }
}
void Delete_Array(char available[])
{
    for (int i = 0; i < size_Cars; i++)
    {
        available[i] = 'm';
    }
}

// Calculating Rent
bool Rental_Process(int choice)
{
    int days;
    int total;
    int pricePerDay;
    char checkout;

    if (choice == 1)
        pricePerDay = 25;
    if (choice == 2)
        pricePerDay = 30;
    if (choice == 3)
        pricePerDay = 35;
    if (choice == 4)
        pricePerDay = 40;
    if (choice == 5)
        pricePerDay = 45;

    cout << "Number of days for rent: ";
    cin >> days;
    total = days * pricePerDay;
    cout << "Your total is: " << total << "$" << endl;
    cout << "Do you want to Checkout?(y/n) : ";
    do
    {
        cin >> checkout;
    } while (checkout != 'y' && checkout != 'n');
    if (checkout == 'y')
        return true;
    else
        return false;
}

void Model_Selection(int Car_Type)
{
    string Cars[size_Cars];
    char available[size_Cars];
    string Car;
    string available_Car_Type;
    bool Done = false;
    Delete_Array(available);

    int choice;
    do
    {
        switch (Car_Type)
        {
        case 1:
            Fill_Array(Cars, available, BMW, available_BMW, Done);
            Done = false;
            break;
        case 2:
            Fill_Array(Cars, available, Mercedes, available_Mercedes, Done);
            Done = false;
            break;
        case 3:
            Fill_Array(Cars, available, Toyota, available_Toyota, Done);
            Done = false;
            break;
        case 4:
            Fill_Array(Cars, available, Nissan, available_Nissan, Done);
            Done = false;
            break;

        default:
            break;
        }
        Display_Array(Cars);
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (available[0] == 'y')
            {
                if (Rental_Process(choice))
                {
                    available[0] = 'n';
                    cout << "Car Rented Successfully.\n";
                    system("pause");
                }
                Done = true;
            }
            else
            {
                cout << "Car is not available.\n";
                system("pause");
            }
            break;
        case 2:
            if (available[1] == 'y')
            {
                if (Rental_Process(choice))
                {
                    available[1] = 'n';
                    cout << "Car Rented Successfully.\n";
                    system("pause");
                }
                Done = true;
            }
            else
            {
                cout << "Car is not available.\n";
                system("pause");
            }
            break;
        case 3:
            if (available[2] == 'y')
            {
                if (Rental_Process(choice))
                {
                    available[2] = 'n';
                    cout << "Car Rented Successfully.\n";
                    system("pause");
                }
                Done = true;
            }
            else
            {
                cout << "Car is not available.\n";
                system("pause");
            }
            break;
        case 4:
            if (available[3] == 'y')
            {
                if (Rental_Process(choice))
                {
                    available[3] = 'n';
                    cout << "Car Rented Successfully.\n";
                    system("pause");
                }
                Done = true;
            }
            else
            {
                cout << "Car is not available.\n";
                system("pause");
            }
            break;
        case 5:
            if (available[4] == 'y')
            {
                if (Rental_Process(choice))
                {
                    available[4] = 'n';
                    cout << "Car Rented Successfully.\n";
                    system("pause");
                }
                Done = true;
            }
            else
            {
                cout << "Car is not available.\n";
                system("pause");
            }
            break;
        case 6:
            // Done = true;
            //  Delete_Array(available);
            break;
        default:
            cout << "Invalid Input!\n";
        }
    } while (choice != 6);
}

// Car rental main page
void Car_Rental()
{
    int choice;
    do
    {
        cout << "Car Type Menu:\n1:BMW\n2:Mercedes\n3:Toyota\n4:Nissan\n5:Exit\nYour Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Model_Selection(1);
            system("pause");
            break;
        case 2:
            Model_Selection(2);
            system("pause");
            break;
        case 3:
            Model_Selection(3);
            system("pause");
            break;
        case 4:
            Model_Selection(4);
            system("pause");
            break;
        case 5:
            break;
        default:
            cout << "Invalid Input!\n";
            system("pause");
        }
    } while (choice != 5);
}

// Addition for calculator
double Addition(double x, double y)
{
    return x + y;
}

// Subtraction for calculator
double Subtraction(double x, double y)
{
    return x - y;
}

// Multiplication for calculator
double Multiplication(double x, double y)
{
    return x * y;
}

// Division for Calculator
double Division(double x, double y)
{
    if (y == 0)
    {
        cout << "Math Error" << endl;
        system("pause");
        return -1; // exits the operation upon error (denominator should not be equal to 0)
    }
    else
        return x / y;
}

// Percentage for Calculator
double Percentage(double x, double y)
{
    return (x * y) / 100;
}

// Square root for calculator
double Square_root(double x)
{
    if (x < 0)
    {
        cout << "Math Error";
        system("pause");
        return -1; // exits the operation upon error (x should be positive)
    }
    else
        return sqrt(x);
}

// Exponent for calculator
double Exponent(double x, double y)
{
    return pow(x, y);
}

// main calculator page
void Calculator()
{
    int operation, x, y;
    do
    {
        cout << "Enter the number of operation you want to use:\n1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n5: Percentage\n6: Square Root\n7: Exponential\n0: Exit\nYour Choice: ";
        cin >> operation;
        switch (operation)
        {
        case 0:
            break; // the user exits the app "calculator"
        case 1:
            // Call Addition function
            cout << "Enter two numbers you want to add: ";
            cin >> x >> y;
            cout << Addition(x, y) << endl;
            system("pause");
            break;
        case 2:
            // Call Subtraction function
            int x, y;
            cout << "Enter two numbers you want to subtract: ";
            cin >> x >> y;
            cout << Subtraction(x, y) << endl;
            system("pause");
            break;
        case 3:
            // Call Multiplication function
            cout << "Enter two numbers you want to multiply: ";
            cin >> x >> y;
            cout << Multiplication(x, y) << endl;
            system("pause");
            break;
        case 4:
            // Call Division function
            cout << "Enter two numbers you want to divide: ";
            cin >> x >> y;
            if (Division(x, y) == -1)
                break; // meaning y is 0 and this is a math error, the program exits the operation "division"
            else
                cout << Division(x, y) << endl;
            system("pause");
            break;
        case 5:
            // Call percentage function
            cout << "Enter a number: ";
            cin >> x;
            cout << "Enter what percent of " << x << " you want to calculate: ";
            cin >> y;
            cout << Percentage(x, y) << endl;
            system("pause");
            break;
        case 6:
            // Call square root function
            cout << "Enter a number: ";
            cin >> x;
            if (Square_root(x) == -1)
                break; // meaning x is negative and this is a math error, the program exits the operation "square root"
            else
                cout << Square_root(x) << endl;
            system("pause");
            break;
        case 7:
            // Call Exponent function
            cout << "Enter the base: ";
            cin >> x;
            cout << "Enter the exponent: ";
            cin >> y;
            cout << Exponent(x, y) << endl;
            system("pause");
            break;
        default:
            // user did not enter valid option
            cout << "Enter a valid number!\n";
            system("pause");
            break;
        }
    } while (operation != 0);
}

// Hangman Game
void Hangman()
{
    // getting random index
    srand((int)time(0));
    int random_index = rand() % (sizeof(words) / sizeof(words[0]));
    // assigning random word from array of words
    string word = words[random_index];

    // number of how many wrong guesses so far
    int wrong = 0;
    // replacing all word with dashes
    string so_far(word.size(), '-');
    // used letters
    string used = "";

    cout << "Welcome to Hangman. Good luck!\n";

    // Checking if game finish
    while (wrong < MAX_WRONG && so_far != word)
    {
        // display how many wrong guesses the player still has
        cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
        // display the letters that have been used so far
        cout << "\nYou've used the following letters:\n"
             << used << endl;
        // display how the word has become so far
        cout << "\nSo far, the word is:\n"
             << so_far << endl;

        // get guess from user and convert it to uppercase
        char guess;
        cout << "\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess);

        // check wether the guess has already been used or not
        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        // add guess to used letters
        used += guess;

        // check if guess is in the word
        if (word.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";

            // put the guessed letter in the right place
            for (int i = 0; i < word.length(); ++i)
            {
                if (word[i] == guess)
                {
                    so_far[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrong;
        }
    }

    // game ends in a loss
    if (wrong == MAX_WRONG)
    {
        cout << "\nYou've been hanged!";
    }
    // game ends with a win
    else
    {
        cout << "\nYou guessed it!";
    }

    // display what the word was
    cout << "\nThe word was " << word << endl;
}

// board for TicTacToe
void board()
{

    cout << "\n\n\t\t\t\t\t\t\tTic Tac Toe\n\n";

    cout << "\t\t\t\t\t\tPlayer 1 (X)  -  Player 2 (O)" << endl
         << endl;
    cout << endl;

    cout << "\t\t\t\t\t\t _____________________________" << endl;
    cout << "\t\t\t\t\t\t|     |     |     |     |     |     " << endl;
    cout << "\t\t\t\t\t\t|  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  |  " << square[4] << "  |  " << square[5] << "  |" << endl;

    cout << "\t\t\t\t\t\t|_____|_____|_____|_____|_____|" << endl;
    cout << "\t\t\t\t\t\t|     |     |     |     |     |" << endl;

    cout << "\t\t\t\t\t\t|  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  |  " << square[10] << "  |" << endl;

    cout << "\t\t\t\t\t\t|_____|_____|_____|_____|_____|" << endl;
    cout << "\t\t\t\t\t\t|     |     |     |     |     |" << endl;

    cout << "\t\t\t\t\t\t|  " << square[11] << "  |  " << square[12] << "  |  " << square[13] << "  |  " << square[14] << "  |  " << square[15] << "  |" << endl;

    cout << "\t\t\t\t\t\t|_____|_____|_____|_____|_____|" << endl;
    cout << "\t\t\t\t\t\t|     |     |     |     |     |" << endl;

    cout << "\t\t\t\t\t\t|  " << square[16] << "  |  " << square[17] << "  |  " << square[18] << "  |  " << square[19] << "  |  " << square[20] << "  |" << endl;

    cout << "\t\t\t\t\t\t|_____|_____|_____|_____|_____|" << endl;
    cout << "\t\t\t\t\t\t|     |     |     |     |     |" << endl;

    cout << "\t\t\t\t\t\t|  " << square[21] << "  |  " << square[22] << "  |  " << square[23] << "  |  " << square[24] << "  |  " << square[25] << "  |" << endl;

    cout << "\t\t\t\t\t\t|_____|_____|_____|_____|_____|" << endl;
}

/*********************************************
    FUNCTION TO RETURN GAME STATUS
    1 GAME IS OVER WITH RESULT (WHO WON)
   -1 GAME IS STILL IN PROGRESS
    O GAME IS OVER AND NO RESULT (NO ONE WON)
**********************************************/

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3] && square[3] == square[4])
        return 1;

    else if (square[2] == square[3] && square[3] == square[4] && square[4] == square[5])
        return 1;

    else if (square[6] == square[7] && square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9] && square[9] == square[10])
        return 1;

    else if (square[11] == square[12] && square[12] == square[13] && square[13] == square[14])
        return 1;

    else if (square[12] == square[13] && square[13] == square[14] && square[14] == square[15])
        return 1;

    else if (square[16] == square[17] && square[17] == square[18] && square[18] == square[19])
        return 1;

    else if (square[17] == square[18] && square[18] == square[19] && square[19] == square[20])
        return 1;

    else if (square[21] == square[22] && square[22] == square[23] && square[23] == square[24])
        return 1;

    else if (square[22] == square[23] && square[23] == square[24] && square[24] == square[25])
        return 1;

    else if (square[1] == square[6] && square[6] == square[11] && square[11] == square[16])
        return 1;

    else if (square[6] == square[11] && square[11] == square[16] && square[16] == square[21])
        return 1;

    else if (square[2] == square[7] && square[7] == square[12] && square[12] == square[17])
        return 1;

    else if (square[7] == square[12] && square[12] == square[17] && square[17] == square[22])
        return 1;

    else if (square[3] == square[8] && square[8] == square[13] && square[13] == square[18])
        return 1;

    else if (square[8] == square[13] && square[13] == square[18] && square[18] == square[23])
        return 1;

    else if (square[4] == square[9] && square[9] == square[14] && square[14] == square[19])
        return 1;

    else if (square[9] == square[14] && square[14] == square[19] && square[19] == square[24])
        return 1;

    else if (square[5] == square[10] && square[10] == square[15] && square[15] == square[20])
        return 1;

    else if (square[10] == square[15] && square[15] == square[20] && square[20] == square[25])
        return 1;

    else if (square[2] == square[8] && square[8] == square[14] && square[14] == square[20])
        return 1;

    else if (square[1] == square[7] && square[7] == square[13] && square[13] == square[19])
        return 1;

    else if (square[7] == square[13] && square[13] == square[19] && square[19] == square[25])
        return 1;

    else if (square[6] == square[12] && square[12] == square[18] && square[18] == square[24])
        return 1;

    else if (square[16] == square[12] && square[12] == square[8] && square[8] == square[4])
        return 1;

    else if (square[17] == square[13] && square[13] == square[9] && square[9] == square[5])
        return 1;

    else if (square[21] == square[17] && square[17] == square[13] && square[13] == square[9])
        return 1;

    else if (square[22] == square[18] && square[18] == square[14] && square[14] == square[10])
        return 1;

    // draw condition
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9' && square[10] != 'a' && square[11] != 'b' && square[12] != 'c' && square[13] != 'd' && square[14] != 'e' && square[15] != 'f' && square[16] != 'g' && square[17] != 'h' && square[18] != 'i' && square[19] != 'j' && square[20] != 'k' && square[21] != 'l' && square[22] != 'm' && square[23] != 'n' && square[24] != 'o' && square[25] != 'p')

        return 0;
    else
        return -1;
}

// game implementation
void TicTacToe()
{
    int player = 1, i;
    char choice, mark;
    do
    {
        // display board
        board();
        // To check player(similar to an if loop)
        player = (player % 2) ? 1 : 2;

        cout << "\t\t\t\t\t\tPlayer " << player << ", enter your choice:  ";
        // get choice of user where he wants to place his X/O
        cin >> choice;

        // To check mark
        mark = (player == 1) ? 'X' : 'O';

        // mark the variables in the right position with X/O
        if (choice == '1' && square[1] == '1')
            square[1] = mark;

        else if (choice == '2' && square[2] == '2')
            square[2] = mark;

        else if (choice == '3' && square[3] == '3')
            square[3] = mark;

        else if (choice == '4' && square[4] == '4')
            square[4] = mark;

        else if (choice == '5' && square[5] == '5')
            square[5] = mark;

        else if (choice == '6' && square[6] == '6')
            square[6] = mark;

        else if (choice == '7' && square[7] == '7')
            square[7] = mark;

        else if (choice == '8' && square[8] == '8')
            square[8] = mark;

        else if (choice == '9' && square[9] == '9')
            square[9] = mark;

        else if (choice == 'a' && square[10] == 'a')
            square[10] = mark;

        else if (choice == 'b' && square[11] == 'b')
            square[11] = mark;

        else if (choice == 'c' && square[12] == 'c')
            square[12] = mark;

        else if (choice == 'd' && square[13] == 'd')
            square[13] = mark;

        else if (choice == 'e' && square[14] == 'e')
            square[14] = mark;

        else if (choice == 'f' && square[15] == 'f')
            square[15] = mark;

        else if (choice == 'g' && square[16] == 'g')
            square[16] = mark;

        else if (choice == 'h' && square[17] == 'h')
            square[17] = mark;

        else if (choice == 'i' && square[18] == 'i')
            square[18] = mark;

        else if (choice == 'j' && square[19] == 'j')
            square[19] = mark;

        else if (choice == 'k' && square[20] == 'k')
            square[20] = mark;

        else if (choice == 'l' && square[21] == 'l')
            square[21] = mark;

        else if (choice == 'm' && square[22] == 'm')
            square[22] = mark;

        else if (choice == 'n' && square[23] == 'n')
            square[23] = mark;

        else if (choice == 'o' && square[24] == 'o')
            square[24] = mark;

        else if (choice == 'p' && square[25] == 'p')
            square[25] = mark;

        else
        {
            cout << "\t\t\t\t\t\tInvalid move ";

            player--;
            // To clear the buffer
            cin.ignore();
            /*By using cin.get(), you get only one of those characters, and it is treated as a char.
            Sometimes, the command prompt will close as soon as the program finishes,
            meaning you can't see the output. Putting cin.get() forces the program to wait for the user to enter a key before it can close,
            and you can see the output of your program*/
            cin.get();
        }
        // check if player won
        i = checkwin();

        // change player
        player++;
    } while (i == -1);
    // display updated board
    board();
    // display winner or draw
    if (i == 1)

        cout << "\t\t\t\t\t\t==>\aPlayer " << --player << " win \n";
    else
        cout << "\t\t\t\t\t\t==>\aGame draw\n";
    // reset all variables in the board to restart normally
    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
    square[10] = 'a';
    square[11] = 'b';
    square[12] = 'c';
    square[13] = 'd';
    square[14] = 'e';
    square[15] = 'f';
    square[16] = 'g';
    square[17] = 'h';
    square[18] = 'i';
    square[19] = 'j';
    square[20] = 'k';
    square[21] = 'l';
    square[22] = 'm';
    square[23] = 'n';
    square[24] = 'o';
    square[25] = 'p';
}

// Main function
int main()
{
    int choice;
    // display menu of apps until the user enter the exit choice
    do
    {
        cout << "Enter the number of the app you want to enter:\n1: Calculator\n2: TicTacToe\n3: Car Rental\n4: HangMan\n0: Exit\nYour Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Calculator();
            system("pause");
            break;
        case 2:
            TicTacToe();
            system("pause");
            break;
        case 3:
            Car_Rental();
            system("pause");
            break;
        case 4:
            Hangman();
            system("pause");
            break;
        case 0:
            break;

        default:
            cout << "Enter a valid number!\n";
            system("pause");
            break;
        }
    } while (choice != 0);
    // exit program
    cout << "Exiting Program...\n";
    return 0;
}
