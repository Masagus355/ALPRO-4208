#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool issorted(int a[],int n){
    while (--n>1)
        if (a[n]<a[n-1])
            return false;
    return true;

}

void shuffle (int a[],int n)
{
    for(int i=0;i<n;i++)
        swap(a[i],a[rand()%n]);
}

void bogosort(int a[],int n)
{
    int step=0;
    while(!issorted(a,n)){
        shuffle(a,n);
        step++;
    }
    cout << "step:" << step << endl;
}

void printarray(int a[],int n){
    for (int i=0;i<n;i++)
        cout << a[i]<<" ";
    cout << "\n";
}
int main()
{           //0 1 2 3 4 5 6
    int a[] ={8,2,3,4,5,4};
    int n= sizeof a/sizeof a[0];
    bogosort(a,n);
    printf("sorted array :\n");
    printarray(a,n);

    return 0;
}
