extern void *func_06AA18(void *key);

void func_06AC20(void *object, int value)
{
    char *record = func_06AA18(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
