#include <iostream>

using namespace std;

void dividebyTwoPBV(int val) {
    val = val / 2;int *inptr = &val;
    cout << "Int Passing By Value" << endl;
    cout << "value of non pointer and pointer     : " << val << " and " << *inptr  << endl;
    cout << "addresss of non pointer   : " << &inptr  << " and " << inptr  <<  endl;
    cout << "       \n"<<endl;
}
void dividebyTwoPBR(int& val) {
    val = val / 2;int *inptr = &val;
    cout << "Int Passing By Reference" << endl;
    cout << "value of non pointer  and pointer    : " << val << " and " << *inptr << endl;
    cout << "addresss of non pointer and pointer  : " << &inptr <<  " and " << inptr << endl;
    cout << "       \n"<<endl;
}
void changevalPBV(char val) {
    char nval = 'O';val = nval;char *cnptr = &nval;
    cout << "Char Passing By Value" << endl;
    cout << "value of non pointer and pointer     : " << val <<  " and "  << *cnptr << endl;
    cout << "addresss of non pointer and pointer  : " << &cnptr  << " and "<< cnptr << endl;
    cout << "       \n"<<endl;
}
void changevalPBR(char &val) {
    char nval = 'O';val = nval;char *cnptr = &nval;
    cout << "Char Passing By Reference" << endl;
    cout << "value of non pointer and pointer     : " << val <<  " and "  << *cnptr << endl;
    cout << "addresss of non pointer and pointer  : " << &cnptr  << " and "<< cnptr << endl;
    cout << "       \n"<<endl;
}
void timestenPBV(float val){
    val = val * 10;float *fnptr = &val;
    cout << "Float Passing By Value" << endl;
    cout << "value of non pointer and pointer     : " << val << " and " <<*fnptr << endl;
    cout << "addresss of non pointer and pointer  : " << &fnptr << " and " << fnptr << endl;
    cout << "       \n"<<endl;
}
void timestenPBR(float &val){
    val = val * 10;float *fnptr = &val;
    cout << "Float Passing By Reference" << endl;
    cout << "value of non pointer and pointer     : " << val << " and " <<*fnptr << endl;
    cout << "addresss of non pointer and pointer  : " << &fnptr << " and " << fnptr << endl;
    cout << "       \n"<<endl;
}
void print(int &inumber,char &cchar,float &fnumber){
    //INT
    inumber=8;int *iptr = &inumber;
    cout << "Integer" << endl;
    cout << "value of non pointer and pointer     : " << inumber << " and " << *iptr << endl;
    cout << "addresss of non pointer and pointer   : " << &iptr  << " and " << iptr<< endl;
    cout << "       \n"<<endl;
    dividebyTwoPBV(inumber);
    dividebyTwoPBR(inumber);
    //CHAR
    cchar='G';char    *cptr  = &cchar;
    cout << "Char" << endl;
    cout << "value of non pointer and pointer     : " << cchar  << " and " << *cptr << endl;
    cout << "addresss of non pointer and pointer  : " << &cptr  << " and " << cptr << endl;
    cout << "       \n"<<endl;
    changevalPBV(cchar);
    changevalPBR(cchar);
    //FLOAT
    fnumber=2.2;float   *fptr = &fnumber;
    cout << "Float" << endl;
    cout << "value of non pointer and pointer     : " << fnumber << " and " << *fptr << endl;
    cout << "addresss of non pointer and pointer  : " << &fptr << " and " << fptr << endl;
    cout << "       \n"<<endl;
    timestenPBV(fnumber);
    timestenPBR(fnumber);
}
int main()
{
    int     A;
    char    X;
    float   E;
    print(A,X,E);
    return  0;
}
