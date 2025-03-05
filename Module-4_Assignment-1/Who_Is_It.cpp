#include <bits/stdc++.h>
using namespace std;
int main()
{
    int f;
    cin >> f;

    for (int t = 0; t < f; t++)
    {
        int bi = -1;
        string bn, bs;
        int bm = -1;

        for (int i = 0; i < 3; i++)
        {
            int id, marks;
            string name, section;
            cin >> id >> name >> section >> marks;

            if (marks > bm || (marks == bm && id < bi))
            {
                bi = id;
                bn = name;
                bs = section;
                bm = marks;
            }
        }

        cout << bi << " " << bn << " " << bs << " " << bm << endl;
    }
    return 0;
}