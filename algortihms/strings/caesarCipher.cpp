#include <iostream>
using namespace std;
 
string encrypt(string text, int s)
{
    string result = "";
 
   for (int i=0;i<text.length();i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);

        else if(islower(text[i]))
            result += char(int(text[i]+s-97)%26 +97);
        else
        {
            result+=text[i];
        }
    }
    return result;
}

int main()
{
    string str;
    int n;
    cin >> n;
    cin >> str;
    cin >> n;
    cout << encrypt(str, n) << endl;
    return 0;
}
