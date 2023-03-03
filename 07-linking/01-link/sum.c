int sum(int* array, int size) {
    int i;
    int sum = 0;
    for (i = 0; i < size; ++i) {
        sum += *(array + i);
    }
    return sum;
}
