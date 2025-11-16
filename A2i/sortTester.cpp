class sortTester {
public:
    static void randomMerge() {
        std::ofstream out("random_merge.txt");
        for (int i = 500; i <= 100000; i += 100) {
            long long msec = 0;
            for (int seed = 1; seed <= 10; ++seed) {
                std::srand(seed);
                std::vector<int> arr = ArrayGenerator::RandomCase();
                arr.resize(i);

                auto start = std::chrono::high_resolution_clock::now();
                mergeSort(arr);
                auto elapsed = std::chrono::high_resolution_clock::now() - start;
                msec += std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
            }
            out << i << ' ' << msec / 10 << std::endl;
        }
    }

    static void randomSort() {
        std::ofstream out("random_merge+insertion.txt");
        for (int i = 500; i <= 100000; i += 100) {
            long long msec = 0;
            for (int seed = 1; seed <= 10; ++seed) {
                std::srand(seed);
                std::vector<int> arr = ArrayGenerator::RandomCase();
                arr.resize(i);

                auto start = std::chrono::high_resolution_clock::now();
                mergeInsertionSort(arr);
                auto elapsed = std::chrono::high_resolution_clock::now() - start;
                msec += std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
            }
            out << i << ' ' << msec / 10 << std::endl;
        }
    }

    static void goodMerge() {
        std::ofstream out("good_merge.txt");
        for (int i = 500; i <= 100000; i += 100) {
            long long msec = 0;
            for (int seed = 1; seed <= 10; ++seed) {
                std::srand(seed);
                std::vector<int> arr = ArrayGenerator::GoodCase();
                arr.resize(i);

                auto start = std::chrono::high_resolution_clock::now();
                mergeSort(arr);
                auto elapsed = std::chrono::high_resolution_clock::now() - start;
                msec += std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
            }
            out << i << ' ' << msec / 10 << std::endl;
        }
    }

    static void goodSort() {
        std::ofstream out("good_merge+insertion.txt");
        for (int i = 500; i <= 100000; i += 100) {
            long long msec = 0;
            for (int seed = 1; seed <= 10; ++seed) {
                std::srand(seed);
                std::vector<int> arr = ArrayGenerator::GoodCase();
                arr.resize(i);

                auto start = std::chrono::high_resolution_clock::now();
                mergeInsertionSort(arr);
                auto elapsed = std::chrono::high_resolution_clock::now() - start;
                msec += std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
            }
            out << i << ' ' << msec / 10 << std::endl;
        }
    }

    static void badMerge() {
        std::ofstream out("bad_merge.txt");
        for (int i = 500; i <= 100000; i += 100) {
            long long msec = 0;
            for (int seed = 1; seed <= 10; ++seed) {
                std::srand(seed);
                std::vector<int> arr = ArrayGenerator::BadCase();
                arr.resize(i);

                auto start = std::chrono::high_resolution_clock::now();
                mergeSort(arr);
                auto elapsed = std::chrono::high_resolution_clock::now() - start;
                msec += std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
            }
            out << i << ' ' << msec / 10 << std::endl;
        }
    }

    static void badSort() {
        std::ofstream out("bad_merge+insertion.txt");
        for (int i = 500; i <= 100000; i += 100) {
            long long msec = 0;
            for (int seed = 1; seed <= 10; ++seed) {
                std::srand(seed);
                std::vector<int> arr = ArrayGenerator::BadCase();
                arr.resize(i);

                auto start = std::chrono::high_resolution_clock::now();
                mergeInsertionSort(arr);
                auto elapsed = std::chrono::high_resolution_clock::now() - start;
                msec += std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
            }
            out << i << ' ' << msec / 10 << std::endl;
        }
    }
};