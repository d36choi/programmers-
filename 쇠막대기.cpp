#include <string>
#include <vector>
#include <stack>
using namespace std;
int solution(string arrangement) {
	int answer = 0;
	int cnt = 0;
	stack <char> stk;
	for (int i = 0; i < arrangement.size(); i++) {
		char d = arrangement[i];
		if (d == '(')
		{
			stk.push(d);
		}
		else if (d == ')')
		{
			if (stk.top() == 'L')
			{
				while (stk.top() != '(')
				{
					stk.pop();
					cnt++;

				}
                stk.pop();
				answer += (1 + cnt);
				for (int j = 0; j < cnt; j++)
				{
					stk.push('L');
				}
			}
			else if (stk.top() == '(')
			{
				stk.pop();
				stk.push('L');
			}
		}
		cnt = 0;
	}
	return answer;
}
