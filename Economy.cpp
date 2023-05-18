#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char choice;
    do
    {
        cout << endl;
        cout << "\033[1;34m=========================================== \n";
        cout << setw(19) << "== Price Elasticity of Demand Calculator == \n";
        cout <<              "=========================================== \n\n";

        cout << setw(31) << "Choose Calculation Method\n\n";
            
        cout << "\033[1;32mA - Price Elasticity by percentage \n";
        cout << "\033[1;32mB - Price Elasticity by the point formula \n";
        cout << "\033[1;32mC - Price Elasticity by midpoint formula \n\n";

        cout << "\033[1;36mEnter your choice (a or b or c): ";

        double PCQ, PCP, F_P, F_Q, S_Q, S_P, D_P, D_Q;
        double res;

        char x;
        cin >> x;

        switch (x)
        {
        case 'a':
            cout << "\nEnter percentage change in quantity demanded: ";
            cin >> PCQ;

            cout << "Enter percentage change in price: ";
            cin >> PCP;

            res = PCQ / PCP;
            cout << "\n\033[1;33mThe Price Elasticity is: " << res << endl;
            break;

        case 'b':
            cout << "\nEnter the first price: ";
            cin >> F_P;

            cout << "Enter the second price: ";
            cin >> S_P;

            cout << "Enter the first quantity: ";
            cin >> F_Q;

            cout << "Enter the second quantity: ";
            cin >> S_Q;

            D_P = (S_P - F_P);
            D_Q = (S_Q - F_Q);
            res = (D_Q / D_P) * (F_P / F_Q);

            cout << "\n\033[1;33mThe Price Elasticity is: " << res << endl;
            break;

        case 'c':
            cout << "\nEnter the first price: ";
            cin >> F_P;

            cout << "Enter the second price: ";
            cin >> S_P;

            cout << "Enter the first quantity: ";
            cin >> F_Q;

            cout << "Enter the second quantity: ";
            cin >> S_Q;

            D_P = (S_P - F_P);
            D_Q = (S_Q - F_Q);
            res = (D_Q / D_P) * ((F_P + S_P) / (F_Q + S_Q));

            cout << "\n\033[1;33mThe Price Elasticity is: " << res << endl;
            break;

        default:
            cout << "\n\033[1;31mInvalid input. Please try again.\n";
            break;
        }

        cout << "\n\033[1;37mDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n\033[1;36mGoodbye!\n";
    char key;
    cin >> key;
    return 0;
}
