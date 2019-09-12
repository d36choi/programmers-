#include <string>
#include <vector>
using namespace std;

int solution(string name) {
	int answer;
	int dis1 = 0, dis2 = 0;
	int tmp = 0;
		if (name[i] != 'A') {

			dis1 += (i - tmp);
			tmp = i;
		}
	}
	tmp = name.size();
	for (int i = name.size() - 1; i > 0; i--) {
		if (name[i] != 'A') {
			dis2 += (tmp - i);
			tmp = i;
		}
	}
	answer = (dis1 <= dis2 ? dis1 : dis2);
	for (int i = 0; i < name.size(); i++) {
		if (name[i] != 'A') {
			answer += name[i] - 'A' <= 'Z' - name[i] ? name[i] - 'A' : 'Z' - name[i] + 1;
		}
	}
    return answer;
}