//HACKERRANK
// Ques: Given an integer, for each digit that makes up the integer determine whether it is a divisor. 
// Count the number of divisors occurring within the integer.

#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {

    int num=n;
    int count=0;

    while(num>0)
    {
        int d=num%10;

        if(d!=0)
        {
            if(n%d==0)
            {
                count++;
            }
        }
        num=num/10;
    }

    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

