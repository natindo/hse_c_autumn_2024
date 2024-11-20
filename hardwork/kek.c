#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// массив длины N с плавающей точкой одинарной точности (float)
// Он упорядочен по возрастанию, но сдвинут на k элементов
// 12345 -> k=2 -> 45123
// Далее подаются M чисел, нужно указать их позицию в массиве (начиная с 1) или 0, если числа нет
// Числа считаются равными, если отличаются не более, чем на eps(первый float на входе)

// ВХОД
// 1) eps
// 2) число N
// 3) n float'ов через пробел
// 4) число M
// 5) M float'ов через /n

// ОТВЕТ
// M ответов каждый на новой строке, позиция в массиве

// СЛОЖНОСТЬ
// O(MlogN) - time
// O(N) - memory

size_t binarySearch(const float* const subArray, const size_t arraySize, const float key, const float eps)
{
    size_t left = 0;
    size_t right = arraySize - 1;

    while (left <= right) {
        const size_t mid = (left + right) / 2;
        const float diff = subArray[mid] - key;
        if (fabs(diff) < eps) {
            return mid + 1; // +1 так как индексирование с 1
        }
        if (key < subArray[mid] - eps) {
            if (mid == 0)
                break;
            right = mid - 1;
        } else if (key > subArray[mid] + eps) {
            left = mid + 1;
        }
    }
    return 0;
}

int main()
{
    float eps = 0; // точность
    scanf("%f", &eps);

    size_t n = 0; // число входных данных
    scanf("%llu", &n);

    float prevValue = -FLT_MAX;
    size_t index = n; // индекс в массиве, где переход (из-за сдвига на k)
    float* arr = (float*)malloc(n * sizeof(float));

    for (size_t i = 0; i < n; ++i) {
        float input = 0;
        scanf("%f", &input);
        if (index == n && prevValue > input) {
            index = i;
        }
        prevValue = input;
        arr[i] = input;
    }

    size_t m = 0;
    scanf("%llu", &m);

    for (size_t i = 0; i < m; ++i) {
        float inputNumber = 0;
        scanf("%f", &inputNumber);

        size_t res = 0;

        if (index == n) {
            res = binarySearch(arr, n, inputNumber, eps);
        } else if (inputNumber > arr[n - 1] + eps) {
            res = binarySearch(arr, index, inputNumber, eps);
        } else {
            res = binarySearch(arr + index, n - index, inputNumber, eps);
            if (res != 0) {
                res += index;
            }
        }

        printf("%llu\n", res);
    }
    free(arr);
    return 0;
}
