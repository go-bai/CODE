#include <iostream>
using namespace std;
const int maxn = 1e3 + 10;
struct Point{
  double x, y;
  string type;
  Point(){}
  Point(double x, double y, string type):x(x),y(y),type(type){}
};
int up_or_down(double x, double y, double a, double b, double c) {
  // 0 or 1
  double Ly = ((-a) - (b * x)) / c;
  return (Ly < y ? 0 : 1);
}
int main() {
  int n, m;
  cin >> n >> m;
  string type;
  double x, y;
  Point P[maxn];
  for(int i = 0; i < n; i++) {
    cin >> x >> y >> type;
    P[i] = Point(x, y, type);
  }
  double a, b, c;
  for(int i = 0; i < m; i++) {
    cin >> a >> b >> c;// a + bx + cy = 0
    int locA = 0, locB = 0;
    int flag = 0;
    for(int j = 0 ;j < n; j++) {
      if(j == 0) {
        int loc = up_or_down(P[j].x, P[j].y, a, b, c);
        locA = (P[j].type == "A" ? loc : !loc);
        locB = (P[j].type == "B" ? loc : !loc);
     } else {
       int loc = up_or_down(P[j].x, P[j].y, a, b, c);
       if(P[j].type == "A" && locA != loc) {
         flag = 1;
         break;
       }
       if(P[j].type == "B" && locB != loc) {
         flag = 1;
         break;
       }
     }
    }
    cout << (flag ? "No" : "Yes") << endl;
  }
  return 0;
}

/*
9 3
1 1 A
1 0 A
1 -1 A
2 2 B
2 3 B
0 1 A
3 1 B
1 3 B
2 0 A
0 2 -3
-3 0 2
-3 1 1
*/