#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int a;
    scanf ("%d",&a);
    int b=a%10;
    int c=a/10%10;
    int d=a/100;
    int x=b+c+d;
    int y=b*c*d;
    printf ("%d %d \n",x , y );
    return 0;
}
