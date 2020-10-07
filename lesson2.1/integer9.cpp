#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int a;
    scanf ("%d",&a);
    int b=a/100;
    printf ("%d \n",b );
    return 0;
}
