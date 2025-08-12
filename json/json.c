// file: loop_json_array.c
#include <stdio.h>
#include <stdlib.h>
// #include "cJSON.h"

void main(){
    printf("Hello World! \n");
}
// #include "cJSON.h"

// int main(void) {
//     const char *json_str =
//         "[{\"name\": \"Alice\", \"age\": 30},"
//         " {\"name\": \"Bob\", \"age\": 25},"
//         " {\"name\": \"Charlie\", \"age\": 35}]";

//     // Parse the JSON string
//     cJSON *root = cJSON_Parse(json_str);
//     if (root == NULL) {
//         printf("Error parsing JSON\n");
//         return 1;
//     }

//     if (!cJSON_IsArray(root)) {
//         printf("JSON is not an array\n");
//         cJSON_Delete(root);
//         return 1;
//     }

//     int arr_size = cJSON_GetArraySize(root);
//     for (int i = 0; i < arr_size; i++) {
//         cJSON *item = cJSON_GetArrayItem(root, i);
//         if (cJSON_IsObject(item)) {
//             cJSON *name = cJSON_GetObjectItem(item, "name");
//             cJSON *age = cJSON_GetObjectItem(item, "age");

//             if (cJSON_IsString(name) && cJSON_IsNumber(age)) {
//                 printf("Name: %s, Age: %d\n", name->valuestring, age->valueint);
//             }
//         }
//     }

//     cJSON_Delete(root);
//     return 0;
// }
