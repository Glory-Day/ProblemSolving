#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = my_string.substr(0, n);
    return answer;
}

int main()
{
    string my_string;
    cin >> my_string;

    int n;
    cin >> n;

    string answer = solution(my_string, n);

    cout << answer;

    return 0;
}