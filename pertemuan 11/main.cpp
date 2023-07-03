#include <iostream>

using namespace std;
//LATIHAN POINTER
int main()
{
    int     var1 = 3;           int     *pi     = &var1;
    string  var2 = "apple";     string  *ps     = &var2;
    float   var3 = 2.5;         float   *pf     = &var3;
    char    var4 = 'Oeden';     char    *pc     = &var4;
    wchar_t var5 = L'Oeden';    wchar_t *pwc    = &var5;
    bool    var6 = true;        bool    *pb     = &var6;




   cout << "address of var1 : " << &var1<< endl;
   cout << "address saved on pi " << pi << endl;
   cout << "value of pi is " << *pi << endl;
   printf("size = %d",sizeof(pi));
   cout<<" "<<endl;

   cout <<"--------------------------"<<endl;

   cout << "address of var2 : " << &var2<< endl;
   cout << "address saved on ps " << ps << endl;
   cout << "value of ps is " << *ps << endl;
   printf("size = %d",sizeof(ps));
   cout<<" "<<endl;

   cout <<"--------------------------"<<endl;

   cout << "address of var3 : " << &var3<< endl;
   cout << "address saved on pf " << pf << endl;
   cout << "value of pf is " << *pf << endl;
   printf("size = %d",sizeof(pf));
    cout<<" "<<endl;


   cout <<"--------------------------"<<endl;

   cout << "address of var4 : " << &var4<< endl;
   cout << "address saved on pc " << pc << endl;
   cout << "value of pc is " << *pc << endl;
   printf("size = %d",sizeof(pc));
    cout<<" "<<endl;


   cout <<"--------------------------"<<endl;

   cout << "address of var5 : " << &var5<< endl;
   cout << "address saved on pb " << pb << endl;
   cout << "value of pb is " << *pb << endl;
   printf("size = %d",sizeof(pb));
    cout<<" "<<endl;


   cout <<"--------------------------"<<endl;

   cout << "address of var5 : " << &var5<< endl;
   cout << "address saved on pb " << pb << endl;
   cout << "value of pb is " << *pb << endl;
   printf("size = %d",sizeof(pb));
    cout<<" "<<endl;


   cout <<"--------------------------"<<endl;

   cout << "address of var6 : " << &var6<< endl;
   cout << "address saved on pwc " << pwc << endl;
   cout << "value of pwc is " << *pwc << endl;
   printf("size = %d",sizeof(pwc));
    cout<<" "<<endl;


   cout <<"--------------------------"<<endl;

    return 0;
}
