
#include <stdio.h>
void solve() {
    int x = 2;
    printf("%d", (x << 3) + (x >> 3));
}
int main() {
    solve();
	return 0;
}