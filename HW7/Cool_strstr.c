const char* cool_strstr(const char* str1, const char* str2)
{
    while (*str1) {
        if (*str1 == *str2) {
        }
        str1++;
    }
}
//
// char * strstr (const char * haystack, const char * needle) {
//     char * needle_ptr = NULL, * haystack_ptr = NULL;
//
//     if (haystack == NULL || needle == NULL)
//         return NULL;
//
//     while (*haystack) {
//
//         if (*haystack == *needle) {
//             int trigger_out = 1;
//
//             needle_ptr = needle;
//             haystack_ptr = haystack;
//
//             while (*needle_ptr && *haystack_ptr) {
//                 trigger_out = trigger_out && (*needle_ptr == *haystack_ptr);
//             }
//
//             if (trigger_out)
//                 return haystack;
//         }
//         ++haystack;
//     }
//     return NULL;
// }