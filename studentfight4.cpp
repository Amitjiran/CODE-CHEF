/*Chef is a class teacher. He has n students in his class.

Chef recently conducted an exam. The scores of all the n students is given to you. His students are very competitive and will start fighting if there is more than one student who topped the exam. It is your job to figure out whether his students will start fighting or not, so that Chef can go prepared to the class.

Input
The first line of each test case contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer n, denoting the number of students.
The next line contains n space-separated integers, i-th of which will be scorei denoting the score of the i-th student.

Output
For each test case, output in a new line, "fight:(" if there is more than one topper, otherwise output "peace:)" (without quotes).
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        int count = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[n - 1] == arr[i])
                count++;
        }
        if (count > 1)
        {
            cout << "fight:(" << endl;
        }
        else
            cout << "peace:)" << endl;
    }
    return 0;
}