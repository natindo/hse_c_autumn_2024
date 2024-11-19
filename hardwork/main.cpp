#include <stdio.h>
#include <stdlib.h>
#include <float.h>

//массив длины N с плавающей точкой одинарной точности (float)
//Он упорядочен по возрастанию, но сдвинут на k элементов
//12345 -> k=2 -> 45123
//Далее подаются M чисел, нужно указать их позицию в массиве (начиная с 1) или 0, если числа нет
//Числа считаются равными, если отличаются не более, чем на eps(первый float на входе)

//ВХОД
//1) eps
//2) число N
//3) n float'ов через пробел
//4) число M
//5) M float'ов через /n

//ОТВЕТ
//M ответов каждый на новой строке, позиция в массиве

//СЛОЖНОСТЬ
//O(MlogN) - time
//O(N) - memory

size_t binarySearch (const float* const subArray, const size_t arraySize, const float key, const float eps) {
    long long indexStartSubArray = 0;
    long long indexEndSubArray = arraySize - 1;
    while (indexStartSubArray <= indexEndSubArray) {
        long long mid = (indexStartSubArray + indexEndSubArray) / 2;
        if (key >= subArray[mid] - eps && key <= subArray[mid] + eps) {
            return mid + 1; // +1 так как индексирование с 1
        }
        if (key < subArray[mid]) {
            indexEndSubArray = mid - 1;
        } else {
            indexStartSubArray = mid + 1;
        }
    }
    return 0;
}

int main()
{
    float eps = 0; //точность
    float itNumber = -FLT_MAX; //максимальный отрицательный float    
    int flag = 0; //флаг перехода из-за циклического сдвига
    size_t n = 0; // число входных данных
    scanf("%f", &eps);
    scanf("%lu", &n);
    size_t index = n; // индекс в массиве, где переход (из-за сдвига на k)
    float *arr = (float*)malloc(n * sizeof(float));
    for (size_t i = 0; i < n; ++i) {
        float input = 0;
        scanf("%f", &input);
        if (flag == 0 && input > itNumber) {
            itNumber = input;
        } else if (flag == 0) {
            flag = 1;
            index = i;
        }
        arr[i] = input;
    }

    size_t m = 0;
    scanf("%lu", &m);
    for (size_t i = 0; i < m; ++i) {
        float inputNumber = 0;
        size_t res = 0;
        scanf("%f", &inputNumber);

        if (inputNumber > arr[index - 1]) { // число больше максимума в массиве
            res = 0;
        } else if (inputNumber < arr[n - 1] || index == n) {
            if (index == n) {
                res = binarySearch(arr, n, inputNumber, eps);
            } else {
                res = binarySearch(arr + index, n - index, inputNumber, eps); // обработка подмассива с маленькими числами
            }
        } else { // обработка подмассива с большими числами
            res = binarySearch(arr, n, inputNumber, eps);
        }

        if (res) {
            printf("%lu\n\n", res);
        } else {
            printf("0\n\n");
        }

    }
    free(arr);
    return 0;
}
