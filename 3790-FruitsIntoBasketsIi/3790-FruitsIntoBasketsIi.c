// Last updated: 18/2/2026, 2:27:00 pm
int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int Count = 0;
    for (int i = 0; i < fruitsSize; i++) {
        for (int j = 0; j < fruitsSize; j++) {
            if (fruits[i] <= baskets[j]) {
                baskets[j] = 0;
                Count++;
                break;
            }
        }
    }
    return fruitsSize - Count;
}