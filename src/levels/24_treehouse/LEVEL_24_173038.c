struct List_173038 {
    int unused;
    int count;
    int values[1];
};

void func_173038(char *object, int value)
{
    struct List_173038 *list = *(struct List_173038 **)(object + 0x58);
    list->values[list->count] = value;
    list->count++;
}
