#include <iostream>
#include <cstring>

using namespace std;

bool P(string S)
{
    int len = S.length();
    for(int i = 0; i < len/2; ++i)
    {
        if(S[i] != S[len-i-1])
        {
         return false;
        }
    }
         return true;
}

int main()
{
    string C;  
    cin >> C;
if(P(C))
    {
     cout << "Polindrom";
    }
    else
    {
     cout << "Not polindrom";
}
}
  

