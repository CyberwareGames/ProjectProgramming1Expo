#include <iostream>
#include <chrono>
#include <cmath>

using namespace std::chrono;
using namespace std;

char square[26] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

double Addition(double x, double y)
{
    return x + y;
}

double Subtraction(double x, double y)
{
    return x - y;
}

double Multiplication(double x, double y)
{
    return x * y;
}

double Division(double x, double y)
{
    if (y == 0)
    {
        cout << "Syntax Error" << endl;
        system("pause");
        return -1;
    }
    else
        return x / y;
}

double Percentage(double x, double y)
{
    return (x * y) / 100;
}

double Square_root(double x)
{
    if (x < 0)
    {
        cout << "Math Error";
        system("pause");
        return -1;
    }
    else
        return sqrt(x);
}

double Exponent(double x, double y)
{
    return pow(x, y);
}

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
            break;
        case 1:
            cout << "Enter two numbers you want to add: ";
            cin >> x >> y;
            cout << Addition(x, y) << endl;
            system("pause");
            break;
        case 2:
            int x, y;
            cout << "Enter two numbers you want to subtract: ";
            cin >> x >> y;
            cout << Subtraction(x, y) << endl;
            system("pause");
            break;
        case 3:
            cout << "Enter two numbers you want to multiply: ";
            cin >> x >> y;
            cout << Multiplication(x, y) << endl;
            system("pause");
            break;
        case 4:
            cout << "Enter two numbers you want to divide: ";
            cin >> x >> y;
            if (Division(x, y) == -1)
                break;
            else
                cout << Division(x, y) << endl;
            system("pause");
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> x;
            cout << "Enter what percentage you want to calculate: ";
            cin >> y;
            cout << Percentage(x, y) << endl;
            system("pause");
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> x;
            cout << Square_root(x) << endl;
            system("pause");
            break;
        case 7:
            cout << "Enter the base: ";
            cin >> x;
            cout << "Enter the exponent: ";
            cin >> y;
            cout << Exponent(x, y) << endl;
            system("pause");
            break;
        default:
            cout << "Enter a valid number!\n";
            system("pause");
            break;
        }
    } while (operation != 0);
}

void Hangman()
{
}

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

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9' && square[10] != 'a' && square[11] != 'b' && square[12] != 'c' && square[13] != 'd' && square[14] != 'e' && square[15] != 'f' && square[16] != 'g' && square[17] != 'h' && square[18] != 'i' && square[19] != 'j' && square[20] != 'k' && square[21] != 'l' && square[22] != 'm' && square[23] != 'n' && square[24] != 'o' && square[25] != 'p')

        return 0;
    else
        return -1;
}

void TicTacToe()
{

    int player = 1, i;
    char choice, mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2; // To check player(similar to an if loop)

        cout << "\t\t\t\t\t\tPlayer " << player << ", enter your choice:  ";
        cin >> choice;

        mark = (player == 1) ? 'X' : 'O'; // To check mark

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
            cin.ignore(); // To clear the buffer
            cin.get();    /*By using cin.get(), you get only one of those characters, and it is treated as a char.
                            Sometimes, the command prompt will close as soon as the program finishes,
                            meaning you can't see the output. Putting cin.get() forces the program to wait for the user to enter a key before it can close,
                            and you can see the output of your program*/
        }
        i = checkwin();

        player++;
    } while (i == -1);
    board();
    if (i == 1)

        cout << "\t\t\t\t\t\t==>\aPlayer " << --player << " win \n";
    else
        cout << "\t\t\t\t\t\t==>\aGame draw\n";
}

void Stop_Watch()
{
    auto start_time = steady_clock::now();
    auto end_time = steady_clock::now();
    auto paused_time = duration<double>::zero();
    bool paused = false;
    cout << "Enter \"start\" to start the timer and \"stop\" to stop the timer:" << endl;
    while (true)
    {
        // Read user input
        string input;
        cin >> input;

        if (input == "start")
        {
            // Start the timer
            if (paused)
            {
                // If the timer was paused, add the paused time to the start time
                start_time += duration_cast<steady_clock::duration>(paused_time);
                paused_time = duration<double>::zero();
                paused = false;
            }
            else
            {
                start_time = steady_clock::now();
            }
        }
        else if (input == "stop")
        {
            // Stop the timer
            end_time = steady_clock::now();
            paused = false;
            break;
        }
        else if (input == "pause")
        {
            // Pause the timer
            if (!paused)
            {
                paused_time += duration_cast<duration<double>>(steady_clock::now() - start_time);
                paused = true;
            }
        }
        else if (input == "resume")
        {
            // Resume the timer
            if (paused)
            {
                start_time = steady_clock::now();
                paused = false;
            }
        }
    }

    // Calculate the elapsed time and print it
    auto elapsed_time = duration_cast<duration<double>>(end_time - start_time - paused_time);
    cout << "Elapsed time: " << elapsed_time.count() << " seconds" << endl;
}

int main()
{
    int app;
    do
    {
        cout << "Enter the number of the app you want to enter:\n1: Calculator\n2: TicTacToe\n3: Stop Watch\n0: Exit\nYour Choice: ";
        cin >> app;
        switch (app)
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
            Stop_Watch();
            system("pause");
            break;
        case 0:
            break;

        default:
            cout << "Enter a valid number!\n";
            system("pause");
            break;
        }
    } while (app != 0);
    cout << "Exiting Program...\n";
    return 0;
}