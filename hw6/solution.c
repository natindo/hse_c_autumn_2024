#include <stdio.h>

// filter_func_t is_less_func-  функция компаратор. Возвращает не 0 если первый элемент меньше второго.

// copy_func_t copy_func - функция копирования. Копирует структуры должным образом.

// malloc_func_t malloc_func - аналог malloc из <stdlib.h>. Пользуемся также как оригинальным malloc.

typedef void* (*malloc_func_t)(unsigned long long bytes);
typedef struct {
    char name[64];
    char codec[32];
    size_t size_bytes;
    size_t duration_sec;
    size_t width;
    size_t height;
} video_file_t;
typedef int (*is_less_func_t)(const video_file_t*, const video_file_t*);
typedef void (*copy_func_t)(video_file_t* dst, const video_file_t* src);

typedef int (*filter_func_t)(const video_file_t*);
typedef void (*copy_func_t)(video_file_t* dst, const video_file_t* src);

video_file_t** sort_video_files(const video_file_t** files,
                                                 is_less_func_t is_less_func,
                                                 copy_func_t copy_func,
                                                 malloc_func_t malloc_func)
{

    size_t to_sort_structs = 0;
    const video_file_t** ptr = files;

    while (*ptr != 0) {
        to_sort_structs++;
        ptr++;
    }

    if (to_sort_structs == 0)
        return NULL;

    const size_t size = (to_sort_structs + 1) * sizeof(video_file_t*);
    video_file_t** output_structs = (video_file_t**)malloc_func(size);
    video_file_t* temp = (video_file_t*)malloc_func(sizeof(video_file_t));

    size_t i = 0;
    ptr = files;

    for (i = 0; i < size-1; ++i) {
        for (int j = 0; j < size-i-1; ++j) {
            if (!is_less_func(ptr[i], ptr[j])) {
                copy_func(temp, output_structs[j]);
                copy_func(output_structs[j], output_structs[j+1]);
                copy_func(output_structs[j+1], temp);
            }
        }
    }

    output_structs[i] = 0;

    return output_structs;

    return 0;
}

// video_file_t** filter_video_files(const video_file_t** files,
//     filter_func_t filter_func,
//     copy_func_t copy_func,
//     malloc_func_t malloc_func)
// {
//     size_t filtered_structs = 0;
//     const video_file_t** ptr = files;

//     while (*ptr != 0) {
//         if (filter_func(*ptr))
//             filtered_structs++;
//         ptr++;
//     }

//     if (filtered_structs == 0)
//         return NULL;

//     const size_t size = (filtered_structs + 1) * sizeof(video_file_t*);
//     video_file_t** output_structs = (video_file_t**)malloc_func(size);

//     size_t i = 0;
//     ptr = files;

//     while (*ptr != 0) {
//         if (filter_func(*ptr)) {
//             video_file_t* new_pointer_to_struct = (video_file_t*)malloc_func(sizeof(video_file_t));
//             copy_func(new_pointer_to_struct, *ptr);
//             output_structs[i++] = new_pointer_to_struct;
//         }
//         ptr++;
//     }

//     output_structs[i] = 0;

//     return output_structs;
// }

int main () {

    printf("%s", "Hello, World!");

    return 0;
}