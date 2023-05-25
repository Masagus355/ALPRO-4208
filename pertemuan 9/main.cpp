#include <iostream>

using namespace std;

int recursive_operation(string operation, int num1, int num2) {
    if (operation == "add") {
        if (num2==0){
            return num1;
        }else{
            return 1+recursive_operation("add",num1,num2-1);
        }
    } else if (operation == "subtract") {
        if (num2==0){
            return num1;
        }else{
            return recursive_operation("subtract",num1-1,num2-1);
        }
    } else if (operation == "multiply") {
         if (num2 == 0) {
            return 0;
        } else if (num2 < 0) {
            return -recursive_operation("multiply", num1, -num2);
        } else {
            return num1 + recursive_operation("multiply", num1, num2 - 1);
        }
    } else if (operation == "divide") {
        if (num2 == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        } else if (num1 < num2) {
            return 0;
        } else {
            return 1 + recursive_operation("divide", num1 - num2, num2);
        }
    } else if (operation == "power") {
       if (num2 == 0) {
            return 1;
        } else {
            return num1 * recursive_operation("power", num1, num2 - 1);
        }
    } else {
        cout << "Invalid operation" << endl;
        return -1;
    }
}
int main() {
     cout<<" ____________________________"<<endl;
    cout<<"|  program latihan Recursive |"<<endl;
    cout<<"|____________________________|"<<endl;

        string name,nim,kel;
         name="Kiagus Riyasqie Resadu";
         nim="A11.2022.14355";
         kel="A11.4208";
        cout << "Nama MHS = "<< name << endl;
        cout << "NIM  MHS = "<< nim  << endl;
        cout << "Kelompok = "<< kel  << endl;

    int num1,num2,opsi;
    char ulang;
    do
    {
    cout << "--------- List of Operations ---------\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. Power of number " << endl;
        cout << "Pick an Operation : ";
        cin >> opsi;
    //Pertambahan
       if (opsi==1){
             cout <<"---- Addition ----"<<endl;
            cout << "Input Number 1 : ";cin >> num1;cout <<""<< endl;
            cout << "Input Number 2 : ";cin >> num2;cout <<""<< endl;
            cout <<" the result of "<<num1<<" + "<<num2<< " is : ";
    int result = recursive_operation("add", num1, num2);
    cout << result << endl;
    }
    //Pengurangan
    else if(opsi==2){
        cout <<"---- Substraction ----"<<endl;
            cout << "Input Number 1 : ";cin >> num1;cout <<""<< endl;
            cout << "Input Number 2 : ";cin >> num2;cout <<""<< endl;
            cout <<" the result of "<<num1<<" - "<<num2<< " is : ";
    int result = recursive_operation("subtract", num1, num2);
    cout << result << endl;
    }
    //Perkalian
     else if(opsi==3){
            cout <<"---- Multiplication ----"<<endl;
            cout << "Input Number 1 : ";cin >> num1;cout <<""<< endl;
            cout << "Input Number 2 : ";cin >> num2;cout <<""<< endl;
            cout <<" the result of "<<num1<<" x "<<num2<< " is : ";
    int result = recursive_operation("multiply", num1, num2);
    cout << result << endl;
     }
    //Pembagian
     else if(opsi==4){
            cout <<"---- Division ----"<<endl;
            cout << "Input Number 1 : ";cin >> num1;cout <<""<< endl;
            cout << "Input Number 2 : ";cin >> num2;cout <<""<< endl;
            cout <<" the result of "<<num1<<" / "<<num2<< " is : ";
    int result = recursive_operation("divide", num1, num2);
    cout << result << endl;
      }
    //Perpangkatan
    else if(opsi==5){
    cout <<"---- Power of Numbers ----"<<endl;
            cout << "Input Number 1 : ";cin >> num1;cout <<""<< endl;
            cout << "Input Number 2 : ";cin >> num2;cout <<""<< endl;
            cout <<" the result of "<<num1<<" in the power of "<<num2<< " is : ";
    int result = recursive_operation("power", num1, num2);
    cout << result << endl;
       }
       cout << "Do you want to try another Operations? (y/t)? ";
    cin >> ulang;
    cout << endl;
    }while  (ulang!= 't');{
    cout<<"program closed"<< endl;
    }
    return 0;
}
