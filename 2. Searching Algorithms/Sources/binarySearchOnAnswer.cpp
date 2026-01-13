long long binarySearch(long long low, long long high) {
    while (low < high) {
        long long mid = low + (high - low) / 2;
        if (condition(mid)) {
            // mid е валиден, опитваме по-малко
            high = mid;
        } else {
            // mid е твърде малко, опитваме по-голямо
            low = mid + 1;
        }
    }
    // low == high → най-малката валидна стойност
    return low;
}
