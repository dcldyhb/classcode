#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 递归函数：用来计算从位置 (x, y) 到达底部的最大路径和
int solution(int x, int y, const vector<vector<int>>& triangle, vector<vector<int>>& dp) {
    // 如果 x 越界，返回 0
    if (x == triangle.size()) return 0;

    // 如果当前位置的结果已经计算过，直接返回
    if (dp[x][y] != -1) return dp[x][y];

    // 递归计算当前点的最大路径和
    dp[x][y] = triangle[x][y] + max(solution(x + 1, y, triangle, dp), solution(x + 1, y + 1, triangle, dp));
    return dp[x][y];
}

int main() {
    int R;
    cin >> R;

    // 输入三角形数据
    vector<vector<int>> triangle(R);
    for (int i = 0; i < R; i++) {
        triangle[i].resize(i + 1);  // 每行有 i + 1 个数字
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }

    // 创建一个 dp 数组来存储计算过的最大路径和
    vector<vector<int>> dp(R, vector<int>(R, -1));

    // 从顶端开始计算最大路径和
    int ans = solution(0, 0, triangle, dp);

    cout << ans << endl;

    return 0;
}
