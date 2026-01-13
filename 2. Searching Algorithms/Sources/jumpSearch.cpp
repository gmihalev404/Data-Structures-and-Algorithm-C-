int jumpSearch(const vector<int>& arr, int x) {
    int len = arr.size();
    int jump = sqrt(len); // размер на стъпка(скок)
    int start = 0, end = start + jump;

    // намираме интервала (start, end) където се намира търсеният елемент
    while (end < len && arr[end] <= x) {
        start = end; // на всяка стъпка местим началото и
        end += jump; // края на интервала с размера на стъпката(скока)

        if(end > len - 1) // стигнали сме края на масива
            end = len;
    }

    // търсим елемента линейно в интервала
    for (int i = start; i < end; i++) {
        if (arr[i] == x)
            return i;  
    }
    return -1; // елементът не се съдържа в масива
}
