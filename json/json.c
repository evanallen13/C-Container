// file: loop_json_array.c
#include <stdio.h>
#include <stdlib.h>
#include <cjson/cJSON.h>

// file: loop_json_array.c
#include <stdio.h>
#include <stdlib.h>
#include <cjson/cJSON.h>

int main(void) {
    // create a cJSON object
    cJSON *json = cJSON_CreateObject();
    if (!json) {
        fprintf(stderr, "Failed to create cJSON object\n");
        return 1;
    }

    // add a key/value pair
    cJSON_AddStringToObject(json, "message", "Hello, world!");

    // print JSON string
    char *json_str = cJSON_Print(json);
    if (json_str) {
        printf("%s\n", json_str);
        free(json_str);
    }

    // clean up
    cJSON_Delete(json);

    return 0;
}
