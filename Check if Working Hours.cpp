#include <iostream>
using namespace std;
int main() {
    int hour;
    cin>>hour;
    if(hour<=18&&hour>=9)
        cout<<"working";
    else
        cout<<"leisure";

    return 0;
}
