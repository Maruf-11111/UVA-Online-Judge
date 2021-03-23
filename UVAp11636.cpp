#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int  a,count=1;
    float x,result;
    cin>>x;
    while(x>=0)
    {

        result = log2(x);
        cout<<"Case "<<count<<": "<<ceil(result)<<endl;




        cin>>x;
        count++;


    }

    return 0;
}
