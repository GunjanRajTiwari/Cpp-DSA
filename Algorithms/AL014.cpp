// Generating Parenthesis

#include <iostream>
#include <vector>

using namespace std;

void generate(vector<string>& ans, string str, int ocnt, int ccnt, int total) {
  if (ocnt + ccnt == 2 * total) {
    ans.push_back(str);
    return;
  }

  if (ocnt < total) {
    generate(ans, str + '(', ocnt + 1, ccnt, total);
  }
  if (ccnt < ocnt) {
    generate(ans, str + ')', ocnt, ccnt + 1, total);
  }
}

int main() {
  vector<string> ans;
  generate(ans, "", 0, 0, 3);
  for (auto i : ans) {
    cout << i << '\n';
  }
  return 0;
}