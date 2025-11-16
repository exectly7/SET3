class ArrayGenerator {
    const static int size = 100000;
    const static int max = 10000;
    const static int swaps = 1000;
public:
    std::vector<int> static RandomCase() {
        std::vector<int> arr(size, 0);
        for (int i = 0; i < size; ++i) {
            arr[i] = std::rand() % max;
        }
        return arr;
    }

    std::vector<int> static BadCase() {
        std::vector<int> arr(size, 0);
        for (int i = 0; i < size; ++i) {
            arr[i] = std::rand() % max;
        }
        std::sort(arr.begin(), arr.end());
        std::reverse(arr.begin(), arr.end());
        return arr;
    }

    std::vector<int> static GoodCase() {
        std::vector<int> arr(size, 0);
        for (int i = 0; i < size; ++i) {
            arr[i] = std::rand() % max;
        }
        std::sort(arr.begin(), arr.end());
        for (int i = 0; i < swaps; ++i) {
            std::swap(arr[std::rand() % size], arr[std::rand() % size]);
        }
        return arr;
    }
};