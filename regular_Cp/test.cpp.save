#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

typedef std::pair<int, int> pair;

int main()
{
    std::vector<pair> v = { { 1, 2 },{ 6, 4 }, { 6, 5 },{ 6, 7 }, { 3, 4 },{1,3}, { 4, 1 } };

    std::sort(v.rbegin(), v.rend(),
            [](const pair &x, const pair &y) {
                // compare the second value
                if (x.first == y.first) {
                    return x.second < y.second;
                }

                // compare first only if the second value is equal
                return x.first < y.first;
            });

    for (const pair &p: v) {
        std::cout << '{' << p.first << ',' << p.second << '}' << std::endl;
    }


    return 0;
}
