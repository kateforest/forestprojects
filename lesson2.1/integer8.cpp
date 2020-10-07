#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int a;
    scanf ("%d",&a);
    int b=a/10;
    int c=a%10;
    printf ("%d%d \n",c ,b );
    return 0;
}
