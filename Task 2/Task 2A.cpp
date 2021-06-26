#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, i, check, flag;
    vector <int> count;
    char c;

    cin >> T;
    cin.get();

    for (i = 0; i < T; i++)
    {
        check = 0;
        flag = 0;
        count.push_back(0);

        while (cin.get(c))
        {
            if (c == '<')
            {
                check++;
                if (check == 0)
                    flag = 1;
            }
            
            else if (c == '>')
            {
                check--;
                if (check >= 0 && flag == 0)
                    count[i] += 2;
            }
            
            else if (c == '\n')
                break;
        }

        if (check > 0)
            count[i] = 0;
    }

    for (i = 0; i < T; i++)
        cout << count[i] << endl;

    return 0;
}
