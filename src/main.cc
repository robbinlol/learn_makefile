#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <assert.h>
#include <algorithm>
#include <vector>
#include "spdlog/spdlog.h"
#include "c.h"
using namespace std;

// int main() {
//     spdlog::error("this is error");
//     int value = 10;
//     int *p = &value;
//     decltype(*p)x = value;
//     printf("value is %d, value address is %p\n", value, value);
//     printf("x is %d, x address is %p\n", x, x);
//     x += 1;
//     printf("value is %d, value address is %p\n", value, value);

//     // vector<int> vs = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     string s = "ABCDEFG";
//     c_print_string(s);

    // int &a = value;
    // a = 5;
    // decltype(a + 0)b = value;
    // b = 10;
    // std::cout << value << std::endl;
// }

// const int maxn = 100010;
// int n, k;
// int a[maxn];
// int presum[maxn];
// int ans;

// void func() {
//     for (int i = n; i > k; i--) {
//         ans = max(ans, presum[i] - presum[i - k]);
//     }
// }


// int main() {
//     scanf("%d", &n);
//     scanf("%d", &k);
//     ans = -1;
//     memset(a, 0, sizeof a);
//     memset(presum, 0, sizeof presum);
//     for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//     for (int i = 1; i <= n; i++) {
//         presum[i] = presum[i - 1] + a[i];
//     }
//     func();
//     printf("%d", ans);
//     return 0;
// }


// const int maxn = 100010;
// int cards[maxn];
// int n;
// int ans[maxn];

// void func() {
//     // ou
//     if (n % 2 == 0) {
//         vector<int> a;
//         vector<int> b;
//         for (int i = 0; i < n; i++) {
//             if (i & 1) a.push_back(cards[i]);
//             else b.push_back(cards[i]);
//         }
//         reverse(a.begin(), a.end());
//         int i = 0;
//         for (; i < b.size(); i++) ans[i] = a[i];
//         for (i = 0; i < b.size(); i++) ans[i + a.size()] = b[i];
//     } else {

//     }
// }


// int main() {
//     scanf("%d", &n);
//     memset(ans, 0, sizeof ans);
//     memset(cards, 0, sizeof cards);
//     for (int i = 0; i < n; i++) scanf("%d", &cards[i]);
//     func();
//     for (int i = 0; i < n; i++) printf("%d", ans[i]);
// }


// const int maxn = 100010;
// int times[maxn];
// int n, t;
// int ans;

// void func() {
//     sort(times, times + n);
//     // time is enough
//     if (times[0] >= n * t) return;

//     int last = 0;
//     for (int i = 0; i < n; i++) {
//         if (times[i] == last || times[i] >= last + t) {
//             // no magic
//             last = times[i] + t;
//             // 0 ->10
//             // printf("last is %d\n", last);
//         } else {
//             ans++;
//         }
//     }
// }

// int main() {
//     ans = 0;
//     scanf("%d %d", &n, &t);
//     memset(times, 0, sizeof times);
//     for (int i = 0; i < n; i++) scanf("%d", &times[i]);
//     // for (int i = 0; i < n; i++) printf("%d", times[i]);
//     func();
//     printf("%d", ans);
// }

// void fun(int len) {
//     char *data;
//     data = (char*)malloc(len);
//     try {
//         if (len == 10) {
//             printf("data's address is %p, len is %u\n", data, strlen(data));
//             free(data);
//             data = nullptr;
//         } else {
//             throw len;
//         }
//     } catch (int exception) {
//         printf("data len is not enougn.\n");
//     }
// }
