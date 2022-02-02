#include <iostream>

using namespace std;

int main()
{
    int a[100][100],m,n,i,j;
    cin>>m>>n;
    for(i=1 ; i<=m ; i++)
        for(j=1 ; j<=n ; j++)
        a[i][j]=(i*j)%10;
    for(i=1 ; i<=m ; i++){
        for(j=1 ; j<=n ; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
