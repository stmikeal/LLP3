#include "ui/console_tools.h"
#include "message.pb.h"

uint64_t get_hash(char *string) {
    uint64_t value = INITHASH;
    while(*string) value = (value * AHASH) ^ (*(string++) * BHASH);
    return value % CHASH;
}

void init_file(FILE *file) {
    printf("We notice, you haven't got initialized file yet.\n");
    printf("So, you need to make file pattern...\n");
    printf("Firstly, enter how many fields in each tuple do you need: ");
    size_t count;
    enum crud_operation_status status = !scanf("%ld", &count);
    printf("Then you need to describe each field:\n");
    char *str;
    char **str_array = malloc(count * sizeof(char *));
    uint32_t type;
    uint32_t *types = malloc(count * sizeof(uint32_t));
    size_t *sizes = malloc(count * sizeof(size_t));
    size_t temp_size;
    for(size_t iter = 0; iter < count; iter++){
        printf("--- Field %-3zu ---\n", iter);
        str = malloc(BUFFER_FIELD_SIZE);
        printf("Enter field name: ");
        status |= !scanf("%s", str);
        str_array[iter] = str;
        temp_size = strlen(str);
        sizes[iter] = temp_size + (!(temp_size % FILE_GRANULARITY) ? 1 : 0);
        printf("%d. Boolean\n", BOOLEAN_TYPE);
        printf("%d. Integer\n", INTEGER_TYPE);
        printf("%d. Float\n", FLOAT_TYPE);
        printf("%d. String\n", STRING_TYPE);
        printf("Choose field type by entering number: ");
        status |= !scanf("%d", &type);
        types[iter] = type;
    }
    init_empty_file(file, str_array, types, count, sizes);
    for(size_t iter = 0; iter < count; iter++) free(str_array[iter]);
    free(str_array);
    free(sizes);
    free(types);
    if (status) printf("Invalid init of file!");
}

uint64_t parse_request(char *filename, Query_tree tree, struct result_list_tuple **list){
    FILE *file;
    open_file_anyway(&file, filename);
    find_all(file, list);
    for(size_t i = 0; i < tree.level_count; i++){
        Level level = tree.level[i];
    }
}