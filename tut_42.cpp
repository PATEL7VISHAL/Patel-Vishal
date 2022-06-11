    // My Name : Patel Vishal

// Q1-> ans. = multiple inheritance.
// Q2-> ans. = Visiblity mod is public and variables are protected.
// 
//

#include <iostream>
#include <cmath>

using namespace std;

class simpalCalc{
    protected:
        float number1;
        float number2;

    public:
        void set_simpal_Number(int num1,int num2){
            number1 = num1;
            number2 = num2;
        }

        void add()
        {
            cout << "\n--- Addintion ---\n"
                 << number1 << " + " << number2 << " = " << number1 + number2 << endl;
        }
        void sub()
        {
            cout << "\n--- Subtraction ---\n"
                 << number1 << " - " << number2 << " = " << number1 - number2 << endl;
        }
        void mul()
        {
            cout << "\n--- Multiplication ---\n"
                 << number1 << " * " << number2 << " = " << number1 * number2 << endl;
        }
        void div()
        {
            cout << "\n--- Division ---\n"
                 << float(number1) << " / " << float(number2) << " = " << number1 / number2 << endl;
        }
};

class scientificCalc{
    protected:
        float x;
        float y;

    public:
        void set_sicence_Number(float n1,float n2){
            x = n1;
            y = n2;
        }

        void power(){
            cout << "The power of " << int(x) << " on " << int(y) << " : " << int(pow(x, y)) << endl;
        }
        void sinx(){
            cout << "The value of sin (" << x << ")" <<" : " << sin(x) << endl;
        }
        void roundx(){
            cout << "The value of round (" << x << ")" <<" : " << round(x) << endl;
        }
        void sroot(){
            cout << "The square root of (" << int(x) << ")" <<" : " << sqrt(x) << endl;
        }
};

class calculator : public simpalCalc, public scientificCalc{
    protected:
        int Operation;
    
    public:
        void setO(int o){
            Operation = o;
        }

        void simpal()
        {
            if (Operation == 1)
            {
                add();
            }
            else if (Operation == 2)
            {
                sub();
            }
            else if (Operation == 3)
            {
                mul();
            }
            else
            {
                div();
            }
        }

        void scientific()
        {
            if (Operation == 1)
            {
                sroot();
            }
            else if (Operation == 2)
            {
                roundx();
            }
            else if (Operation == 3)
            {
                sinx();
            }
            else
            {
                power();
            }
        }
};

int main()
{
    calculator calc;

    int type, operation, n1, n2;
    float x, y =1;
    char Uin = 'y';

    while (Uin == 'y')
    {
        cout << "\nEnter the type of claculator : \n1. Simpal calculator\n2. Scientific calculator\nans(in 1 or 2) : ";
        cin >> type;

        while (true)
        {
            if (type == 1 or type == 2)
            {
                break;
            }

            cout << "In valid input !" << endl;
            cin >> type;
        };

        if (type == 1)
        {
            cout << "\nEnter the first value : ";
            cin >> n1;
            cout << "Enter the second value : ";
            cin >> n2;
            cout << "\nEnter the Operatin You want\n1. additon\n2. subtraction\n3. Multiplaction\n4. Division\n= ";

            cin >> operation;

            while (true)
            {
                if (operation > 0 && operation < 5)
                {
                    break;
                }

                cout << "invalid input\nRe-enter the operation : ";
                cin >> operation;
            };

            calc.set_simpal_Number(n1,n2);
            calc.setO(operation);
            calc.simpal();
        }

        else{
            cout << "\nEnter The operation :\n1. Square-root\n2. Round\n3. sin(x)\n4. Power\n= ";

            cin >> operation;

            while (true)
            {
                if (operation > 0 && operation < 5)
                {
                    break;
                }

                cout << "invalid input\nRe-enter the operation : ";
                cin >> operation;
            };

            cout << "\nEnter the value : ";
            cin >> x;

            if (operation == 4)
            {
                cout << "Enter the power : ";
                cin >> y;
            }

            calc.set_sicence_Number(x,y);
            calc.setO(operation);
            calc.scientific();
            
        }
        cout << "\nDo you want to calculatr again ? : ";
        cin >> Uin;
    };
    return 0;
}

// Bhai Please reply about my codding for impovement.
// please reply....
