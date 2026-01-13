    // --- Създаване на вектор ---
    std::vector<int> vect;         // празен вектор
    std::vector<int> vect = { 1 }; // вектор с един елемент 1
    std::vector<int> vect(10);     // вектор с дължина 10, всички елементи = 0
    std::vector<int> vect(10, 2);  // вектор с дължина 10, всички елементи = 2

    // --- Размер ---
    size_t size = vect.size();     // връща дължината на вектора (size_t)

    // --- Добавяне/премахване на елементи ---
    vect.push_back(1); // добавя елемент 1 накрая на вектора
    vect.pop_back();   // премахва последния елемент (без да го връща)

    // --- Достъп до елементи ---
    int first = vect.front(); // първи елемент
    int last  = vect.back();  // последен елемент
    int x     = vect[0];      // елемент на индекс 0
    int y     = vect.at(0);   // същото като [], но проверява граници (throws exception ако е извън)

    // --- Итератори ---
    auto it_begin = vect.begin(); // итератор към първия елемент
    auto it_end   = vect.end();   // итератор към края (една позиция след последния)
    auto it_rbegin = vect.rbegin(); // обратен итератор към последния елемент
    auto it_rend   = vect.rend();   // обратен итератор към началото

    // --- Сортиране ---
    std::sort(vect.begin(), vect.end()); // сортира в нарастващ ред (operator<)
    std::sort(vect.begin(), vect.end(), std::greater<int>()); // сортира в низходящ ред

    // --- Други полезни функции ---
    vect.clear();        // изтрива всички елементи
    bool empty = vect.empty(); // true ако е празен
