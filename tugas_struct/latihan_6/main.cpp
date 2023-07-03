#include <iostream>

using namespace std;


enum  planet{Mercury=1,Venus,Earth,Mars,Jupiter,Saturn,Uranus,Neptune};
int main()
{
    planet first,second,third,fourth;
    planet before_belt[4] = { Mercury, Venus, Earth,Mars  };
    planet after_belt[4] = { Jupiter, Saturn, Uranus, Neptune };
    planet fifth,sixth,seventh,eighth;
    first   = Mercury;
    second  = Venus;
    third   = Earth;
    fourth  = Mars;
    fifth   = Jupiter;
    sixth   = Saturn;
    seventh = Uranus;
    eighth  = Neptune;


    cout << first << " mercury"<< endl;
    cout << second << " venus" << endl;
    cout << third <<  " earth" <<endl;
    cout << fourth << " mars"  << endl;
     for (int i = 0; i < 4; i++) {
        cout << before_belt[i] << " ";
    }
    cout << endl;
    cout <<" Mercury, Venus, Earth, Mars "<< endl;
    for (int i = 0; i < 4; i++) {
        cout << after_belt[i] << " ";
    }
    cout << endl;
    cout <<" Jupiter, Saturn, Uranus, Neptune "<< endl;
    cout << fifth << " Jupiter" << endl;
    cout << sixth << " Saturn" <<endl;
    cout << seventh << " Uranus" << endl;
    cout << eighth << " Neptune" <<  endl;

    return 0;
}
