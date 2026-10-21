#include <iostream>
// "#include" is pre-processor, and "<iostream>" is header
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";

    return 0;
}