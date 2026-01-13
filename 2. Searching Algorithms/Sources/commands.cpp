int main() {
    // Примерен сортиран вектор
    vector<int> vect = {1, 3, 4, 4, 5, 7, 8};

    // ------------------------
    // 1. lower_bound и upper_bound
    // ------------------------
    auto lb = lower_bound(vect.begin(), vect.end(), 4); // първи >= 4
    auto ub = upper_bound(vect.begin(), vect.end(), 4); // първи > 4

    // Брой срещания на 4
    int count = ub - lb;
    cout << "Брой срещания на 4: " << count << "\n\n";

    // ------------------------
    // 2. Обхождане на диапазон [4, 7]
    // ------------------------
    int minVal = 4, maxVal = 7;
    auto in  = lower_bound(vect.begin(), vect.end(), minVal);
    auto out = upper_bound(vect.begin(), vect.end(), maxVal);
    for (auto it = in; it != out; ++it)

    // ------------------------
    // 3. Най-голям елемент <= x
    // ------------------------
    int x = 6;
    auto it = upper_bound(vect.begin(), vect.end(), x);
    if (it != vect.begin()) --it;

    // ------------------------
    // 4. Проверка за наличие на елемент
    // ------------------------
    int y = 5;
    auto it2 = lower_bound(vect.begin(), vect.end(), y);
    if (it2 != vect.end() && *it2 == y)

    // ------------------------
    // 5. Обратен ред
    // ------------------------
    vector<int> rev = {10, 8, 7, 5, 4, 3, 1};
    for (int x : rev)

    auto lb_rev = lower_bound(rev.begin(), rev.end(), 5, greater<int>());
    auto ub_rev = upper_bound(rev.begin(), rev.end(), 5, greater<int>());
    cout << "lower_bound(5) в обратен ред -> " << *lb_rev << "\n";
    cout << "upper_bound(5) в обратен ред -> " << *ub_rev << "\n";

    return 0;
}
